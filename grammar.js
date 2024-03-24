function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function directive(kw, ...rest) {
  return seq(
    choice("{%", "{%-"),
    /\s*/,
    keyword(kw),
    ...rest,
    choice("%}", "-%}", "+%}"),
  );
}

function expression_in_statement($) {
  return alias($._expression_in_statement, $.expression);
}

function keyword(kw) {
  return alias(token(prec(10, kw)), "_keyword");
}

function context_specifier() {
  return choice(keyword("with context"), keyword("without context"));
}

module.exports = grammar({
  name: "jinja2",
  word: ($) => $.identifier,
  conflicts: ($) => [[$.elif_statement]],
  rules: {
    template: ($) => repeat($._item),

    _item: ($) => choice($._statement, $.output, $.comment, $.text),

    text: (_) =>
      prec.right(
        repeat1(choice(token(prec(-1, /\{/)), token(prec(1, /[^\s\{][^\{]*/)))),
      ),

    comment: () => seq("{#", repeat(/[^\#]+|[\#]/), "#}"),

    output: ($) =>
      seq("{{", /\s*/, alias(optional($._output_code), $.expression), "}}"),
    _output_code: () => prec.right(repeat1(/[^\s\}\-\+]+|[\}\-\+]/)),

    _expression_in_statement: () => repeat1(/[^\s\%\-\+]+|[\%\-\+]/),

    _statement: ($) =>
      choice(
        $.for_statement,
        $.if_statement,
        $.macro_statement,
        $.call_statement,
        $.filter_statement,
        $.assignment_statement,
        $.end_assignment_statement,
        $.extends_statement,
        $.block_statement,
        $.include_statement,
        $.import_statement,
        $.with_statement,
        $.custom_statement,
      ),

    for_statement: ($) =>
      seq(
        directive("for", field("iteration", expression_in_statement($))),
        field("body", repeat($._item)),
        choice($.for_else_statement, directive("endfor")),
      ),
    for_else_statement: ($) =>
      seq(
        directive("else"),
        field("body", repeat($._item)),
        directive("endfor"),
      ),

    if_statement: ($) =>
      seq(
        directive("if", field("condition", expression_in_statement($))),
        field("body", repeat($._item)),
        field("elif", repeat($.elif_statement)),
        choice(field("else", $.else_statement), directive("endif")),
      ),

    elif_statement: ($) =>
      seq(
        directive("elif", field("condition", expression_in_statement($))),
        repeat($._item),
      ),

    else_statement: ($) =>
      seq(
        directive("else"),
        field("body", repeat($._item)),
        directive("endif"),
      ),

    macro_statement: ($) =>
      seq(
        directive("macro", field("signature", expression_in_statement($))),
        repeat($._item),
        directive("endmacro"),
      ),

    call_statement: ($) =>
      seq(
        directive("call", field("call", expression_in_statement($))),
        repeat($._item),
        directive("endcall"),
      ),

    filter_statement: ($) =>
      seq(
        directive("filter", field("code", expression_in_statement($))),
        repeat($._item),
        directive("endfilter"),
      ),

    assignment_statement: ($) =>
      directive("set", field("code", expression_in_statement($))),

    end_assignment_statement: ($) => directive("endset"),

    extends_statement: ($) => directive("extends", expression_in_statement($)),

    block_statement: ($) =>
      seq(
        directive(
          "block",
          field("id", $.identifier),
          optional(keyword("scoped")),
          optional(keyword("required")),
        ),
        repeat($._item),
        directive("endblock", optional($.identifier)),
      ),

    include_statement: ($) =>
      directive(
        "include",
        choice($.string, $.identifier),
        optional(alias("ignore missing", "_keyword")),
        optional(context_specifier()),
      ),
    import_statement: ($) =>
      choice(
        directive(
          "import",
          field("id", $.string),
          alias("as", "_keyword"),
          $.identifier,
          optional(context_specifier()),
        ),
        directive(
          "from",
          field("id", $.string),
          keyword("import"),
          sep1(
            choice(
              $.identifier,
              seq($.identifier, keyword("as"), $.identifier),
            ),
            ",",
          ),
          optional(context_specifier()),
        ),
      ),

    with_statement: ($) =>
      seq(
        directive(
          "with",
          optional(field("assignment", expression_in_statement($))),
        ),
        repeat($._item),
        directive("endwith"),
      ),

    custom_statement: ($) =>
      prec.dynamic(
        -1,
        seq(
          choice("{%", "{%-"),
          /\s*/,
          alias($._expression_in_statement, $.custom_tag),
          choice("%}", "-%}", "+%}"),
        ),
      ),

    identifier: () => /[\w]+/,

    string: () => choice(seq(`"`, /[^\"]+/, `"`), seq(`'`, /[^\']+/, `'`)),
  },
});
