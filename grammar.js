// eslint-disable-next-line spaced-comment
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

/**
 * @param  {Rule} rule
 * @param  {string} separator
 * @return {SeqRule}
 */
function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function __statement($, ...rest) {
  return seq($._statement_start, ...rest, $._statement_end);
}

function expression_in_statement($) {
  return alias($._expression_in_statement, $.expression);
}

module.exports = grammar({
  name: 'jinja2',

  word: ($) => $.identifier,

  conflicts: ($) => [[$.elif_block]],

  rules: {
    template: ($) => repeat($._item),

    _item: ($) => choice($._statement, $.output, $.comment, $.text),

    text: (_) =>
      prec.right(
        repeat1(choice(token(prec(-1, /\{/)), token(prec(1, /[^\s\{][^\{]*/)))),
      ),

    comment: () => seq("{#", repeat(/[^\#]+|[\#]/), "#}"),

    output: ($) =>
      seq("{{", alias(optional($._output_code), $.expression), "}}"),
    _output_code: () => prec.right(repeat1(/[^\s\}\-\+]+|[\}\-\+]/)),

    _expression_in_statement: () => repeat1(/[^\s\%\-\+]+|[\%\-\+]/),

    _statement_start: (_) => choice("{%", "{%+", "{%-"),
    _statement_end: (_) => choice("%}", "+%}", "-%}"),

    _statement: ($) =>
      choice(
        $.for_block,
        $.if_block,
        $.macro_block,
        $.call_block,
        $.filter_block,
        $.assignment_statement,
        $.end_assignment_statement,
        $.extends_statement,
        $.block_block,
        $.include_statement,
        $.import_statement,
        $.with_block,
        $.raw_block,
        $.custom_statement,
      ),

    for_start_statement: ($) => __statement(
      $,
      'for',
      field('iteration', expression_in_statement($))
    ),

    for_block: ($) =>
      seq(
        $.for_start_statement,
        field('body', repeat($._item)),
        choice($.for_else_block, $.for_end_statement),
      ),

    for_else_statement: ($) => __statement($, 'else'),

    for_end_statement: ($) => __statement($, 'endfor'),

    for_else_block: ($) =>
      seq(
        $.for_else_statement,
        field('body', repeat($._item)),
        $.for_end_statement,
      ),

    if_start_statement: ($) => __statement(
      $,
      'if',
      field('condition', expression_in_statement($))
    ),

    if_end_statement: ($) => __statement($, 'endif'),

    if_block: ($) =>
      seq(
        $.if_start_statement,
        field('body', repeat($._item)),
        field('elif', repeat($.elif_block)),
        choice(field('else', $.else_block), $.if_end_statement),
      ),

    elif_statement: ($) => __statement(
      $,
      'elif',
      field('condition', expression_in_statement($))
    ),

    elif_block: ($) =>
      seq(
        $.elif_statement,
        repeat($._item),
      ),

    else_statement: ($) => __statement($, 'else'),

    else_block: ($) =>
      seq(
        $.else_statement,
        field('body', repeat($._item)),
        $.if_end_statement,
      ),

    macro_start_statement: ($) => __statement(
      $,
      'macro',
      field('signature', expression_in_statement($))
    ),

    macro_end_statement: ($) => __statement($, 'endmacro'),

    macro_block: ($) => seq(
      $.macro_start_statement,
      repeat($._item),
      $.macro_end_statement
    ),

    call_start_statement: ($) => __statement(
      $,
      'call',
      field('call', expression_in_statement($))
    ),

    call_end_statement: ($) => __statement($, 'endcall'),

    call_block: ($) => seq(
      $.call_start_statement,
      repeat($._item),
      $.call_end_statement
    ),

    filter_start_statement: ($) => __statement(
      $,
      'filter',
      field('code', expression_in_statement($))
    ),

    filter_end_statement: ($) => __statement($, 'endfilter'),

    filter_block: ($) => seq(
      $.filter_start_statement,
      repeat($._item),
      $.filter_end_statement
    ),

    assignment_statement: ($) => __statement(
      $,
      'set',
      field('code', expression_in_statement($))
    ),

    end_assignment_statement: ($) => __statement($, 'endset'),

    extends_statement: ($) => __statement(
      $,
      'extends',
      expression_in_statement($)
    ),

    block_start_statement: ($) =>
      __statement(
        $,
        'block',
        field('id', $.identifier),
        optional('scoped'),
        optional('required'),
      ),

    block_end_statement: ($) => __statement(
      $,
      'endblock',
      optional($.identifier)
    ),

    block_block: ($) => seq(
      $.block_start_statement,
      repeat($._item),
      $.block_end_statement
    ),

    include_statement: ($) =>
      __statement(
        $,
        'include',
        choice($.string, $.identifier),
        optional('ignore missing'),
        optional($._context_specifier),
      ),

    import_statement: ($) =>
      choice(
        __statement(
          $,
          'import',
          field('id', $.string),
          'as',
          $.identifier,
          optional($._context_specifier)
        ),
        __statement(
          $,
          'from',
          field('id', $.string),
          'import',
          sep1(
            choice(
              $.identifier,
              seq(
                $.identifier,
                'as',
                $.identifier
              )
            ),
            ','
          ),
          optional($._context_specifier)
        )
      ),

    _context_specifier: (_) => choice(
      'with context',
      'without context'
    ),

    with_start_statement: ($) => __statement(
      $,
      'with',
      optional(
        field('assignment', expression_in_statement($))
      ),
    ),

    with_end_statement: ($) => __statement($, 'endwith'),

    with_block: ($) =>
      seq(
        $.with_start_statement,
        repeat($._item),
        $.with_end_statement,
      ),

    raw_start_statement: ($) => __statement($, 'raw'),

    raw_end_statement: ($) => __statement($, 'endraw'),

    raw_block: ($) =>
      seq(
        $.raw_start_statement,
        $.text,
        $.raw_end_statement
      ),

    custom_statement: ($) =>
      prec.dynamic(
        -1,
        seq(
          $._statement_start,
          alias($._expression_in_statement, $.custom_tag),
          $._statement_end,
        ),
      ),

    identifier: () => /[\w]+/,

    string: () => choice(seq(`"`, /[^\"]+/, `"`), seq(`'`, /[^\']+/, `'`)),
  },
});
