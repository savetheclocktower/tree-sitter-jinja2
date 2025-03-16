#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 186
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 1
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 17

enum ts_symbol_identifiers {
  sym_identifier = 1,
  aux_sym_text_token1 = 2,
  aux_sym_text_token2 = 3,
  anon_sym_LBRACE_POUND = 4,
  aux_sym_comment_token1 = 5,
  anon_sym_POUND_RBRACE = 6,
  anon_sym_LBRACE_LBRACE = 7,
  anon_sym_RBRACE_RBRACE = 8,
  aux_sym__output_code_token1 = 9,
  aux_sym__expression_in_statement_token1 = 10,
  anon_sym_LBRACE_PERCENT = 11,
  anon_sym_LBRACE_PERCENT_PLUS = 12,
  anon_sym_LBRACE_PERCENT_DASH = 13,
  anon_sym_PERCENT_RBRACE = 14,
  anon_sym_PLUS_PERCENT_RBRACE = 15,
  anon_sym_DASH_PERCENT_RBRACE = 16,
  anon_sym_for = 17,
  anon_sym_else = 18,
  anon_sym_endfor = 19,
  anon_sym_if = 20,
  anon_sym_endif = 21,
  anon_sym_elif = 22,
  anon_sym_macro = 23,
  anon_sym_endmacro = 24,
  anon_sym_call = 25,
  anon_sym_endcall = 26,
  anon_sym_filter = 27,
  anon_sym_endfilter = 28,
  anon_sym_set = 29,
  anon_sym_endset = 30,
  anon_sym_extends = 31,
  anon_sym_block = 32,
  anon_sym_scoped = 33,
  anon_sym_required = 34,
  anon_sym_endblock = 35,
  anon_sym_include = 36,
  anon_sym_ignoremissing = 37,
  anon_sym_import = 38,
  anon_sym_as = 39,
  anon_sym_from = 40,
  anon_sym_COMMA = 41,
  anon_sym_withcontext = 42,
  anon_sym_withoutcontext = 43,
  anon_sym_with = 44,
  anon_sym_endwith = 45,
  anon_sym_raw = 46,
  anon_sym_endraw = 47,
  anon_sym_DQUOTE = 48,
  aux_sym_string_token1 = 49,
  anon_sym_SQUOTE = 50,
  aux_sym_string_token2 = 51,
  sym_raw_text = 52,
  sym_error_sentinel = 53,
  sym_template = 54,
  sym__item = 55,
  sym_text = 56,
  sym_comment = 57,
  sym_output = 58,
  sym__output_code = 59,
  aux_sym__expression_in_statement = 60,
  sym__statement_start = 61,
  sym__statement_end = 62,
  sym__statement = 63,
  sym_for_start_statement = 64,
  sym_for_block = 65,
  sym_for_else_statement = 66,
  sym_for_end_statement = 67,
  sym_for_else_block = 68,
  sym_if_start_statement = 69,
  sym_if_end_statement = 70,
  sym_if_block = 71,
  sym_elif_statement = 72,
  sym_elif_block = 73,
  sym_else_statement = 74,
  sym_else_block = 75,
  sym_macro_start_statement = 76,
  sym_macro_end_statement = 77,
  sym_macro_block = 78,
  sym_call_start_statement = 79,
  sym_call_end_statement = 80,
  sym_call_block = 81,
  sym_filter_start_statement = 82,
  sym_filter_end_statement = 83,
  sym_filter_block = 84,
  sym_assignment_statement = 85,
  sym_end_assignment_statement = 86,
  sym_extends_statement = 87,
  sym_block_start_statement = 88,
  sym_block_end_statement = 89,
  sym_block_block = 90,
  sym_include_statement = 91,
  sym_import_statement = 92,
  sym__context_specifier = 93,
  sym_with_start_statement = 94,
  sym_with_end_statement = 95,
  sym_with_block = 96,
  sym_raw_start_statement = 97,
  sym_raw_end_statement = 98,
  sym_raw_block = 99,
  sym_custom_statement = 100,
  sym_string = 101,
  aux_sym_template_repeat1 = 102,
  aux_sym_text_repeat1 = 103,
  aux_sym_comment_repeat1 = 104,
  aux_sym__output_code_repeat1 = 105,
  aux_sym_if_block_repeat1 = 106,
  aux_sym_import_statement_repeat1 = 107,
  alias_sym_custom_tag = 108,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_text_token1] = "text_token1",
  [aux_sym_text_token2] = "text_token2",
  [anon_sym_LBRACE_POUND] = "{#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_RBRACE] = "#}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [aux_sym__output_code_token1] = "_output_code_token1",
  [aux_sym__expression_in_statement_token1] = "_expression_in_statement_token1",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_LBRACE_PERCENT_PLUS] = "{%+",
  [anon_sym_LBRACE_PERCENT_DASH] = "{%-",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_PLUS_PERCENT_RBRACE] = "+%}",
  [anon_sym_DASH_PERCENT_RBRACE] = "-%}",
  [anon_sym_for] = "for",
  [anon_sym_else] = "else",
  [anon_sym_endfor] = "endfor",
  [anon_sym_if] = "if",
  [anon_sym_endif] = "endif",
  [anon_sym_elif] = "elif",
  [anon_sym_macro] = "macro",
  [anon_sym_endmacro] = "endmacro",
  [anon_sym_call] = "call",
  [anon_sym_endcall] = "endcall",
  [anon_sym_filter] = "filter",
  [anon_sym_endfilter] = "endfilter",
  [anon_sym_set] = "set",
  [anon_sym_endset] = "endset",
  [anon_sym_extends] = "extends",
  [anon_sym_block] = "block",
  [anon_sym_scoped] = "scoped",
  [anon_sym_required] = "required",
  [anon_sym_endblock] = "endblock",
  [anon_sym_include] = "include",
  [anon_sym_ignoremissing] = "ignore missing",
  [anon_sym_import] = "import",
  [anon_sym_as] = "as",
  [anon_sym_from] = "from",
  [anon_sym_COMMA] = ",",
  [anon_sym_withcontext] = "with context",
  [anon_sym_withoutcontext] = "without context",
  [anon_sym_with] = "with",
  [anon_sym_endwith] = "endwith",
  [anon_sym_raw] = "raw",
  [anon_sym_endraw] = "endraw",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [sym_raw_text] = "text",
  [sym_error_sentinel] = "error_sentinel",
  [sym_template] = "template",
  [sym__item] = "_item",
  [sym_text] = "text",
  [sym_comment] = "comment",
  [sym_output] = "output",
  [sym__output_code] = "expression",
  [aux_sym__expression_in_statement] = "_expression_in_statement",
  [sym__statement_start] = "_statement_start",
  [sym__statement_end] = "_statement_end",
  [sym__statement] = "_statement",
  [sym_for_start_statement] = "for_start_statement",
  [sym_for_block] = "for_block",
  [sym_for_else_statement] = "for_else_statement",
  [sym_for_end_statement] = "for_end_statement",
  [sym_for_else_block] = "for_else_block",
  [sym_if_start_statement] = "if_start_statement",
  [sym_if_end_statement] = "if_end_statement",
  [sym_if_block] = "if_block",
  [sym_elif_statement] = "elif_statement",
  [sym_elif_block] = "elif_block",
  [sym_else_statement] = "else_statement",
  [sym_else_block] = "else_block",
  [sym_macro_start_statement] = "macro_start_statement",
  [sym_macro_end_statement] = "macro_end_statement",
  [sym_macro_block] = "macro_block",
  [sym_call_start_statement] = "call_start_statement",
  [sym_call_end_statement] = "call_end_statement",
  [sym_call_block] = "call_block",
  [sym_filter_start_statement] = "filter_start_statement",
  [sym_filter_end_statement] = "filter_end_statement",
  [sym_filter_block] = "filter_block",
  [sym_assignment_statement] = "assignment_statement",
  [sym_end_assignment_statement] = "end_assignment_statement",
  [sym_extends_statement] = "extends_statement",
  [sym_block_start_statement] = "block_start_statement",
  [sym_block_end_statement] = "block_end_statement",
  [sym_block_block] = "block_block",
  [sym_include_statement] = "include_statement",
  [sym_import_statement] = "import_statement",
  [sym__context_specifier] = "_context_specifier",
  [sym_with_start_statement] = "with_start_statement",
  [sym_with_end_statement] = "with_end_statement",
  [sym_with_block] = "with_block",
  [sym_raw_start_statement] = "raw_start_statement",
  [sym_raw_end_statement] = "raw_end_statement",
  [sym_raw_block] = "raw_block",
  [sym_custom_statement] = "custom_statement",
  [sym_string] = "string",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym__output_code_repeat1] = "_output_code_repeat1",
  [aux_sym_if_block_repeat1] = "if_block_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [alias_sym_custom_tag] = "custom_tag",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [aux_sym_text_token2] = aux_sym_text_token2,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND_RBRACE] = anon_sym_POUND_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [aux_sym__output_code_token1] = aux_sym__output_code_token1,
  [aux_sym__expression_in_statement_token1] = aux_sym__expression_in_statement_token1,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_LBRACE_PERCENT_PLUS] = anon_sym_LBRACE_PERCENT_PLUS,
  [anon_sym_LBRACE_PERCENT_DASH] = anon_sym_LBRACE_PERCENT_DASH,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_PLUS_PERCENT_RBRACE] = anon_sym_PLUS_PERCENT_RBRACE,
  [anon_sym_DASH_PERCENT_RBRACE] = anon_sym_DASH_PERCENT_RBRACE,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_endfor] = anon_sym_endfor,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_macro] = anon_sym_macro,
  [anon_sym_endmacro] = anon_sym_endmacro,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_endcall] = anon_sym_endcall,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_endfilter] = anon_sym_endfilter,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_endset] = anon_sym_endset,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_scoped] = anon_sym_scoped,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_endblock] = anon_sym_endblock,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_ignoremissing] = anon_sym_ignoremissing,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_withcontext] = anon_sym_withcontext,
  [anon_sym_withoutcontext] = anon_sym_withoutcontext,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_endwith] = anon_sym_endwith,
  [anon_sym_raw] = anon_sym_raw,
  [anon_sym_endraw] = anon_sym_endraw,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_raw_text] = sym_text,
  [sym_error_sentinel] = sym_error_sentinel,
  [sym_template] = sym_template,
  [sym__item] = sym__item,
  [sym_text] = sym_text,
  [sym_comment] = sym_comment,
  [sym_output] = sym_output,
  [sym__output_code] = sym__output_code,
  [aux_sym__expression_in_statement] = aux_sym__expression_in_statement,
  [sym__statement_start] = sym__statement_start,
  [sym__statement_end] = sym__statement_end,
  [sym__statement] = sym__statement,
  [sym_for_start_statement] = sym_for_start_statement,
  [sym_for_block] = sym_for_block,
  [sym_for_else_statement] = sym_for_else_statement,
  [sym_for_end_statement] = sym_for_end_statement,
  [sym_for_else_block] = sym_for_else_block,
  [sym_if_start_statement] = sym_if_start_statement,
  [sym_if_end_statement] = sym_if_end_statement,
  [sym_if_block] = sym_if_block,
  [sym_elif_statement] = sym_elif_statement,
  [sym_elif_block] = sym_elif_block,
  [sym_else_statement] = sym_else_statement,
  [sym_else_block] = sym_else_block,
  [sym_macro_start_statement] = sym_macro_start_statement,
  [sym_macro_end_statement] = sym_macro_end_statement,
  [sym_macro_block] = sym_macro_block,
  [sym_call_start_statement] = sym_call_start_statement,
  [sym_call_end_statement] = sym_call_end_statement,
  [sym_call_block] = sym_call_block,
  [sym_filter_start_statement] = sym_filter_start_statement,
  [sym_filter_end_statement] = sym_filter_end_statement,
  [sym_filter_block] = sym_filter_block,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_end_assignment_statement] = sym_end_assignment_statement,
  [sym_extends_statement] = sym_extends_statement,
  [sym_block_start_statement] = sym_block_start_statement,
  [sym_block_end_statement] = sym_block_end_statement,
  [sym_block_block] = sym_block_block,
  [sym_include_statement] = sym_include_statement,
  [sym_import_statement] = sym_import_statement,
  [sym__context_specifier] = sym__context_specifier,
  [sym_with_start_statement] = sym_with_start_statement,
  [sym_with_end_statement] = sym_with_end_statement,
  [sym_with_block] = sym_with_block,
  [sym_raw_start_statement] = sym_raw_start_statement,
  [sym_raw_end_statement] = sym_raw_end_statement,
  [sym_raw_block] = sym_raw_block,
  [sym_custom_statement] = sym_custom_statement,
  [sym_string] = sym_string,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym__output_code_repeat1] = aux_sym__output_code_repeat1,
  [aux_sym_if_block_repeat1] = aux_sym_if_block_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [alias_sym_custom_tag] = alias_sym_custom_tag,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__output_code_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expression_in_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endmacro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endcall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfilter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scoped] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endblock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignoremissing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_withcontext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_withoutcontext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endwith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endraw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_error_sentinel] = {
    .visible = true,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_output] = {
    .visible = true,
    .named = true,
  },
  [sym__output_code] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__expression_in_statement] = {
    .visible = false,
    .named = false,
  },
  [sym__statement_start] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_end] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_for_start_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_block] = {
    .visible = true,
    .named = true,
  },
  [sym_for_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_end_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_else_block] = {
    .visible = true,
    .named = true,
  },
  [sym_if_start_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_end_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_block] = {
    .visible = true,
    .named = true,
  },
  [sym_elif_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_elif_block] = {
    .visible = true,
    .named = true,
  },
  [sym_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_block] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_start_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_end_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_block] = {
    .visible = true,
    .named = true,
  },
  [sym_call_start_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_call_end_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_call_block] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_start_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_end_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_block] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_end_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_extends_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_block_start_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_block_end_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_block_block] = {
    .visible = true,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__context_specifier] = {
    .visible = false,
    .named = true,
  },
  [sym_with_start_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_with_end_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_with_block] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_start_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_end_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_block] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__output_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_custom_tag] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_assignment = 1,
  field_body = 2,
  field_call = 3,
  field_code = 4,
  field_condition = 5,
  field_elif = 6,
  field_else = 7,
  field_id = 8,
  field_iteration = 9,
  field_signature = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_assignment] = "assignment",
  [field_body] = "body",
  [field_call] = "call",
  [field_code] = "code",
  [field_condition] = "condition",
  [field_elif] = "elif",
  [field_else] = "else",
  [field_id] = "id",
  [field_iteration] = "iteration",
  [field_signature] = "signature",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 1},
  [13] = {.index = 12, .length = 1},
  [14] = {.index = 13, .length = 1},
  [15] = {.index = 14, .length = 2},
  [16] = {.index = 16, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_else, 1},
  [1] =
    {field_body, 1},
  [2] =
    {field_body, 1},
    {field_else, 2},
  [4] =
    {field_elif, 1},
  [5] =
    {field_elif, 1},
    {field_else, 2},
  [7] =
    {field_iteration, 2},
  [8] =
    {field_condition, 2},
  [9] =
    {field_signature, 2},
  [10] =
    {field_call, 2},
  [11] =
    {field_code, 2},
  [12] =
    {field_id, 2},
  [13] =
    {field_assignment, 2},
  [14] =
    {field_body, 1},
    {field_elif, 2},
  [16] =
    {field_body, 1},
    {field_elif, 2},
    {field_else, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [1] = alias_sym_custom_tag,
  },
  [7] = {
    [2] = sym__output_code,
  },
  [8] = {
    [2] = sym__output_code,
  },
  [9] = {
    [2] = sym__output_code,
  },
  [10] = {
    [2] = sym__output_code,
  },
  [11] = {
    [2] = sym__output_code,
  },
  [12] = {
    [2] = sym__output_code,
  },
  [14] = {
    [2] = sym__output_code,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__expression_in_statement, 3,
    aux_sym__expression_in_statement,
    alias_sym_custom_tag,
    sym__output_code,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(73);
      ADVANCE_MAP(
        '"', 123,
        '#', 121,
        '%', 121,
        '\'', 123,
        '+', 75,
        ',', 123,
        '-', 75,
        'b', 99,
        'c', 77,
        'e', 100,
        'f', 94,
        'i', 90,
        'm', 78,
        'r', 76,
        's', 89,
        'w', 96,
        '{', 74,
        '}', 121,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 289,
        '%', 64,
        '\'', 292,
        '+', 10,
        ',', 265,
        '-', 11,
        'w', 277,
        '}', 65,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '%') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(64);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == ',') ADVANCE(265);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'w') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(64);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead == 'w') ADVANCE(277);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(232);
      if (lookahead == '+') ADVANCE(135);
      if (lookahead == '-') ADVANCE(136);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(66);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(67);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        'b', 181,
        'c', 138,
        'e', 182,
        'f', 175,
        'i', 166,
        'm', 139,
        'r', 137,
        's', 162,
        'w', 176,
        '%', 134,
        '+', 134,
        '-', 134,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        'b', 181,
        'c', 138,
        'e', 197,
        'f', 175,
        'i', 166,
        'm', 139,
        'r', 137,
        's', 162,
        'w', 176,
        '%', 134,
        '+', 134,
        '-', 134,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        'b', 181,
        'c', 138,
        'e', 186,
        'f', 175,
        'i', 166,
        'm', 139,
        'r', 137,
        's', 162,
        'w', 176,
        '%', 134,
        '+', 134,
        '-', 134,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        'b', 181,
        'c', 138,
        'e', 194,
        'f', 175,
        'i', 166,
        'm', 139,
        'r', 137,
        's', 162,
        'w', 176,
        '%', 134,
        '+', 134,
        '-', 134,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        'b', 181,
        'c', 138,
        'e', 198,
        'f', 175,
        'i', 166,
        'm', 139,
        'r', 137,
        's', 162,
        'w', 176,
        '%', 134,
        '+', 134,
        '-', 134,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        'b', 181,
        'c', 138,
        'e', 199,
        'f', 175,
        'i', 166,
        'm', 139,
        'r', 137,
        's', 162,
        'w', 176,
        '%', 134,
        '+', 134,
        '-', 134,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        'b', 181,
        'c', 138,
        'e', 196,
        'f', 175,
        'i', 166,
        'm', 139,
        'r', 137,
        's', 162,
        'w', 176,
        '%', 134,
        '+', 134,
        '-', 134,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        'b', 181,
        'c', 138,
        'e', 200,
        'f', 175,
        'i', 166,
        'm', 139,
        'r', 137,
        's', 162,
        'w', 176,
        '%', 134,
        '+', 134,
        '-', 134,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        'b', 181,
        'c', 138,
        'e', 201,
        'f', 175,
        'i', 166,
        'm', 139,
        'r', 137,
        's', 162,
        'w', 176,
        '%', 134,
        '+', 134,
        '-', 134,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        'b', 181,
        'c', 138,
        'e', 202,
        'f', 175,
        'i', 166,
        'm', 139,
        'r', 137,
        's', 162,
        'w', 176,
        '%', 134,
        '+', 134,
        '-', 134,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(247);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(245);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(261);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(1);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 62:
      if (lookahead == 'x') ADVANCE(55);
      END_STATE();
    case 63:
      if (lookahead == 'x') ADVANCE(56);
      END_STATE();
    case 64:
      if (lookahead == '}') ADVANCE(237);
      END_STATE();
    case 65:
      if (lookahead == '}') ADVANCE(130);
      END_STATE();
    case 66:
      if (lookahead == '}') ADVANCE(238);
      END_STATE();
    case 67:
      if (lookahead == '}') ADVANCE(239);
      END_STATE();
    case 68:
      if (lookahead == '}') ADVANCE(132);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68);
      if (lookahead != 0) ADVANCE(133);
      END_STATE();
    case 69:
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(69);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 70:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(294);
      END_STATE();
    case 71:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(291);
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      if (lookahead == '{') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(72);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '%') ADVANCE(234);
      if (lookahead == '{') ADVANCE(129);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == '%') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(123);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'a') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'a') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'a') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(78);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 'w') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'c') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'c') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'c') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'd') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'd') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'd') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'e') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'e') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'f') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'h') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 's') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'i') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'k') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'l') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'l') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 'x') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'l') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'l') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'l') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'm') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'n') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'o') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'o') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'o') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'o') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'p') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'r') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'r') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'r') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 't') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 't') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 't') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 't') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'u') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'w') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == '}') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '}') ADVANCE(128);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__output_code_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__output_code_token1);
      if (lookahead == '}') ADVANCE(130);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__output_code_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != '}') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == '%') ADVANCE(66);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == '%') ADVANCE(67);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'b') ADVANCE(189);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'c') ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'c') ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'c') ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 'm') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'f') ADVANCE(248);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'f') ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'f') ADVANCE(209);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'h') ADVANCE(268);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'h') ADVANCE(269);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'k') ADVANCE(258);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'k') ADVANCE(259);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == 'x') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(251);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == 'x') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'm') ADVANCE(264);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == 'x') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == 'x') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == 'x') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead == 'x') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == 'x') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(153);
      if (lookahead == 'x') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead == 'x') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead == 'x') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'o') ADVANCE(249);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'o') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'o') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'p') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'r') ADVANCE(253);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'r') ADVANCE(254);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'r') ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 's') ADVANCE(257);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead == 'w') ADVANCE(177);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'u') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'w') ADVANCE(270);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == '}') ADVANCE(237);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == '-') ADVANCE(236);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_PLUS);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_DASH);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_PLUS_PERCENT_RBRACE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_RBRACE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_endfor);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_endif);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_elif);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_macro);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_endmacro);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_endcall);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_filter);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_endfilter);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_endset);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_endblock);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_ignoremissing);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_from);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_withcontext);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_withoutcontext);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_endwith);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_raw);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(233);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(278);
      if (lookahead == 'm') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(294);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 'r') ADVANCE(3);
      if (lookahead == 's') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(8);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'q') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'w') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_endraw);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_scoped);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 72},
  [2] = {.lex_state = 72},
  [3] = {.lex_state = 72},
  [4] = {.lex_state = 72},
  [5] = {.lex_state = 72},
  [6] = {.lex_state = 72},
  [7] = {.lex_state = 72},
  [8] = {.lex_state = 72},
  [9] = {.lex_state = 72},
  [10] = {.lex_state = 72},
  [11] = {.lex_state = 72},
  [12] = {.lex_state = 72},
  [13] = {.lex_state = 72},
  [14] = {.lex_state = 72},
  [15] = {.lex_state = 72},
  [16] = {.lex_state = 72},
  [17] = {.lex_state = 72},
  [18] = {.lex_state = 72},
  [19] = {.lex_state = 72},
  [20] = {.lex_state = 72},
  [21] = {.lex_state = 72},
  [22] = {.lex_state = 72},
  [23] = {.lex_state = 72},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 72},
  [38] = {.lex_state = 72},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 72},
  [43] = {.lex_state = 72},
  [44] = {.lex_state = 72},
  [45] = {.lex_state = 72},
  [46] = {.lex_state = 72},
  [47] = {.lex_state = 72},
  [48] = {.lex_state = 72},
  [49] = {.lex_state = 72},
  [50] = {.lex_state = 72},
  [51] = {.lex_state = 72},
  [52] = {.lex_state = 72},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 72},
  [55] = {.lex_state = 72},
  [56] = {.lex_state = 72},
  [57] = {.lex_state = 72},
  [58] = {.lex_state = 72},
  [59] = {.lex_state = 72},
  [60] = {.lex_state = 72},
  [61] = {.lex_state = 72},
  [62] = {.lex_state = 72},
  [63] = {.lex_state = 72},
  [64] = {.lex_state = 72},
  [65] = {.lex_state = 72},
  [66] = {.lex_state = 72},
  [67] = {.lex_state = 72},
  [68] = {.lex_state = 72},
  [69] = {.lex_state = 72},
  [70] = {.lex_state = 72},
  [71] = {.lex_state = 72},
  [72] = {.lex_state = 72},
  [73] = {.lex_state = 72},
  [74] = {.lex_state = 72},
  [75] = {.lex_state = 72},
  [76] = {.lex_state = 72},
  [77] = {.lex_state = 72},
  [78] = {.lex_state = 72},
  [79] = {.lex_state = 72},
  [80] = {.lex_state = 72},
  [81] = {.lex_state = 72},
  [82] = {.lex_state = 72},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 72},
  [85] = {.lex_state = 72},
  [86] = {.lex_state = 72},
  [87] = {.lex_state = 72},
  [88] = {.lex_state = 72},
  [89] = {.lex_state = 72},
  [90] = {.lex_state = 72},
  [91] = {.lex_state = 72},
  [92] = {.lex_state = 72},
  [93] = {.lex_state = 72},
  [94] = {.lex_state = 72},
  [95] = {.lex_state = 72},
  [96] = {.lex_state = 72},
  [97] = {.lex_state = 72},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 72},
  [100] = {.lex_state = 72},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 72},
  [103] = {.lex_state = 72},
  [104] = {.lex_state = 72},
  [105] = {.lex_state = 72},
  [106] = {.lex_state = 72},
  [107] = {.lex_state = 72},
  [108] = {.lex_state = 72},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 68},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 68},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 68},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 69},
  [161] = {.lex_state = 69},
  [162] = {.lex_state = 69},
  [163] = {.lex_state = 69},
  [164] = {.lex_state = 69},
  [165] = {.lex_state = 69},
  [166] = {.lex_state = 69},
  [167] = {.lex_state = 69},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 70},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 71},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_text_token1] = ACTIONS(1),
    [aux_sym_text_token2] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_POUND_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT_PLUS] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_PLUS_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_endfor] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_endmacro] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_endcall] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_endfilter] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_endset] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_scoped] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_endblock] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_endwith] = ACTIONS(1),
    [anon_sym_raw] = ACTIONS(1),
    [anon_sym_endraw] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(172),
    [sym__item] = STATE(10),
    [sym_text] = STATE(10),
    [sym_comment] = STATE(10),
    [sym_output] = STATE(10),
    [sym__statement_start] = STATE(33),
    [sym__statement] = STATE(10),
    [sym_for_start_statement] = STATE(5),
    [sym_for_block] = STATE(10),
    [sym_if_start_statement] = STATE(2),
    [sym_if_block] = STATE(10),
    [sym_macro_start_statement] = STATE(6),
    [sym_macro_block] = STATE(10),
    [sym_call_start_statement] = STATE(11),
    [sym_call_block] = STATE(10),
    [sym_filter_start_statement] = STATE(7),
    [sym_filter_block] = STATE(10),
    [sym_assignment_statement] = STATE(10),
    [sym_end_assignment_statement] = STATE(10),
    [sym_extends_statement] = STATE(10),
    [sym_block_start_statement] = STATE(8),
    [sym_block_block] = STATE(10),
    [sym_include_statement] = STATE(10),
    [sym_import_statement] = STATE(10),
    [sym_with_start_statement] = STATE(9),
    [sym_with_block] = STATE(10),
    [sym_raw_start_statement] = STATE(184),
    [sym_raw_block] = STATE(10),
    [sym_custom_statement] = STATE(10),
    [aux_sym_template_repeat1] = STATE(10),
    [aux_sym_text_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_text_token1] = ACTIONS(5),
    [aux_sym_text_token2] = ACTIONS(7),
    [anon_sym_LBRACE_POUND] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(13),
    [anon_sym_LBRACE_PERCENT_PLUS] = ACTIONS(15),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(2), 1,
      sym_if_start_statement,
    STATE(5), 1,
      sym_for_start_statement,
    STATE(6), 1,
      sym_macro_start_statement,
    STATE(7), 1,
      sym_filter_start_statement,
    STATE(8), 1,
      sym_block_start_statement,
    STATE(9), 1,
      sym_with_start_statement,
    STATE(11), 1,
      sym_call_start_statement,
    STATE(13), 1,
      sym_else_statement,
    STATE(22), 1,
      sym_elif_statement,
    STATE(24), 1,
      sym__statement_start,
    STATE(37), 1,
      aux_sym_text_repeat1,
    STATE(43), 1,
      sym_else_block,
    STATE(91), 1,
      sym_if_end_statement,
    STATE(184), 1,
      sym_raw_start_statement,
    ACTIONS(19), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(34), 2,
      sym_elif_block,
      aux_sym_if_block_repeat1,
    STATE(3), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_block,
      sym_if_block,
      sym_macro_block,
      sym_call_block,
      sym_filter_block,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_block,
      sym_include_statement,
      sym_import_statement,
      sym_with_block,
      sym_raw_block,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [88] = 22,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(2), 1,
      sym_if_start_statement,
    STATE(5), 1,
      sym_for_start_statement,
    STATE(6), 1,
      sym_macro_start_statement,
    STATE(7), 1,
      sym_filter_start_statement,
    STATE(8), 1,
      sym_block_start_statement,
    STATE(9), 1,
      sym_with_start_statement,
    STATE(11), 1,
      sym_call_start_statement,
    STATE(13), 1,
      sym_else_statement,
    STATE(22), 1,
      sym_elif_statement,
    STATE(24), 1,
      sym__statement_start,
    STATE(37), 1,
      aux_sym_text_repeat1,
    STATE(57), 1,
      sym_if_end_statement,
    STATE(58), 1,
      sym_else_block,
    STATE(184), 1,
      sym_raw_start_statement,
    ACTIONS(19), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(35), 2,
      sym_elif_block,
      aux_sym_if_block_repeat1,
    STATE(20), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_block,
      sym_if_block,
      sym_macro_block,
      sym_call_block,
      sym_filter_block,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_block,
      sym_include_statement,
      sym_import_statement,
      sym_with_block,
      sym_raw_block,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [176] = 19,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(2), 1,
      sym_if_start_statement,
    STATE(5), 1,
      sym_for_start_statement,
    STATE(6), 1,
      sym_macro_start_statement,
    STATE(7), 1,
      sym_filter_start_statement,
    STATE(8), 1,
      sym_block_start_statement,
    STATE(9), 1,
      sym_with_start_statement,
    STATE(11), 1,
      sym_call_start_statement,
    STATE(12), 1,
      sym_for_else_statement,
    STATE(25), 1,
      sym__statement_start,
    STATE(37), 1,
      aux_sym_text_repeat1,
    STATE(184), 1,
      sym_raw_start_statement,
    ACTIONS(23), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(56), 2,
      sym_for_end_statement,
      sym_for_else_block,
    STATE(20), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_block,
      sym_if_block,
      sym_macro_block,
      sym_call_block,
      sym_filter_block,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_block,
      sym_include_statement,
      sym_import_statement,
      sym_with_block,
      sym_raw_block,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [255] = 19,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(2), 1,
      sym_if_start_statement,
    STATE(5), 1,
      sym_for_start_statement,
    STATE(6), 1,
      sym_macro_start_statement,
    STATE(7), 1,
      sym_filter_start_statement,
    STATE(8), 1,
      sym_block_start_statement,
    STATE(9), 1,
      sym_with_start_statement,
    STATE(11), 1,
      sym_call_start_statement,
    STATE(12), 1,
      sym_for_else_statement,
    STATE(25), 1,
      sym__statement_start,
    STATE(37), 1,
      aux_sym_text_repeat1,
    STATE(184), 1,
      sym_raw_start_statement,
    ACTIONS(23), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(84), 2,
      sym_for_end_statement,
      sym_for_else_block,
    STATE(4), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_block,
      sym_if_block,
      sym_macro_block,
      sym_call_block,
      sym_filter_block,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_block,
      sym_include_statement,
      sym_import_statement,
      sym_with_block,
      sym_raw_block,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [334] = 18,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(2), 1,
      sym_if_start_statement,
    STATE(5), 1,
      sym_for_start_statement,
    STATE(6), 1,
      sym_macro_start_statement,
    STATE(7), 1,
      sym_filter_start_statement,
    STATE(8), 1,
      sym_block_start_statement,
    STATE(9), 1,
      sym_with_start_statement,
    STATE(11), 1,
      sym_call_start_statement,
    STATE(26), 1,
      sym__statement_start,
    STATE(37), 1,
      aux_sym_text_repeat1,
    STATE(45), 1,
      sym_macro_end_statement,
    STATE(184), 1,
      sym_raw_start_statement,
    ACTIONS(27), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(14), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_block,
      sym_if_block,
      sym_macro_block,
      sym_call_block,
      sym_filter_block,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_block,
      sym_include_statement,
      sym_import_statement,
      sym_with_block,
      sym_raw_block,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [409] = 18,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(2), 1,
      sym_if_start_statement,
    STATE(5), 1,
      sym_for_start_statement,
    STATE(6), 1,
      sym_macro_start_statement,
    STATE(7), 1,
      sym_filter_start_statement,
    STATE(8), 1,
      sym_block_start_statement,
    STATE(9), 1,
      sym_with_start_statement,
    STATE(11), 1,
      sym_call_start_statement,
    STATE(27), 1,
      sym__statement_start,
    STATE(37), 1,
      aux_sym_text_repeat1,
    STATE(47), 1,
      sym_filter_end_statement,
    STATE(184), 1,
      sym_raw_start_statement,
    ACTIONS(31), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(18), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_block,
      sym_if_block,
      sym_macro_block,
      sym_call_block,
      sym_filter_block,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_block,
      sym_include_statement,
      sym_import_statement,
      sym_with_block,
      sym_raw_block,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [484] = 18,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(2), 1,
      sym_if_start_statement,
    STATE(5), 1,
      sym_for_start_statement,
    STATE(6), 1,
      sym_macro_start_statement,
    STATE(7), 1,
      sym_filter_start_statement,
    STATE(8), 1,
      sym_block_start_statement,
    STATE(9), 1,
      sym_with_start_statement,
    STATE(11), 1,
      sym_call_start_statement,
    STATE(31), 1,
      sym__statement_start,
    STATE(37), 1,
      aux_sym_text_repeat1,
    STATE(48), 1,
      sym_block_end_statement,
    STATE(184), 1,
      sym_raw_start_statement,
    ACTIONS(35), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(15), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_block,
      sym_if_block,
      sym_macro_block,
      sym_call_block,
      sym_filter_block,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_block,
      sym_include_statement,
      sym_import_statement,
      sym_with_block,
      sym_raw_block,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [559] = 18,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(2), 1,
      sym_if_start_statement,
    STATE(5), 1,
      sym_for_start_statement,
    STATE(6), 1,
      sym_macro_start_statement,
    STATE(7), 1,
      sym_filter_start_statement,
    STATE(8), 1,
      sym_block_start_statement,
    STATE(9), 1,
      sym_with_start_statement,
    STATE(11), 1,
      sym_call_start_statement,
    STATE(28), 1,
      sym__statement_start,
    STATE(37), 1,
      aux_sym_text_repeat1,
    STATE(49), 1,
      sym_with_end_statement,
    STATE(184), 1,
      sym_raw_start_statement,
    ACTIONS(39), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(17), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_block,
      sym_if_block,
      sym_macro_block,
      sym_call_block,
      sym_filter_block,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_block,
      sym_include_statement,
      sym_import_statement,
      sym_with_block,
      sym_raw_block,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [634] = 18,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_if_start_statement,
    STATE(5), 1,
      sym_for_start_statement,
    STATE(6), 1,
      sym_macro_start_statement,
    STATE(7), 1,
      sym_filter_start_statement,
    STATE(8), 1,
      sym_block_start_statement,
    STATE(9), 1,
      sym_with_start_statement,
    STATE(11), 1,
      sym_call_start_statement,
    STATE(33), 1,
      sym__statement_start,
    STATE(37), 1,
      aux_sym_text_repeat1,
    STATE(184), 1,
      sym_raw_start_statement,
    ACTIONS(15), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(20), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_block,
      sym_if_block,
      sym_macro_block,
      sym_call_block,
      sym_filter_block,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_block,
      sym_include_statement,
      sym_import_statement,
      sym_with_block,
      sym_raw_block,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [709] = 18,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(43), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(2), 1,
      sym_if_start_statement,
    STATE(5), 1,
      sym_for_start_statement,
    STATE(6), 1,
      sym_macro_start_statement,
    STATE(7), 1,
      sym_filter_start_statement,
    STATE(8), 1,
      sym_block_start_statement,
    STATE(9), 1,
      sym_with_start_statement,
    STATE(11), 1,
      sym_call_start_statement,
    STATE(30), 1,
      sym__statement_start,
    STATE(37), 1,
      aux_sym_text_repeat1,
    STATE(46), 1,
      sym_call_end_statement,
    STATE(184), 1,
      sym_raw_start_statement,
    ACTIONS(45), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(16), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_block,
      sym_if_block,
      sym_macro_block,
      sym_call_block,
      sym_filter_block,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_block,
      sym_include_statement,
      sym_import_statement,
      sym_with_block,
      sym_raw_block,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [784] = 18,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(47), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(2), 1,
      sym_if_start_statement,
    STATE(5), 1,
      sym_for_start_statement,
    STATE(6), 1,
      sym_macro_start_statement,
    STATE(7), 1,
      sym_filter_start_statement,
    STATE(8), 1,
      sym_block_start_statement,
    STATE(9), 1,
      sym_with_start_statement,
    STATE(11), 1,
      sym_call_start_statement,
    STATE(29), 1,
      sym__statement_start,
    STATE(37), 1,
      aux_sym_text_repeat1,
    STATE(55), 1,
      sym_for_end_statement,
    STATE(184), 1,
      sym_raw_start_statement,
    ACTIONS(49), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(19), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_block,
      sym_if_block,
      sym_macro_block,
      sym_call_block,
      sym_filter_block,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_block,
      sym_include_statement,
      sym_import_statement,
      sym_with_block,
      sym_raw_block,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [859] = 18,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(51), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(2), 1,
      sym_if_start_statement,
    STATE(5), 1,
      sym_for_start_statement,
    STATE(6), 1,
      sym_macro_start_statement,
    STATE(7), 1,
      sym_filter_start_statement,
    STATE(8), 1,
      sym_block_start_statement,
    STATE(9), 1,
      sym_with_start_statement,
    STATE(11), 1,
      sym_call_start_statement,
    STATE(32), 1,
      sym__statement_start,
    STATE(37), 1,
      aux_sym_text_repeat1,
    STATE(42), 1,
      sym_if_end_statement,
    STATE(184), 1,
      sym_raw_start_statement,
    ACTIONS(53), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(21), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_block,
      sym_if_block,
      sym_macro_block,
      sym_call_block,
      sym_filter_block,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_block,
      sym_include_statement,
      sym_import_statement,
      sym_with_block,
      sym_raw_block,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [934] = 18,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(2), 1,
      sym_if_start_statement,
    STATE(5), 1,
      sym_for_start_statement,
    STATE(6), 1,
      sym_macro_start_statement,
    STATE(7), 1,
      sym_filter_start_statement,
    STATE(8), 1,
      sym_block_start_statement,
    STATE(9), 1,
      sym_with_start_statement,
    STATE(11), 1,
      sym_call_start_statement,
    STATE(26), 1,
      sym__statement_start,
    STATE(37), 1,
      aux_sym_text_repeat1,
    STATE(61), 1,
      sym_macro_end_statement,
    STATE(184), 1,
      sym_raw_start_statement,
    ACTIONS(27), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(20), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_block,
      sym_if_block,
      sym_macro_block,
      sym_call_block,
      sym_filter_block,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_block,
      sym_include_statement,
      sym_import_statement,
      sym_with_block,
      sym_raw_block,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [1009] = 18,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(2), 1,
      sym_if_start_statement,
    STATE(5), 1,
      sym_for_start_statement,
    STATE(6), 1,
      sym_macro_start_statement,
    STATE(7), 1,
      sym_filter_start_statement,
    STATE(8), 1,
      sym_block_start_statement,
    STATE(9), 1,
      sym_with_start_statement,
    STATE(11), 1,
      sym_call_start_statement,
    STATE(31), 1,
      sym__statement_start,
    STATE(37), 1,
      aux_sym_text_repeat1,
    STATE(65), 1,
      sym_block_end_statement,
    STATE(184), 1,
      sym_raw_start_statement,
    ACTIONS(35), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(20), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_block,
      sym_if_block,
      sym_macro_block,
      sym_call_block,
      sym_filter_block,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_block,
      sym_include_statement,
      sym_import_statement,
      sym_with_block,
      sym_raw_block,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [1084] = 18,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(43), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(2), 1,
      sym_if_start_statement,
    STATE(5), 1,
      sym_for_start_statement,
    STATE(6), 1,
      sym_macro_start_statement,
    STATE(7), 1,
      sym_filter_start_statement,
    STATE(8), 1,
      sym_block_start_statement,
    STATE(9), 1,
      sym_with_start_statement,
    STATE(11), 1,
      sym_call_start_statement,
    STATE(30), 1,
      sym__statement_start,
    STATE(37), 1,
      aux_sym_text_repeat1,
    STATE(63), 1,
      sym_call_end_statement,
    STATE(184), 1,
      sym_raw_start_statement,
    ACTIONS(45), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(20), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_block,
      sym_if_block,
      sym_macro_block,
      sym_call_block,
      sym_filter_block,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_block,
      sym_include_statement,
      sym_import_statement,
      sym_with_block,
      sym_raw_block,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [1159] = 18,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(2), 1,
      sym_if_start_statement,
    STATE(5), 1,
      sym_for_start_statement,
    STATE(6), 1,
      sym_macro_start_statement,
    STATE(7), 1,
      sym_filter_start_statement,
    STATE(8), 1,
      sym_block_start_statement,
    STATE(9), 1,
      sym_with_start_statement,
    STATE(11), 1,
      sym_call_start_statement,
    STATE(28), 1,
      sym__statement_start,
    STATE(37), 1,
      aux_sym_text_repeat1,
    STATE(93), 1,
      sym_with_end_statement,
    STATE(184), 1,
      sym_raw_start_statement,
    ACTIONS(39), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(20), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_block,
      sym_if_block,
      sym_macro_block,
      sym_call_block,
      sym_filter_block,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_block,
      sym_include_statement,
      sym_import_statement,
      sym_with_block,
      sym_raw_block,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [1234] = 18,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(2), 1,
      sym_if_start_statement,
    STATE(5), 1,
      sym_for_start_statement,
    STATE(6), 1,
      sym_macro_start_statement,
    STATE(7), 1,
      sym_filter_start_statement,
    STATE(8), 1,
      sym_block_start_statement,
    STATE(9), 1,
      sym_with_start_statement,
    STATE(11), 1,
      sym_call_start_statement,
    STATE(27), 1,
      sym__statement_start,
    STATE(37), 1,
      aux_sym_text_repeat1,
    STATE(64), 1,
      sym_filter_end_statement,
    STATE(184), 1,
      sym_raw_start_statement,
    ACTIONS(31), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(20), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_block,
      sym_if_block,
      sym_macro_block,
      sym_call_block,
      sym_filter_block,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_block,
      sym_include_statement,
      sym_import_statement,
      sym_with_block,
      sym_raw_block,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [1309] = 18,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(47), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(2), 1,
      sym_if_start_statement,
    STATE(5), 1,
      sym_for_start_statement,
    STATE(6), 1,
      sym_macro_start_statement,
    STATE(7), 1,
      sym_filter_start_statement,
    STATE(8), 1,
      sym_block_start_statement,
    STATE(9), 1,
      sym_with_start_statement,
    STATE(11), 1,
      sym_call_start_statement,
    STATE(29), 1,
      sym__statement_start,
    STATE(37), 1,
      aux_sym_text_repeat1,
    STATE(72), 1,
      sym_for_end_statement,
    STATE(184), 1,
      sym_raw_start_statement,
    ACTIONS(49), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(20), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_block,
      sym_if_block,
      sym_macro_block,
      sym_call_block,
      sym_filter_block,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_block,
      sym_include_statement,
      sym_import_statement,
      sym_with_block,
      sym_raw_block,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [1384] = 18,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      aux_sym_text_token1,
    ACTIONS(60), 1,
      aux_sym_text_token2,
    ACTIONS(63), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(66), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(69), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(2), 1,
      sym_if_start_statement,
    STATE(5), 1,
      sym_for_start_statement,
    STATE(6), 1,
      sym_macro_start_statement,
    STATE(7), 1,
      sym_filter_start_statement,
    STATE(8), 1,
      sym_block_start_statement,
    STATE(9), 1,
      sym_with_start_statement,
    STATE(11), 1,
      sym_call_start_statement,
    STATE(33), 1,
      sym__statement_start,
    STATE(37), 1,
      aux_sym_text_repeat1,
    STATE(184), 1,
      sym_raw_start_statement,
    ACTIONS(72), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(20), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_block,
      sym_if_block,
      sym_macro_block,
      sym_call_block,
      sym_filter_block,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_block,
      sym_include_statement,
      sym_import_statement,
      sym_with_block,
      sym_raw_block,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [1459] = 18,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(51), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(2), 1,
      sym_if_start_statement,
    STATE(5), 1,
      sym_for_start_statement,
    STATE(6), 1,
      sym_macro_start_statement,
    STATE(7), 1,
      sym_filter_start_statement,
    STATE(8), 1,
      sym_block_start_statement,
    STATE(9), 1,
      sym_with_start_statement,
    STATE(11), 1,
      sym_call_start_statement,
    STATE(32), 1,
      sym__statement_start,
    STATE(37), 1,
      aux_sym_text_repeat1,
    STATE(74), 1,
      sym_if_end_statement,
    STATE(184), 1,
      sym_raw_start_statement,
    ACTIONS(53), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(20), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_block,
      sym_if_block,
      sym_macro_block,
      sym_call_block,
      sym_filter_block,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_block,
      sym_include_statement,
      sym_import_statement,
      sym_with_block,
      sym_raw_block,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [1534] = 17,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(75), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(2), 1,
      sym_if_start_statement,
    STATE(5), 1,
      sym_for_start_statement,
    STATE(6), 1,
      sym_macro_start_statement,
    STATE(7), 1,
      sym_filter_start_statement,
    STATE(8), 1,
      sym_block_start_statement,
    STATE(9), 1,
      sym_with_start_statement,
    STATE(11), 1,
      sym_call_start_statement,
    STATE(33), 1,
      sym__statement_start,
    STATE(37), 1,
      aux_sym_text_repeat1,
    STATE(184), 1,
      sym_raw_start_statement,
    ACTIONS(78), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(23), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_block,
      sym_if_block,
      sym_macro_block,
      sym_call_block,
      sym_filter_block,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_block,
      sym_include_statement,
      sym_import_statement,
      sym_with_block,
      sym_raw_block,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [1606] = 17,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(81), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(2), 1,
      sym_if_start_statement,
    STATE(5), 1,
      sym_for_start_statement,
    STATE(6), 1,
      sym_macro_start_statement,
    STATE(7), 1,
      sym_filter_start_statement,
    STATE(8), 1,
      sym_block_start_statement,
    STATE(9), 1,
      sym_with_start_statement,
    STATE(11), 1,
      sym_call_start_statement,
    STATE(33), 1,
      sym__statement_start,
    STATE(37), 1,
      aux_sym_text_repeat1,
    STATE(184), 1,
      sym_raw_start_statement,
    ACTIONS(84), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(20), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_block,
      sym_if_block,
      sym_macro_block,
      sym_call_block,
      sym_filter_block,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_block,
      sym_include_statement,
      sym_import_statement,
      sym_with_block,
      sym_raw_block,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [1678] = 19,
    ACTIONS(87), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(89), 1,
      anon_sym_for,
    ACTIONS(91), 1,
      anon_sym_else,
    ACTIONS(93), 1,
      anon_sym_if,
    ACTIONS(95), 1,
      anon_sym_endif,
    ACTIONS(97), 1,
      anon_sym_elif,
    ACTIONS(99), 1,
      anon_sym_macro,
    ACTIONS(101), 1,
      anon_sym_call,
    ACTIONS(103), 1,
      anon_sym_filter,
    ACTIONS(105), 1,
      anon_sym_set,
    ACTIONS(107), 1,
      anon_sym_endset,
    ACTIONS(109), 1,
      anon_sym_extends,
    ACTIONS(111), 1,
      anon_sym_block,
    ACTIONS(113), 1,
      anon_sym_include,
    ACTIONS(115), 1,
      anon_sym_import,
    ACTIONS(117), 1,
      anon_sym_from,
    ACTIONS(119), 1,
      anon_sym_with,
    ACTIONS(121), 1,
      anon_sym_raw,
    STATE(113), 1,
      aux_sym__expression_in_statement,
  [1736] = 18,
    ACTIONS(87), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(89), 1,
      anon_sym_for,
    ACTIONS(93), 1,
      anon_sym_if,
    ACTIONS(99), 1,
      anon_sym_macro,
    ACTIONS(101), 1,
      anon_sym_call,
    ACTIONS(103), 1,
      anon_sym_filter,
    ACTIONS(105), 1,
      anon_sym_set,
    ACTIONS(107), 1,
      anon_sym_endset,
    ACTIONS(109), 1,
      anon_sym_extends,
    ACTIONS(111), 1,
      anon_sym_block,
    ACTIONS(113), 1,
      anon_sym_include,
    ACTIONS(115), 1,
      anon_sym_import,
    ACTIONS(117), 1,
      anon_sym_from,
    ACTIONS(119), 1,
      anon_sym_with,
    ACTIONS(121), 1,
      anon_sym_raw,
    ACTIONS(123), 1,
      anon_sym_else,
    ACTIONS(125), 1,
      anon_sym_endfor,
    STATE(113), 1,
      aux_sym__expression_in_statement,
  [1791] = 17,
    ACTIONS(87), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(89), 1,
      anon_sym_for,
    ACTIONS(93), 1,
      anon_sym_if,
    ACTIONS(99), 1,
      anon_sym_macro,
    ACTIONS(101), 1,
      anon_sym_call,
    ACTIONS(103), 1,
      anon_sym_filter,
    ACTIONS(105), 1,
      anon_sym_set,
    ACTIONS(107), 1,
      anon_sym_endset,
    ACTIONS(109), 1,
      anon_sym_extends,
    ACTIONS(111), 1,
      anon_sym_block,
    ACTIONS(113), 1,
      anon_sym_include,
    ACTIONS(115), 1,
      anon_sym_import,
    ACTIONS(117), 1,
      anon_sym_from,
    ACTIONS(119), 1,
      anon_sym_with,
    ACTIONS(121), 1,
      anon_sym_raw,
    ACTIONS(127), 1,
      anon_sym_endmacro,
    STATE(113), 1,
      aux_sym__expression_in_statement,
  [1843] = 17,
    ACTIONS(87), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(89), 1,
      anon_sym_for,
    ACTIONS(93), 1,
      anon_sym_if,
    ACTIONS(99), 1,
      anon_sym_macro,
    ACTIONS(101), 1,
      anon_sym_call,
    ACTIONS(103), 1,
      anon_sym_filter,
    ACTIONS(105), 1,
      anon_sym_set,
    ACTIONS(107), 1,
      anon_sym_endset,
    ACTIONS(109), 1,
      anon_sym_extends,
    ACTIONS(111), 1,
      anon_sym_block,
    ACTIONS(113), 1,
      anon_sym_include,
    ACTIONS(115), 1,
      anon_sym_import,
    ACTIONS(117), 1,
      anon_sym_from,
    ACTIONS(119), 1,
      anon_sym_with,
    ACTIONS(121), 1,
      anon_sym_raw,
    ACTIONS(129), 1,
      anon_sym_endfilter,
    STATE(113), 1,
      aux_sym__expression_in_statement,
  [1895] = 17,
    ACTIONS(87), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(89), 1,
      anon_sym_for,
    ACTIONS(93), 1,
      anon_sym_if,
    ACTIONS(99), 1,
      anon_sym_macro,
    ACTIONS(101), 1,
      anon_sym_call,
    ACTIONS(103), 1,
      anon_sym_filter,
    ACTIONS(105), 1,
      anon_sym_set,
    ACTIONS(107), 1,
      anon_sym_endset,
    ACTIONS(109), 1,
      anon_sym_extends,
    ACTIONS(111), 1,
      anon_sym_block,
    ACTIONS(113), 1,
      anon_sym_include,
    ACTIONS(115), 1,
      anon_sym_import,
    ACTIONS(117), 1,
      anon_sym_from,
    ACTIONS(119), 1,
      anon_sym_with,
    ACTIONS(121), 1,
      anon_sym_raw,
    ACTIONS(131), 1,
      anon_sym_endwith,
    STATE(113), 1,
      aux_sym__expression_in_statement,
  [1947] = 17,
    ACTIONS(87), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(89), 1,
      anon_sym_for,
    ACTIONS(93), 1,
      anon_sym_if,
    ACTIONS(99), 1,
      anon_sym_macro,
    ACTIONS(101), 1,
      anon_sym_call,
    ACTIONS(103), 1,
      anon_sym_filter,
    ACTIONS(105), 1,
      anon_sym_set,
    ACTIONS(107), 1,
      anon_sym_endset,
    ACTIONS(109), 1,
      anon_sym_extends,
    ACTIONS(111), 1,
      anon_sym_block,
    ACTIONS(113), 1,
      anon_sym_include,
    ACTIONS(115), 1,
      anon_sym_import,
    ACTIONS(117), 1,
      anon_sym_from,
    ACTIONS(119), 1,
      anon_sym_with,
    ACTIONS(121), 1,
      anon_sym_raw,
    ACTIONS(125), 1,
      anon_sym_endfor,
    STATE(113), 1,
      aux_sym__expression_in_statement,
  [1999] = 17,
    ACTIONS(87), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(89), 1,
      anon_sym_for,
    ACTIONS(93), 1,
      anon_sym_if,
    ACTIONS(99), 1,
      anon_sym_macro,
    ACTIONS(101), 1,
      anon_sym_call,
    ACTIONS(103), 1,
      anon_sym_filter,
    ACTIONS(105), 1,
      anon_sym_set,
    ACTIONS(107), 1,
      anon_sym_endset,
    ACTIONS(109), 1,
      anon_sym_extends,
    ACTIONS(111), 1,
      anon_sym_block,
    ACTIONS(113), 1,
      anon_sym_include,
    ACTIONS(115), 1,
      anon_sym_import,
    ACTIONS(117), 1,
      anon_sym_from,
    ACTIONS(119), 1,
      anon_sym_with,
    ACTIONS(121), 1,
      anon_sym_raw,
    ACTIONS(133), 1,
      anon_sym_endcall,
    STATE(113), 1,
      aux_sym__expression_in_statement,
  [2051] = 17,
    ACTIONS(87), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(89), 1,
      anon_sym_for,
    ACTIONS(93), 1,
      anon_sym_if,
    ACTIONS(99), 1,
      anon_sym_macro,
    ACTIONS(101), 1,
      anon_sym_call,
    ACTIONS(103), 1,
      anon_sym_filter,
    ACTIONS(105), 1,
      anon_sym_set,
    ACTIONS(107), 1,
      anon_sym_endset,
    ACTIONS(109), 1,
      anon_sym_extends,
    ACTIONS(111), 1,
      anon_sym_block,
    ACTIONS(113), 1,
      anon_sym_include,
    ACTIONS(115), 1,
      anon_sym_import,
    ACTIONS(117), 1,
      anon_sym_from,
    ACTIONS(119), 1,
      anon_sym_with,
    ACTIONS(121), 1,
      anon_sym_raw,
    ACTIONS(135), 1,
      anon_sym_endblock,
    STATE(113), 1,
      aux_sym__expression_in_statement,
  [2103] = 17,
    ACTIONS(87), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(89), 1,
      anon_sym_for,
    ACTIONS(93), 1,
      anon_sym_if,
    ACTIONS(95), 1,
      anon_sym_endif,
    ACTIONS(99), 1,
      anon_sym_macro,
    ACTIONS(101), 1,
      anon_sym_call,
    ACTIONS(103), 1,
      anon_sym_filter,
    ACTIONS(105), 1,
      anon_sym_set,
    ACTIONS(107), 1,
      anon_sym_endset,
    ACTIONS(109), 1,
      anon_sym_extends,
    ACTIONS(111), 1,
      anon_sym_block,
    ACTIONS(113), 1,
      anon_sym_include,
    ACTIONS(115), 1,
      anon_sym_import,
    ACTIONS(117), 1,
      anon_sym_from,
    ACTIONS(119), 1,
      anon_sym_with,
    ACTIONS(121), 1,
      anon_sym_raw,
    STATE(113), 1,
      aux_sym__expression_in_statement,
  [2155] = 16,
    ACTIONS(87), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(89), 1,
      anon_sym_for,
    ACTIONS(93), 1,
      anon_sym_if,
    ACTIONS(99), 1,
      anon_sym_macro,
    ACTIONS(101), 1,
      anon_sym_call,
    ACTIONS(103), 1,
      anon_sym_filter,
    ACTIONS(105), 1,
      anon_sym_set,
    ACTIONS(107), 1,
      anon_sym_endset,
    ACTIONS(109), 1,
      anon_sym_extends,
    ACTIONS(111), 1,
      anon_sym_block,
    ACTIONS(113), 1,
      anon_sym_include,
    ACTIONS(115), 1,
      anon_sym_import,
    ACTIONS(117), 1,
      anon_sym_from,
    ACTIONS(119), 1,
      anon_sym_with,
    ACTIONS(121), 1,
      anon_sym_raw,
    STATE(113), 1,
      aux_sym__expression_in_statement,
  [2204] = 8,
    ACTIONS(137), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(13), 1,
      sym_else_statement,
    STATE(22), 1,
      sym_elif_statement,
    STATE(59), 1,
      sym_if_end_statement,
    STATE(60), 1,
      sym_else_block,
    STATE(154), 1,
      sym__statement_start,
    ACTIONS(139), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(98), 2,
      sym_elif_block,
      aux_sym_if_block_repeat1,
  [2231] = 8,
    ACTIONS(137), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(13), 1,
      sym_else_statement,
    STATE(22), 1,
      sym_elif_statement,
    STATE(75), 1,
      sym_if_end_statement,
    STATE(76), 1,
      sym_else_block,
    STATE(154), 1,
      sym__statement_start,
    ACTIONS(139), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(98), 2,
      sym_elif_block,
      aux_sym_if_block_repeat1,
  [2258] = 7,
    ACTIONS(143), 1,
      anon_sym_as,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_import_statement_repeat1,
    STATE(88), 1,
      sym__statement_end,
    STATE(144), 1,
      sym__context_specifier,
    ACTIONS(147), 2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
    ACTIONS(141), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [2283] = 5,
    ACTIONS(151), 1,
      aux_sym_text_token1,
    ACTIONS(153), 1,
      aux_sym_text_token2,
    ACTIONS(155), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(38), 1,
      aux_sym_text_repeat1,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2303] = 5,
    ACTIONS(159), 1,
      aux_sym_text_token1,
    ACTIONS(162), 1,
      aux_sym_text_token2,
    ACTIONS(165), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(38), 1,
      aux_sym_text_repeat1,
    ACTIONS(157), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2323] = 6,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      sym__statement_end,
    STATE(111), 1,
      aux_sym_import_statement_repeat1,
    STATE(146), 1,
      sym__context_specifier,
    ACTIONS(169), 2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
    ACTIONS(167), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [2345] = 6,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_import_statement_repeat1,
    STATE(90), 1,
      sym__statement_end,
    STATE(148), 1,
      sym__context_specifier,
    ACTIONS(173), 2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
    ACTIONS(171), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [2367] = 6,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      sym__statement_end,
    STATE(111), 1,
      aux_sym_import_statement_repeat1,
    STATE(149), 1,
      sym__context_specifier,
    ACTIONS(177), 2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
    ACTIONS(175), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [2389] = 2,
    ACTIONS(181), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(179), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2402] = 2,
    ACTIONS(185), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(183), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2415] = 2,
    ACTIONS(189), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(187), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2428] = 2,
    ACTIONS(193), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(191), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2441] = 2,
    ACTIONS(197), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(195), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2454] = 2,
    ACTIONS(201), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(199), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2467] = 2,
    ACTIONS(205), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(203), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2480] = 2,
    ACTIONS(209), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(207), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2493] = 2,
    ACTIONS(213), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(211), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2506] = 2,
    ACTIONS(217), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(215), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2519] = 2,
    ACTIONS(221), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(219), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2532] = 5,
    ACTIONS(225), 1,
      anon_sym_ignoremissing,
    STATE(70), 1,
      sym__statement_end,
    STATE(132), 1,
      sym__context_specifier,
    ACTIONS(227), 2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
    ACTIONS(223), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [2551] = 2,
    ACTIONS(231), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(229), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2564] = 2,
    ACTIONS(235), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(233), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2577] = 2,
    ACTIONS(239), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(237), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2590] = 2,
    ACTIONS(243), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(241), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2603] = 2,
    ACTIONS(247), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(245), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2616] = 2,
    ACTIONS(251), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(249), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2629] = 2,
    ACTIONS(255), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(253), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2642] = 2,
    ACTIONS(259), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(257), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2655] = 2,
    ACTIONS(263), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(261), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2668] = 2,
    ACTIONS(267), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(265), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2681] = 2,
    ACTIONS(271), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(269), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2694] = 2,
    ACTIONS(275), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(273), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2707] = 2,
    ACTIONS(279), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(277), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2720] = 2,
    ACTIONS(283), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(281), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2733] = 2,
    ACTIONS(287), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(285), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2746] = 2,
    ACTIONS(291), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(289), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2759] = 2,
    ACTIONS(295), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(293), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2772] = 2,
    ACTIONS(299), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(297), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2785] = 2,
    ACTIONS(303), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(301), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2798] = 2,
    ACTIONS(307), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(305), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2811] = 2,
    ACTIONS(311), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(309), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2824] = 2,
    ACTIONS(315), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(313), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2837] = 2,
    ACTIONS(319), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(317), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2850] = 2,
    ACTIONS(323), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(321), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2863] = 2,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(325), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2876] = 2,
    ACTIONS(331), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(329), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2889] = 2,
    ACTIONS(335), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(333), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2902] = 2,
    ACTIONS(339), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(337), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2915] = 2,
    ACTIONS(343), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(341), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2928] = 1,
    ACTIONS(345), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_ignoremissing,
      anon_sym_import,
      anon_sym_as,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
  [2939] = 2,
    ACTIONS(349), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(347), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2952] = 2,
    ACTIONS(353), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(351), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2965] = 2,
    ACTIONS(357), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(355), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2978] = 2,
    ACTIONS(361), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(359), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [2991] = 2,
    ACTIONS(365), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(363), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [3004] = 2,
    ACTIONS(369), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(367), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [3017] = 2,
    ACTIONS(373), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(371), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [3030] = 2,
    ACTIONS(377), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(375), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [3043] = 2,
    ACTIONS(381), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(379), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [3056] = 2,
    ACTIONS(385), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(383), 6,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [3069] = 2,
    ACTIONS(387), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(389), 5,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [3081] = 2,
    ACTIONS(391), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(393), 5,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [3093] = 2,
    ACTIONS(395), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(397), 5,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [3105] = 2,
    ACTIONS(399), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(401), 5,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [3117] = 5,
    ACTIONS(403), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(22), 1,
      sym_elif_statement,
    STATE(177), 1,
      sym__statement_start,
    ACTIONS(406), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(98), 2,
      sym_elif_block,
      aux_sym_if_block_repeat1,
  [3135] = 2,
    ACTIONS(409), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(411), 5,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [3147] = 2,
    ACTIONS(413), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(415), 5,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [3159] = 4,
    STATE(88), 1,
      sym__statement_end,
    STATE(144), 1,
      sym__context_specifier,
    ACTIONS(147), 2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
    ACTIONS(141), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3175] = 2,
    ACTIONS(417), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(419), 5,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [3187] = 2,
    ACTIONS(421), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(423), 5,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [3199] = 2,
    ACTIONS(425), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(427), 5,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [3211] = 2,
    ACTIONS(429), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(431), 5,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [3223] = 2,
    ACTIONS(433), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(435), 5,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [3235] = 2,
    ACTIONS(437), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(439), 5,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [3247] = 2,
    ACTIONS(441), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(443), 5,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [3259] = 4,
    STATE(82), 1,
      sym__statement_end,
    STATE(141), 1,
      sym__context_specifier,
    ACTIONS(447), 2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
    ACTIONS(445), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3275] = 2,
    ACTIONS(451), 1,
      anon_sym_as,
    ACTIONS(449), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_COMMA,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
  [3287] = 3,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(449), 5,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
  [3301] = 4,
    ACTIONS(87), 1,
      aux_sym__expression_in_statement_token1,
    STATE(107), 1,
      sym__statement_end,
    STATE(125), 1,
      aux_sym__expression_in_statement,
    ACTIONS(456), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3316] = 4,
    ACTIONS(87), 1,
      aux_sym__expression_in_statement_token1,
    STATE(54), 1,
      sym__statement_end,
    STATE(125), 1,
      aux_sym__expression_in_statement,
    ACTIONS(458), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3331] = 4,
    ACTIONS(87), 1,
      aux_sym__expression_in_statement_token1,
    STATE(103), 1,
      sym__statement_end,
    STATE(125), 1,
      aux_sym__expression_in_statement,
    ACTIONS(460), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3346] = 4,
    ACTIONS(87), 1,
      aux_sym__expression_in_statement_token1,
    STATE(69), 1,
      sym__statement_end,
    STATE(125), 1,
      aux_sym__expression_in_statement,
    ACTIONS(462), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3361] = 4,
    ACTIONS(87), 1,
      aux_sym__expression_in_statement_token1,
    STATE(68), 1,
      sym__statement_end,
    STATE(125), 1,
      aux_sym__expression_in_statement,
    ACTIONS(464), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3376] = 4,
    ACTIONS(468), 1,
      anon_sym_scoped,
    ACTIONS(470), 1,
      anon_sym_required,
    STATE(94), 1,
      sym__statement_end,
    ACTIONS(466), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3391] = 4,
    ACTIONS(87), 1,
      aux_sym__expression_in_statement_token1,
    STATE(102), 1,
      sym__statement_end,
    STATE(125), 1,
      aux_sym__expression_in_statement,
    ACTIONS(472), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3406] = 4,
    ACTIONS(87), 1,
      aux_sym__expression_in_statement_token1,
    STATE(95), 1,
      sym__statement_end,
    STATE(125), 1,
      aux_sym__expression_in_statement,
    ACTIONS(474), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3421] = 4,
    ACTIONS(87), 1,
      aux_sym__expression_in_statement_token1,
    STATE(108), 1,
      sym__statement_end,
    STATE(125), 1,
      aux_sym__expression_in_statement,
    ACTIONS(476), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3436] = 4,
    ACTIONS(87), 1,
      aux_sym__expression_in_statement_token1,
    STATE(104), 1,
      sym__statement_end,
    STATE(125), 1,
      aux_sym__expression_in_statement,
    ACTIONS(478), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3451] = 4,
    ACTIONS(87), 1,
      aux_sym__expression_in_statement_token1,
    STATE(99), 1,
      sym__statement_end,
    STATE(119), 1,
      aux_sym__expression_in_statement,
    ACTIONS(480), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3466] = 4,
    ACTIONS(87), 1,
      aux_sym__expression_in_statement_token1,
    STATE(105), 1,
      sym__statement_end,
    STATE(125), 1,
      aux_sym__expression_in_statement,
    ACTIONS(482), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3481] = 1,
    ACTIONS(484), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_COMMA,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
  [3490] = 3,
    ACTIONS(486), 1,
      aux_sym__expression_in_statement_token1,
    STATE(125), 1,
      aux_sym__expression_in_statement,
    ACTIONS(489), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3502] = 3,
    ACTIONS(491), 1,
      sym_identifier,
    STATE(80), 1,
      sym__statement_end,
    ACTIONS(493), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3514] = 4,
    ACTIONS(495), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(67), 1,
      sym_raw_end_statement,
    STATE(180), 1,
      sym__statement_start,
    ACTIONS(497), 2,
      anon_sym_LBRACE_PERCENT_PLUS,
      anon_sym_LBRACE_PERCENT_DASH,
  [3528] = 3,
    ACTIONS(501), 1,
      anon_sym_required,
    STATE(100), 1,
      sym__statement_end,
    ACTIONS(499), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3540] = 2,
    STATE(78), 1,
      sym__statement_end,
    ACTIONS(503), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3549] = 2,
    STATE(97), 1,
      sym__statement_end,
    ACTIONS(505), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3558] = 2,
    STATE(73), 1,
      sym__statement_end,
    ACTIONS(507), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3567] = 2,
    STATE(82), 1,
      sym__statement_end,
    ACTIONS(445), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3576] = 2,
    STATE(182), 1,
      sym__statement_end,
    ACTIONS(509), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3585] = 4,
    ACTIONS(511), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(513), 1,
      aux_sym__output_code_token1,
    STATE(153), 1,
      aux_sym__output_code_repeat1,
    STATE(185), 1,
      sym__output_code,
  [3598] = 2,
    ACTIONS(515), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(517), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3607] = 2,
    STATE(52), 1,
      sym__statement_end,
    ACTIONS(519), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3616] = 2,
    STATE(77), 1,
      sym__statement_end,
    ACTIONS(521), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3625] = 2,
    STATE(85), 1,
      sym__statement_end,
    ACTIONS(523), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3634] = 2,
    STATE(86), 1,
      sym__statement_end,
    ACTIONS(525), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3643] = 2,
    STATE(106), 1,
      sym__statement_end,
    ACTIONS(527), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3652] = 2,
    STATE(87), 1,
      sym__statement_end,
    ACTIONS(529), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3661] = 2,
    STATE(81), 1,
      sym__statement_end,
    ACTIONS(531), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3670] = 4,
    ACTIONS(533), 1,
      sym_identifier,
    ACTIONS(535), 1,
      anon_sym_DQUOTE,
    ACTIONS(537), 1,
      anon_sym_SQUOTE,
    STATE(53), 1,
      sym_string,
  [3683] = 2,
    STATE(89), 1,
      sym__statement_end,
    ACTIONS(167), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3692] = 2,
    STATE(96), 1,
      sym__statement_end,
    ACTIONS(539), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3701] = 2,
    STATE(90), 1,
      sym__statement_end,
    ACTIONS(171), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3710] = 2,
    STATE(71), 1,
      sym__statement_end,
    ACTIONS(541), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3719] = 2,
    STATE(92), 1,
      sym__statement_end,
    ACTIONS(175), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3728] = 2,
    STATE(66), 1,
      sym__statement_end,
    ACTIONS(543), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3737] = 2,
    STATE(100), 1,
      sym__statement_end,
    ACTIONS(499), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3746] = 2,
    STATE(79), 1,
      sym__statement_end,
    ACTIONS(545), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3755] = 3,
    ACTIONS(547), 1,
      aux_sym_comment_token1,
    ACTIONS(550), 1,
      anon_sym_POUND_RBRACE,
    STATE(152), 1,
      aux_sym_comment_repeat1,
  [3765] = 3,
    ACTIONS(552), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(554), 1,
      aux_sym__output_code_token1,
    STATE(158), 1,
      aux_sym__output_code_repeat1,
  [3775] = 3,
    ACTIONS(556), 1,
      anon_sym_else,
    ACTIONS(558), 1,
      anon_sym_endif,
    ACTIONS(560), 1,
      anon_sym_elif,
  [3785] = 3,
    ACTIONS(562), 1,
      aux_sym_comment_token1,
    ACTIONS(564), 1,
      anon_sym_POUND_RBRACE,
    STATE(152), 1,
      aux_sym_comment_repeat1,
  [3795] = 3,
    ACTIONS(566), 1,
      aux_sym_comment_token1,
    ACTIONS(568), 1,
      anon_sym_POUND_RBRACE,
    STATE(155), 1,
      aux_sym_comment_repeat1,
  [3805] = 3,
    ACTIONS(535), 1,
      anon_sym_DQUOTE,
    ACTIONS(537), 1,
      anon_sym_SQUOTE,
    STATE(174), 1,
      sym_string,
  [3815] = 3,
    ACTIONS(570), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(572), 1,
      aux_sym__output_code_token1,
    STATE(158), 1,
      aux_sym__output_code_repeat1,
  [3825] = 3,
    ACTIONS(535), 1,
      anon_sym_DQUOTE,
    ACTIONS(537), 1,
      anon_sym_SQUOTE,
    STATE(175), 1,
      sym_string,
  [3835] = 2,
    ACTIONS(575), 1,
      aux_sym__expression_in_statement_token1,
    STATE(120), 1,
      aux_sym__expression_in_statement,
  [3842] = 2,
    ACTIONS(575), 1,
      aux_sym__expression_in_statement_token1,
    STATE(121), 1,
      aux_sym__expression_in_statement,
  [3849] = 2,
    ACTIONS(575), 1,
      aux_sym__expression_in_statement_token1,
    STATE(123), 1,
      aux_sym__expression_in_statement,
  [3856] = 2,
    ACTIONS(575), 1,
      aux_sym__expression_in_statement_token1,
    STATE(116), 1,
      aux_sym__expression_in_statement,
  [3863] = 2,
    ACTIONS(575), 1,
      aux_sym__expression_in_statement_token1,
    STATE(118), 1,
      aux_sym__expression_in_statement,
  [3870] = 2,
    ACTIONS(575), 1,
      aux_sym__expression_in_statement_token1,
    STATE(112), 1,
      aux_sym__expression_in_statement,
  [3877] = 2,
    ACTIONS(575), 1,
      aux_sym__expression_in_statement_token1,
    STATE(114), 1,
      aux_sym__expression_in_statement,
  [3884] = 2,
    ACTIONS(575), 1,
      aux_sym__expression_in_statement_token1,
    STATE(115), 1,
      aux_sym__expression_in_statement,
  [3891] = 1,
    ACTIONS(577), 1,
      sym_identifier,
  [3895] = 1,
    ACTIONS(579), 1,
      sym_identifier,
  [3899] = 1,
    ACTIONS(581), 1,
      sym_identifier,
  [3903] = 1,
    ACTIONS(583), 1,
      sym_identifier,
  [3907] = 1,
    ACTIONS(585), 1,
      ts_builtin_sym_end,
  [3911] = 1,
    ACTIONS(587), 1,
      aux_sym_string_token2,
  [3915] = 1,
    ACTIONS(589), 1,
      anon_sym_as,
  [3919] = 1,
    ACTIONS(591), 1,
      anon_sym_import,
  [3923] = 1,
    ACTIONS(593), 1,
      sym_identifier,
  [3927] = 1,
    ACTIONS(560), 1,
      anon_sym_elif,
  [3931] = 1,
    ACTIONS(595), 1,
      sym_identifier,
  [3935] = 1,
    ACTIONS(597), 1,
      aux_sym_string_token1,
  [3939] = 1,
    ACTIONS(599), 1,
      anon_sym_endraw,
  [3943] = 1,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
  [3947] = 1,
    ACTIONS(603), 1,
      sym_raw_text,
  [3951] = 1,
    ACTIONS(601), 1,
      anon_sym_SQUOTE,
  [3955] = 1,
    ACTIONS(605), 1,
      sym_raw_text,
  [3959] = 1,
    ACTIONS(607), 1,
      anon_sym_RBRACE_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 88,
  [SMALL_STATE(4)] = 176,
  [SMALL_STATE(5)] = 255,
  [SMALL_STATE(6)] = 334,
  [SMALL_STATE(7)] = 409,
  [SMALL_STATE(8)] = 484,
  [SMALL_STATE(9)] = 559,
  [SMALL_STATE(10)] = 634,
  [SMALL_STATE(11)] = 709,
  [SMALL_STATE(12)] = 784,
  [SMALL_STATE(13)] = 859,
  [SMALL_STATE(14)] = 934,
  [SMALL_STATE(15)] = 1009,
  [SMALL_STATE(16)] = 1084,
  [SMALL_STATE(17)] = 1159,
  [SMALL_STATE(18)] = 1234,
  [SMALL_STATE(19)] = 1309,
  [SMALL_STATE(20)] = 1384,
  [SMALL_STATE(21)] = 1459,
  [SMALL_STATE(22)] = 1534,
  [SMALL_STATE(23)] = 1606,
  [SMALL_STATE(24)] = 1678,
  [SMALL_STATE(25)] = 1736,
  [SMALL_STATE(26)] = 1791,
  [SMALL_STATE(27)] = 1843,
  [SMALL_STATE(28)] = 1895,
  [SMALL_STATE(29)] = 1947,
  [SMALL_STATE(30)] = 1999,
  [SMALL_STATE(31)] = 2051,
  [SMALL_STATE(32)] = 2103,
  [SMALL_STATE(33)] = 2155,
  [SMALL_STATE(34)] = 2204,
  [SMALL_STATE(35)] = 2231,
  [SMALL_STATE(36)] = 2258,
  [SMALL_STATE(37)] = 2283,
  [SMALL_STATE(38)] = 2303,
  [SMALL_STATE(39)] = 2323,
  [SMALL_STATE(40)] = 2345,
  [SMALL_STATE(41)] = 2367,
  [SMALL_STATE(42)] = 2389,
  [SMALL_STATE(43)] = 2402,
  [SMALL_STATE(44)] = 2415,
  [SMALL_STATE(45)] = 2428,
  [SMALL_STATE(46)] = 2441,
  [SMALL_STATE(47)] = 2454,
  [SMALL_STATE(48)] = 2467,
  [SMALL_STATE(49)] = 2480,
  [SMALL_STATE(50)] = 2493,
  [SMALL_STATE(51)] = 2506,
  [SMALL_STATE(52)] = 2519,
  [SMALL_STATE(53)] = 2532,
  [SMALL_STATE(54)] = 2551,
  [SMALL_STATE(55)] = 2564,
  [SMALL_STATE(56)] = 2577,
  [SMALL_STATE(57)] = 2590,
  [SMALL_STATE(58)] = 2603,
  [SMALL_STATE(59)] = 2616,
  [SMALL_STATE(60)] = 2629,
  [SMALL_STATE(61)] = 2642,
  [SMALL_STATE(62)] = 2655,
  [SMALL_STATE(63)] = 2668,
  [SMALL_STATE(64)] = 2681,
  [SMALL_STATE(65)] = 2694,
  [SMALL_STATE(66)] = 2707,
  [SMALL_STATE(67)] = 2720,
  [SMALL_STATE(68)] = 2733,
  [SMALL_STATE(69)] = 2746,
  [SMALL_STATE(70)] = 2759,
  [SMALL_STATE(71)] = 2772,
  [SMALL_STATE(72)] = 2785,
  [SMALL_STATE(73)] = 2798,
  [SMALL_STATE(74)] = 2811,
  [SMALL_STATE(75)] = 2824,
  [SMALL_STATE(76)] = 2837,
  [SMALL_STATE(77)] = 2850,
  [SMALL_STATE(78)] = 2863,
  [SMALL_STATE(79)] = 2876,
  [SMALL_STATE(80)] = 2889,
  [SMALL_STATE(81)] = 2902,
  [SMALL_STATE(82)] = 2915,
  [SMALL_STATE(83)] = 2928,
  [SMALL_STATE(84)] = 2939,
  [SMALL_STATE(85)] = 2952,
  [SMALL_STATE(86)] = 2965,
  [SMALL_STATE(87)] = 2978,
  [SMALL_STATE(88)] = 2991,
  [SMALL_STATE(89)] = 3004,
  [SMALL_STATE(90)] = 3017,
  [SMALL_STATE(91)] = 3030,
  [SMALL_STATE(92)] = 3043,
  [SMALL_STATE(93)] = 3056,
  [SMALL_STATE(94)] = 3069,
  [SMALL_STATE(95)] = 3081,
  [SMALL_STATE(96)] = 3093,
  [SMALL_STATE(97)] = 3105,
  [SMALL_STATE(98)] = 3117,
  [SMALL_STATE(99)] = 3135,
  [SMALL_STATE(100)] = 3147,
  [SMALL_STATE(101)] = 3159,
  [SMALL_STATE(102)] = 3175,
  [SMALL_STATE(103)] = 3187,
  [SMALL_STATE(104)] = 3199,
  [SMALL_STATE(105)] = 3211,
  [SMALL_STATE(106)] = 3223,
  [SMALL_STATE(107)] = 3235,
  [SMALL_STATE(108)] = 3247,
  [SMALL_STATE(109)] = 3259,
  [SMALL_STATE(110)] = 3275,
  [SMALL_STATE(111)] = 3287,
  [SMALL_STATE(112)] = 3301,
  [SMALL_STATE(113)] = 3316,
  [SMALL_STATE(114)] = 3331,
  [SMALL_STATE(115)] = 3346,
  [SMALL_STATE(116)] = 3361,
  [SMALL_STATE(117)] = 3376,
  [SMALL_STATE(118)] = 3391,
  [SMALL_STATE(119)] = 3406,
  [SMALL_STATE(120)] = 3421,
  [SMALL_STATE(121)] = 3436,
  [SMALL_STATE(122)] = 3451,
  [SMALL_STATE(123)] = 3466,
  [SMALL_STATE(124)] = 3481,
  [SMALL_STATE(125)] = 3490,
  [SMALL_STATE(126)] = 3502,
  [SMALL_STATE(127)] = 3514,
  [SMALL_STATE(128)] = 3528,
  [SMALL_STATE(129)] = 3540,
  [SMALL_STATE(130)] = 3549,
  [SMALL_STATE(131)] = 3558,
  [SMALL_STATE(132)] = 3567,
  [SMALL_STATE(133)] = 3576,
  [SMALL_STATE(134)] = 3585,
  [SMALL_STATE(135)] = 3598,
  [SMALL_STATE(136)] = 3607,
  [SMALL_STATE(137)] = 3616,
  [SMALL_STATE(138)] = 3625,
  [SMALL_STATE(139)] = 3634,
  [SMALL_STATE(140)] = 3643,
  [SMALL_STATE(141)] = 3652,
  [SMALL_STATE(142)] = 3661,
  [SMALL_STATE(143)] = 3670,
  [SMALL_STATE(144)] = 3683,
  [SMALL_STATE(145)] = 3692,
  [SMALL_STATE(146)] = 3701,
  [SMALL_STATE(147)] = 3710,
  [SMALL_STATE(148)] = 3719,
  [SMALL_STATE(149)] = 3728,
  [SMALL_STATE(150)] = 3737,
  [SMALL_STATE(151)] = 3746,
  [SMALL_STATE(152)] = 3755,
  [SMALL_STATE(153)] = 3765,
  [SMALL_STATE(154)] = 3775,
  [SMALL_STATE(155)] = 3785,
  [SMALL_STATE(156)] = 3795,
  [SMALL_STATE(157)] = 3805,
  [SMALL_STATE(158)] = 3815,
  [SMALL_STATE(159)] = 3825,
  [SMALL_STATE(160)] = 3835,
  [SMALL_STATE(161)] = 3842,
  [SMALL_STATE(162)] = 3849,
  [SMALL_STATE(163)] = 3856,
  [SMALL_STATE(164)] = 3863,
  [SMALL_STATE(165)] = 3870,
  [SMALL_STATE(166)] = 3877,
  [SMALL_STATE(167)] = 3884,
  [SMALL_STATE(168)] = 3891,
  [SMALL_STATE(169)] = 3895,
  [SMALL_STATE(170)] = 3899,
  [SMALL_STATE(171)] = 3903,
  [SMALL_STATE(172)] = 3907,
  [SMALL_STATE(173)] = 3911,
  [SMALL_STATE(174)] = 3915,
  [SMALL_STATE(175)] = 3919,
  [SMALL_STATE(176)] = 3923,
  [SMALL_STATE(177)] = 3927,
  [SMALL_STATE(178)] = 3931,
  [SMALL_STATE(179)] = 3935,
  [SMALL_STATE(180)] = 3939,
  [SMALL_STATE(181)] = 3943,
  [SMALL_STATE(182)] = 3947,
  [SMALL_STATE(183)] = 3951,
  [SMALL_STATE(184)] = 3955,
  [SMALL_STATE(185)] = 3959,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_elif_block, 1, 0, 0), SHIFT(33),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_elif_block, 1, 0, 0), SHIFT(33),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_elif_block, 2, 0, 0), SHIFT(33),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_elif_block, 2, 0, 0), SHIFT(33),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_block, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 2, 0, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 2, 0, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_block, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_block, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_block, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_block, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_block, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_block, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_block, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_block, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_block, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_block, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output, 3, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_assignment_statement, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_assignment_statement, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_statement, 3, -1, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_statement, 3, -1, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_else_block, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_else_block, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_block, 3, 0, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_block, 3, 0, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 3, 0, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 3, 0, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 3, 0, 4),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 3, 0, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 3, 0, 5),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 3, 0, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 3, 0, 6),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 3, 0, 6),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_block, 3, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_block, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_block, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_block, 3, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_block, 3, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_block, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_block, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_block, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 10, 0, 13),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 10, 0, 13),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_block, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_block, 3, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4, 0, 11),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 4, 0, 11),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extends_statement, 4, 0, 12),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extends_statement, 4, 0, 12),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 4, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_end_statement, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_end_statement, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_else_block, 3, 0, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_else_block, 3, 0, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_end_statement, 3, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_end_statement, 3, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 3, 0, 3),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_block, 3, 0, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 4, 0, 15),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 4, 0, 15),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 4, 0, 16),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 4, 0, 16),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_end_statement, 3, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_end_statement, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_end_statement, 3, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_end_statement, 3, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_end_statement, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_end_statement, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_end_statement, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_end_statement, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_end_statement, 3, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_end_statement, 3, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 5, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 5, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_block, 2, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_block, 2, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_end_statement, 4, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_end_statement, 4, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_end_statement, 3, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_end_statement, 3, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 6, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 6, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6, 0, 13),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 6, 0, 13),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 7, 0, 13),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 7, 0, 13),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 8, 0, 13),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 8, 0, 13),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 2, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 2, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 9, 0, 13),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 9, 0, 13),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_block, 3, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_block, 3, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_start_statement, 4, 0, 13),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_start_statement, 4, 0, 13),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_start_statement, 4, 0, 14),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_start_statement, 4, 0, 14),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_else_statement, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_else_statement, 3, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 3, 0, 0),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_block_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_start_statement, 3, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_start_statement, 3, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_start_statement, 5, 0, 13),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_start_statement, 5, 0, 13),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_start_statement, 4, 0, 7),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_start_statement, 4, 0, 7),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_statement, 4, 0, 8),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_statement, 4, 0, 8),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_start_statement, 4, 0, 8),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_start_statement, 4, 0, 8),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_start_statement, 4, 0, 9),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_start_statement, 4, 0, 9),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_start_statement, 6, 0, 13),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_start_statement, 6, 0, 13),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_start_statement, 4, 0, 10),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_start_statement, 4, 0, 10),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_start_statement, 4, 0, 11),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_start_statement, 4, 0, 11),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 4, 0, 0),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_in_statement, 2, 0, 0), SHIFT_REPEAT(135),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_in_statement, 2, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_in_statement, 1, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_in_statement, 1, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_code, 1, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__output_code_repeat1, 2, 0, 0),
  [572] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__output_code_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [585] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_start_statement, 3, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_raw_text = 0,
  ts_external_token_error_sentinel = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_error_sentinel] = sym_error_sentinel,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_error_sentinel] = true,
  },
  [2] = {
    [ts_external_token_raw_text] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_jinja2_external_scanner_create(void);
void tree_sitter_jinja2_external_scanner_destroy(void *);
bool tree_sitter_jinja2_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_jinja2_external_scanner_serialize(void *, char *);
void tree_sitter_jinja2_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_jinja2(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_jinja2_external_scanner_create,
      tree_sitter_jinja2_external_scanner_destroy,
      tree_sitter_jinja2_external_scanner_scan,
      tree_sitter_jinja2_external_scanner_serialize,
      tree_sitter_jinja2_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
