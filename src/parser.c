#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 231
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 1
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 19

enum ts_symbol_identifiers {
  sym_identifier = 1,
  aux_sym_text_token1 = 2,
  aux_sym_text_token2 = 3,
  anon_sym_LBRACE_POUND = 4,
  aux_sym_comment_token1 = 5,
  anon_sym_POUND_RBRACE = 6,
  anon_sym_LBRACE_LBRACE = 7,
  aux_sym_output_token1 = 8,
  anon_sym_RBRACE_RBRACE = 9,
  aux_sym__output_code_token1 = 10,
  aux_sym__expression_in_statement_token1 = 11,
  anon_sym_LBRACE_PERCENT = 12,
  anon_sym_LBRACE_PERCENT_DASH = 13,
  anon_sym_for = 14,
  anon_sym_PERCENT_RBRACE = 15,
  anon_sym_DASH_PERCENT_RBRACE = 16,
  anon_sym_PLUS_PERCENT_RBRACE = 17,
  anon_sym_endfor = 18,
  anon_sym_else = 19,
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
  anon_sym_withcontext = 38,
  anon_sym_withoutcontext = 39,
  anon_sym_import = 40,
  anon_sym_as = 41,
  anon_sym_from = 42,
  anon_sym_as2 = 43,
  anon_sym_COMMA = 44,
  anon_sym_with = 45,
  anon_sym_endwith = 46,
  anon_sym_DQUOTE = 47,
  aux_sym_string_token1 = 48,
  anon_sym_SQUOTE = 49,
  aux_sym_string_token2 = 50,
  sym_template = 51,
  sym__item = 52,
  sym_text = 53,
  sym_comment = 54,
  sym_output = 55,
  sym__output_code = 56,
  aux_sym__expression_in_statement = 57,
  sym__statement = 58,
  sym_for_statement = 59,
  sym_for_else_statement = 60,
  sym_if_statement = 61,
  sym_elif_statement = 62,
  sym_else_statement = 63,
  sym_macro_statement = 64,
  sym_call_statement = 65,
  sym_filter_statement = 66,
  sym_assignment_statement = 67,
  sym_end_assignment_statement = 68,
  sym_extends_statement = 69,
  sym_block_statement = 70,
  sym_include_statement = 71,
  sym_import_statement = 72,
  sym_with_statement = 73,
  sym_custom_statement = 74,
  sym_string = 75,
  aux_sym_template_repeat1 = 76,
  aux_sym_text_repeat1 = 77,
  aux_sym_comment_repeat1 = 78,
  aux_sym__output_code_repeat1 = 79,
  aux_sym_if_statement_repeat1 = 80,
  aux_sym_import_statement_repeat1 = 81,
  alias_sym_custom_tag = 82,
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
  [aux_sym_output_token1] = "output_token1",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [aux_sym__output_code_token1] = "_output_code_token1",
  [aux_sym__expression_in_statement_token1] = "_expression_in_statement_token1",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_LBRACE_PERCENT_DASH] = "{%-",
  [anon_sym_for] = "_keyword",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_DASH_PERCENT_RBRACE] = "-%}",
  [anon_sym_PLUS_PERCENT_RBRACE] = "+%}",
  [anon_sym_endfor] = "_keyword",
  [anon_sym_else] = "_keyword",
  [anon_sym_if] = "_keyword",
  [anon_sym_endif] = "_keyword",
  [anon_sym_elif] = "_keyword",
  [anon_sym_macro] = "_keyword",
  [anon_sym_endmacro] = "_keyword",
  [anon_sym_call] = "_keyword",
  [anon_sym_endcall] = "_keyword",
  [anon_sym_filter] = "_keyword",
  [anon_sym_endfilter] = "_keyword",
  [anon_sym_set] = "_keyword",
  [anon_sym_endset] = "_keyword",
  [anon_sym_extends] = "_keyword",
  [anon_sym_block] = "_keyword",
  [anon_sym_scoped] = "_keyword",
  [anon_sym_required] = "_keyword",
  [anon_sym_endblock] = "_keyword",
  [anon_sym_include] = "_keyword",
  [anon_sym_ignoremissing] = "_keyword",
  [anon_sym_withcontext] = "_keyword",
  [anon_sym_withoutcontext] = "_keyword",
  [anon_sym_import] = "_keyword",
  [anon_sym_as] = "_keyword",
  [anon_sym_from] = "_keyword",
  [anon_sym_as2] = "_keyword",
  [anon_sym_COMMA] = ",",
  [anon_sym_with] = "_keyword",
  [anon_sym_endwith] = "_keyword",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [sym_template] = "template",
  [sym__item] = "_item",
  [sym_text] = "text",
  [sym_comment] = "comment",
  [sym_output] = "output",
  [sym__output_code] = "expression",
  [aux_sym__expression_in_statement] = "_expression_in_statement",
  [sym__statement] = "_statement",
  [sym_for_statement] = "for_statement",
  [sym_for_else_statement] = "for_else_statement",
  [sym_if_statement] = "if_statement",
  [sym_elif_statement] = "elif_statement",
  [sym_else_statement] = "else_statement",
  [sym_macro_statement] = "macro_statement",
  [sym_call_statement] = "call_statement",
  [sym_filter_statement] = "filter_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_end_assignment_statement] = "end_assignment_statement",
  [sym_extends_statement] = "extends_statement",
  [sym_block_statement] = "block_statement",
  [sym_include_statement] = "include_statement",
  [sym_import_statement] = "import_statement",
  [sym_with_statement] = "with_statement",
  [sym_custom_statement] = "custom_statement",
  [sym_string] = "string",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym__output_code_repeat1] = "_output_code_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
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
  [aux_sym_output_token1] = aux_sym_output_token1,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [aux_sym__output_code_token1] = aux_sym__output_code_token1,
  [aux_sym__expression_in_statement_token1] = aux_sym__expression_in_statement_token1,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_LBRACE_PERCENT_DASH] = anon_sym_LBRACE_PERCENT_DASH,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_DASH_PERCENT_RBRACE] = anon_sym_DASH_PERCENT_RBRACE,
  [anon_sym_PLUS_PERCENT_RBRACE] = anon_sym_PLUS_PERCENT_RBRACE,
  [anon_sym_endfor] = anon_sym_for,
  [anon_sym_else] = anon_sym_for,
  [anon_sym_if] = anon_sym_for,
  [anon_sym_endif] = anon_sym_for,
  [anon_sym_elif] = anon_sym_for,
  [anon_sym_macro] = anon_sym_for,
  [anon_sym_endmacro] = anon_sym_for,
  [anon_sym_call] = anon_sym_for,
  [anon_sym_endcall] = anon_sym_for,
  [anon_sym_filter] = anon_sym_for,
  [anon_sym_endfilter] = anon_sym_for,
  [anon_sym_set] = anon_sym_for,
  [anon_sym_endset] = anon_sym_for,
  [anon_sym_extends] = anon_sym_for,
  [anon_sym_block] = anon_sym_for,
  [anon_sym_scoped] = anon_sym_for,
  [anon_sym_required] = anon_sym_for,
  [anon_sym_endblock] = anon_sym_for,
  [anon_sym_include] = anon_sym_for,
  [anon_sym_ignoremissing] = anon_sym_for,
  [anon_sym_withcontext] = anon_sym_for,
  [anon_sym_withoutcontext] = anon_sym_for,
  [anon_sym_import] = anon_sym_for,
  [anon_sym_as] = anon_sym_for,
  [anon_sym_from] = anon_sym_for,
  [anon_sym_as2] = anon_sym_for,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_with] = anon_sym_for,
  [anon_sym_endwith] = anon_sym_for,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_template] = sym_template,
  [sym__item] = sym__item,
  [sym_text] = sym_text,
  [sym_comment] = sym_comment,
  [sym_output] = sym_output,
  [sym__output_code] = sym__output_code,
  [aux_sym__expression_in_statement] = aux_sym__expression_in_statement,
  [sym__statement] = sym__statement,
  [sym_for_statement] = sym_for_statement,
  [sym_for_else_statement] = sym_for_else_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_elif_statement] = sym_elif_statement,
  [sym_else_statement] = sym_else_statement,
  [sym_macro_statement] = sym_macro_statement,
  [sym_call_statement] = sym_call_statement,
  [sym_filter_statement] = sym_filter_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_end_assignment_statement] = sym_end_assignment_statement,
  [sym_extends_statement] = sym_extends_statement,
  [sym_block_statement] = sym_block_statement,
  [sym_include_statement] = sym_include_statement,
  [sym_import_statement] = sym_import_statement,
  [sym_with_statement] = sym_with_statement,
  [sym_custom_statement] = sym_custom_statement,
  [sym_string] = sym_string,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym__output_code_repeat1] = aux_sym__output_code_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
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
  [aux_sym_output_token1] = {
    .visible = false,
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
  [anon_sym_LBRACE_PERCENT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
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
  [anon_sym_withcontext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_withoutcontext] = {
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
  [anon_sym_as2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_elif_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_call_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_statement] = {
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
  [sym_block_statement] = {
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
  [sym_with_statement] = {
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
  [aux_sym_if_statement_repeat1] = {
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
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 2},
  [6] = {.index = 4, .length = 2},
  [7] = {.index = 6, .length = 3},
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 4},
  [11] = {.index = 17, .length = 1},
  [12] = {.index = 18, .length = 1},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 1},
  [15] = {.index = 21, .length = 2},
  [16] = {.index = 23, .length = 2},
  [17] = {.index = 25, .length = 3},
  [18] = {.index = 28, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_code, 3},
  [1] =
    {field_iteration, 3},
  [2] =
    {field_condition, 3},
    {field_else, 5},
  [4] =
    {field_body, 5},
    {field_iteration, 3},
  [6] =
    {field_body, 5},
    {field_condition, 3},
    {field_else, 6},
  [9] =
    {field_condition, 3},
    {field_elif, 5},
    {field_else, 6},
  [12] =
    {field_id, 3},
  [13] =
    {field_body, 5},
    {field_condition, 3},
    {field_elif, 6},
    {field_else, 7},
  [17] =
    {field_condition, 3},
  [18] =
    {field_signature, 3},
  [19] =
    {field_call, 3},
  [20] =
    {field_assignment, 3},
  [21] =
    {field_body, 5},
    {field_condition, 3},
  [23] =
    {field_condition, 3},
    {field_elif, 5},
  [25] =
    {field_body, 5},
    {field_condition, 3},
    {field_elif, 6},
  [28] =
    {field_body, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_custom_tag,
  },
  [2] = {
    [3] = sym__output_code,
  },
  [3] = {
    [3] = sym__output_code,
  },
  [4] = {
    [3] = sym__output_code,
  },
  [5] = {
    [3] = sym__output_code,
  },
  [6] = {
    [3] = sym__output_code,
  },
  [7] = {
    [3] = sym__output_code,
  },
  [8] = {
    [3] = sym__output_code,
  },
  [10] = {
    [3] = sym__output_code,
  },
  [11] = {
    [3] = sym__output_code,
  },
  [12] = {
    [3] = sym__output_code,
  },
  [13] = {
    [3] = sym__output_code,
  },
  [14] = {
    [3] = sym__output_code,
  },
  [15] = {
    [3] = sym__output_code,
  },
  [16] = {
    [3] = sym__output_code,
  },
  [17] = {
    [3] = sym__output_code,
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
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(66);
      if (lookahead == '"') ADVANCE(152);
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '%') ADVANCE(150);
      if (lookahead == '\'') ADVANCE(152);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 'w') ADVANCE(101);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '}') ADVANCE(150);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(302);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == 'w') ADVANCE(297);
      if (lookahead == '}') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(302);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(155);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'w') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(260);
      if (lookahead == '+') ADVANCE(165);
      if (lookahead == '-') ADVANCE(166);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(59);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(212);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 'w') ADVANCE(205);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(164);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(212);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 'w') ADVANCE(205);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(164);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(212);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 'w') ADVANCE(205);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(164);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(212);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 'w') ADVANCE(205);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(164);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(212);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 'w') ADVANCE(205);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(164);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(212);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 'w') ADVANCE(205);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(164);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(212);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 'w') ADVANCE(205);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(164);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(212);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 'w') ADVANCE(205);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(164);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(212);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 'w') ADVANCE(205);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(164);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(212);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 'w') ADVANCE(205);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(164);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(285);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(35);
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(1);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(289);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == 'x') ADVANCE(49);
      END_STATE();
    case 56:
      if (lookahead == 'x') ADVANCE(50);
      END_STATE();
    case 57:
      if (lookahead == '}') ADVANCE(265);
      END_STATE();
    case 58:
      if (lookahead == '}') ADVANCE(160);
      END_STATE();
    case 59:
      if (lookahead == '}') ADVANCE(267);
      END_STATE();
    case 60:
      if (lookahead == '}') ADVANCE(266);
      END_STATE();
    case 61:
      if (lookahead == '}') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(161);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61)
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 62:
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(164);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62)
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 63:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(304);
      END_STATE();
    case 64:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(307);
      END_STATE();
    case 65:
      if (eof) ADVANCE(66);
      if (lookahead == '{') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65)
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead == '{') ADVANCE(158);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == ' ') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == '%') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'a') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'a') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'a') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'a') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'b') ADVANCE(113);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 'w') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'c') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'c') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'c') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'c') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'c') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'd') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'd') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'd') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'e') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'e') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'e') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'e') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'f') ADVANCE(270);
      if (lookahead == 'g') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'f') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'f') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'g') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'h') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'h') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 's') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'i') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'i') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'k') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'k') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'l') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 'x') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'l') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'l') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'l') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'l') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'l') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'l') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'l') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'l') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'm') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'm') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'n') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'n') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'o') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'o') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'o') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'o') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'o') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'o') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'o') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'p') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'r') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'r') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'r') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'r') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'r') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'r') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'r') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'r') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 's') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 's') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 's') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 't') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 't') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 't') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 't') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 't') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 't') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 't') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 't') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == 'u') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == '}') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(155);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '}') ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_output_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__output_code_token1);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__output_code_token1);
      if (lookahead == '}') ADVANCE(160);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__output_code_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != '}') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == '%') ADVANCE(59);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == '%') ADVANCE(60);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'b') ADVANCE(218);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'c') ADVANCE(244);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'c') ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'c') ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'c') ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'c') ADVANCE(169);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(249);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(177);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'f') ADVANCE(270);
      if (lookahead == 'm') ADVANCE(239);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'f') ADVANCE(272);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'f') ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'f') ADVANCE(207);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'f') ADVANCE(238);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'h') ADVANCE(292);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'h') ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == 'r') ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'i') ADVANCE(254);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'k') ADVANCE(282);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'k') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(275);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(276);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead == 'x') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(259);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(248);
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 'x') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(258);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'm') ADVANCE(290);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead == 'x') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 'x') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == 'x') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == 'x') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 'x') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == 'x') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == 'x') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == 'x') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'o') ADVANCE(274);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'o') ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'r') ADVANCE(268);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'r') ADVANCE(277);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'r') ADVANCE(253);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead == 'w') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == '}') ADVANCE(265);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      if (lookahead == '-') ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_DASH);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_RBRACE);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_PLUS_PERCENT_RBRACE);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_endfor);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_endmacro);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_endcall);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_endfilter);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_endset);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_endblock);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_ignoremissing);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_withcontext);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_withoutcontext);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_endwith);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(307);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(307);
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
      if (lookahead == 'r') ADVANCE(2);
      if (lookahead == 's') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'c') ADVANCE(6);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_as2);
      END_STATE();
    case 5:
      if (lookahead == 'q') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_scoped);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 65},
  [2] = {.lex_state = 65},
  [3] = {.lex_state = 65},
  [4] = {.lex_state = 65},
  [5] = {.lex_state = 65},
  [6] = {.lex_state = 65},
  [7] = {.lex_state = 65},
  [8] = {.lex_state = 65},
  [9] = {.lex_state = 65},
  [10] = {.lex_state = 65},
  [11] = {.lex_state = 65},
  [12] = {.lex_state = 65},
  [13] = {.lex_state = 65},
  [14] = {.lex_state = 65},
  [15] = {.lex_state = 65},
  [16] = {.lex_state = 65},
  [17] = {.lex_state = 65},
  [18] = {.lex_state = 65},
  [19] = {.lex_state = 65},
  [20] = {.lex_state = 65},
  [21] = {.lex_state = 65},
  [22] = {.lex_state = 65},
  [23] = {.lex_state = 65},
  [24] = {.lex_state = 65},
  [25] = {.lex_state = 65},
  [26] = {.lex_state = 65},
  [27] = {.lex_state = 65},
  [28] = {.lex_state = 65},
  [29] = {.lex_state = 65},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 18},
  [45] = {.lex_state = 17},
  [46] = {.lex_state = 18},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 18},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 65},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 65},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 65},
  [58] = {.lex_state = 65},
  [59] = {.lex_state = 65},
  [60] = {.lex_state = 65},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 65},
  [65] = {.lex_state = 65},
  [66] = {.lex_state = 65},
  [67] = {.lex_state = 65},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 65},
  [70] = {.lex_state = 65},
  [71] = {.lex_state = 65},
  [72] = {.lex_state = 65},
  [73] = {.lex_state = 65},
  [74] = {.lex_state = 65},
  [75] = {.lex_state = 65},
  [76] = {.lex_state = 65},
  [77] = {.lex_state = 65},
  [78] = {.lex_state = 65},
  [79] = {.lex_state = 65},
  [80] = {.lex_state = 65},
  [81] = {.lex_state = 65},
  [82] = {.lex_state = 65},
  [83] = {.lex_state = 65},
  [84] = {.lex_state = 65},
  [85] = {.lex_state = 65},
  [86] = {.lex_state = 65},
  [87] = {.lex_state = 65},
  [88] = {.lex_state = 65},
  [89] = {.lex_state = 65},
  [90] = {.lex_state = 65},
  [91] = {.lex_state = 65},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 65},
  [94] = {.lex_state = 65},
  [95] = {.lex_state = 65},
  [96] = {.lex_state = 65},
  [97] = {.lex_state = 65},
  [98] = {.lex_state = 65},
  [99] = {.lex_state = 65},
  [100] = {.lex_state = 65},
  [101] = {.lex_state = 65},
  [102] = {.lex_state = 65},
  [103] = {.lex_state = 65},
  [104] = {.lex_state = 65},
  [105] = {.lex_state = 65},
  [106] = {.lex_state = 65},
  [107] = {.lex_state = 65},
  [108] = {.lex_state = 65},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 61},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 11},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 61},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 11},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 61},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 62},
  [182] = {.lex_state = 62},
  [183] = {.lex_state = 62},
  [184] = {.lex_state = 62},
  [185] = {.lex_state = 62},
  [186] = {.lex_state = 62},
  [187] = {.lex_state = 62},
  [188] = {.lex_state = 62},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 159},
  [191] = {.lex_state = 159},
  [192] = {.lex_state = 159},
  [193] = {.lex_state = 159},
  [194] = {.lex_state = 159},
  [195] = {.lex_state = 159},
  [196] = {.lex_state = 159},
  [197] = {.lex_state = 159},
  [198] = {.lex_state = 159},
  [199] = {.lex_state = 159},
  [200] = {.lex_state = 159},
  [201] = {.lex_state = 159},
  [202] = {.lex_state = 159},
  [203] = {.lex_state = 159},
  [204] = {.lex_state = 159},
  [205] = {.lex_state = 159},
  [206] = {.lex_state = 159},
  [207] = {.lex_state = 159},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 159},
  [210] = {.lex_state = 159},
  [211] = {.lex_state = 159},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 159},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 159},
  [220] = {.lex_state = 11},
  [221] = {.lex_state = 159},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 159},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 63},
  [226] = {.lex_state = 159},
  [227] = {.lex_state = 159},
  [228] = {.lex_state = 11},
  [229] = {.lex_state = 7},
  [230] = {.lex_state = 64},
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
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_PLUS_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_endfor] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
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
    [anon_sym_ignoremissing] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_as2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_endwith] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(212),
    [sym__item] = STATE(7),
    [sym_text] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_output] = STATE(7),
    [sym__statement] = STATE(7),
    [sym_for_statement] = STATE(7),
    [sym_if_statement] = STATE(7),
    [sym_macro_statement] = STATE(7),
    [sym_call_statement] = STATE(7),
    [sym_filter_statement] = STATE(7),
    [sym_assignment_statement] = STATE(7),
    [sym_end_assignment_statement] = STATE(7),
    [sym_extends_statement] = STATE(7),
    [sym_block_statement] = STATE(7),
    [sym_include_statement] = STATE(7),
    [sym_import_statement] = STATE(7),
    [sym_with_statement] = STATE(7),
    [sym_custom_statement] = STATE(7),
    [aux_sym_template_repeat1] = STATE(7),
    [aux_sym_text_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_text_token1] = ACTIONS(5),
    [aux_sym_text_token2] = ACTIONS(7),
    [anon_sym_LBRACE_POUND] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(13),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
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
    ACTIONS(19), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(91), 1,
      sym_else_statement,
    STATE(116), 2,
      sym_elif_statement,
      aux_sym_if_statement_repeat1,
    STATE(3), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [50] = 10,
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
    ACTIONS(23), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(106), 1,
      sym_else_statement,
    STATE(124), 2,
      sym_elif_statement,
      aux_sym_if_statement_repeat1,
    STATE(4), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [100] = 9,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      aux_sym_text_token1,
    ACTIONS(30), 1,
      aux_sym_text_token2,
    ACTIONS(33), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(36), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(42), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(4), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [146] = 9,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(47), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(89), 1,
      sym_for_else_statement,
    STATE(6), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [192] = 9,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(49), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(51), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(104), 1,
      sym_for_else_statement,
    STATE(4), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [238] = 9,
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
    ACTIONS(15), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(4), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [284] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(57), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(4), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [327] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(61), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(4), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [370] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(63), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(65), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(8), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [413] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(70), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(4), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [456] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(73), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(76), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(11), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [499] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(81), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(28), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [542] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(81), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(4), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [585] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(4), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [628] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(87), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(4), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [671] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(91), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(93), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(25), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [714] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(95), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(97), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(15), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [757] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(99), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(101), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(16), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [800] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(103), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(105), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(22), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [843] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(107), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(109), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(4), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [886] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(111), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(113), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(4), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [929] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(115), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(117), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(4), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [972] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(119), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(121), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(9), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [1015] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(123), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(125), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(4), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [1058] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(127), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(129), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(14), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [1101] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(131), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(133), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(23), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [1144] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(135), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(137), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(4), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [1187] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(135), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(137), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(21), 19,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [1230] = 18,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(143), 1,
      anon_sym_else,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(147), 1,
      anon_sym_endif,
    ACTIONS(149), 1,
      anon_sym_elif,
    ACTIONS(151), 1,
      anon_sym_macro,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_filter,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_endset,
    ACTIONS(161), 1,
      anon_sym_extends,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_include,
    ACTIONS(167), 1,
      anon_sym_import,
    ACTIONS(169), 1,
      anon_sym_from,
    ACTIONS(171), 1,
      anon_sym_with,
    STATE(117), 1,
      aux_sym__expression_in_statement,
  [1285] = 18,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(143), 1,
      anon_sym_else,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(149), 1,
      anon_sym_elif,
    ACTIONS(151), 1,
      anon_sym_macro,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_filter,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_endset,
    ACTIONS(161), 1,
      anon_sym_extends,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_include,
    ACTIONS(167), 1,
      anon_sym_import,
    ACTIONS(169), 1,
      anon_sym_from,
    ACTIONS(171), 1,
      anon_sym_with,
    ACTIONS(173), 1,
      anon_sym_endif,
    STATE(117), 1,
      aux_sym__expression_in_statement,
  [1340] = 17,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_macro,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_filter,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_endset,
    ACTIONS(161), 1,
      anon_sym_extends,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_include,
    ACTIONS(167), 1,
      anon_sym_import,
    ACTIONS(169), 1,
      anon_sym_from,
    ACTIONS(171), 1,
      anon_sym_with,
    ACTIONS(175), 1,
      anon_sym_endfor,
    ACTIONS(177), 1,
      anon_sym_else,
    STATE(117), 1,
      aux_sym__expression_in_statement,
  [1392] = 17,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_macro,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_filter,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_endset,
    ACTIONS(161), 1,
      anon_sym_extends,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_include,
    ACTIONS(167), 1,
      anon_sym_import,
    ACTIONS(169), 1,
      anon_sym_from,
    ACTIONS(171), 1,
      anon_sym_with,
    ACTIONS(177), 1,
      anon_sym_else,
    ACTIONS(179), 1,
      anon_sym_endfor,
    STATE(117), 1,
      aux_sym__expression_in_statement,
  [1444] = 16,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_macro,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_filter,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_endset,
    ACTIONS(161), 1,
      anon_sym_extends,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_include,
    ACTIONS(167), 1,
      anon_sym_import,
    ACTIONS(169), 1,
      anon_sym_from,
    ACTIONS(171), 1,
      anon_sym_with,
    ACTIONS(181), 1,
      anon_sym_endwith,
    STATE(117), 1,
      aux_sym__expression_in_statement,
  [1493] = 16,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_macro,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_filter,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_endset,
    ACTIONS(161), 1,
      anon_sym_extends,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_include,
    ACTIONS(167), 1,
      anon_sym_import,
    ACTIONS(169), 1,
      anon_sym_from,
    ACTIONS(171), 1,
      anon_sym_with,
    ACTIONS(183), 1,
      anon_sym_endwith,
    STATE(117), 1,
      aux_sym__expression_in_statement,
  [1542] = 16,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_macro,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_filter,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_endset,
    ACTIONS(161), 1,
      anon_sym_extends,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_include,
    ACTIONS(167), 1,
      anon_sym_import,
    ACTIONS(169), 1,
      anon_sym_from,
    ACTIONS(171), 1,
      anon_sym_with,
    ACTIONS(185), 1,
      anon_sym_endcall,
    STATE(117), 1,
      aux_sym__expression_in_statement,
  [1591] = 16,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_macro,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_filter,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_endset,
    ACTIONS(161), 1,
      anon_sym_extends,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_include,
    ACTIONS(167), 1,
      anon_sym_import,
    ACTIONS(169), 1,
      anon_sym_from,
    ACTIONS(171), 1,
      anon_sym_with,
    ACTIONS(187), 1,
      anon_sym_endif,
    STATE(117), 1,
      aux_sym__expression_in_statement,
  [1640] = 16,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_macro,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_filter,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_endset,
    ACTIONS(161), 1,
      anon_sym_extends,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_include,
    ACTIONS(167), 1,
      anon_sym_import,
    ACTIONS(169), 1,
      anon_sym_from,
    ACTIONS(171), 1,
      anon_sym_with,
    ACTIONS(189), 1,
      anon_sym_endwith,
    STATE(117), 1,
      aux_sym__expression_in_statement,
  [1689] = 16,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_macro,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_filter,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_endset,
    ACTIONS(161), 1,
      anon_sym_extends,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_include,
    ACTIONS(167), 1,
      anon_sym_import,
    ACTIONS(169), 1,
      anon_sym_from,
    ACTIONS(171), 1,
      anon_sym_with,
    ACTIONS(191), 1,
      anon_sym_endmacro,
    STATE(117), 1,
      aux_sym__expression_in_statement,
  [1738] = 16,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_macro,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_filter,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_endset,
    ACTIONS(161), 1,
      anon_sym_extends,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_include,
    ACTIONS(167), 1,
      anon_sym_import,
    ACTIONS(169), 1,
      anon_sym_from,
    ACTIONS(171), 1,
      anon_sym_with,
    ACTIONS(193), 1,
      anon_sym_endif,
    STATE(117), 1,
      aux_sym__expression_in_statement,
  [1787] = 16,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_macro,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_filter,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_endset,
    ACTIONS(161), 1,
      anon_sym_extends,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_include,
    ACTIONS(167), 1,
      anon_sym_import,
    ACTIONS(169), 1,
      anon_sym_from,
    ACTIONS(171), 1,
      anon_sym_with,
    ACTIONS(195), 1,
      anon_sym_endmacro,
    STATE(117), 1,
      aux_sym__expression_in_statement,
  [1836] = 16,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_macro,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_filter,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_endset,
    ACTIONS(161), 1,
      anon_sym_extends,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_include,
    ACTIONS(167), 1,
      anon_sym_import,
    ACTIONS(169), 1,
      anon_sym_from,
    ACTIONS(171), 1,
      anon_sym_with,
    ACTIONS(197), 1,
      anon_sym_endfor,
    STATE(117), 1,
      aux_sym__expression_in_statement,
  [1885] = 16,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_macro,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_filter,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_endset,
    ACTIONS(161), 1,
      anon_sym_extends,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_include,
    ACTIONS(167), 1,
      anon_sym_import,
    ACTIONS(169), 1,
      anon_sym_from,
    ACTIONS(171), 1,
      anon_sym_with,
    ACTIONS(199), 1,
      anon_sym_endcall,
    STATE(117), 1,
      aux_sym__expression_in_statement,
  [1934] = 16,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_macro,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_filter,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_endset,
    ACTIONS(161), 1,
      anon_sym_extends,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_include,
    ACTIONS(167), 1,
      anon_sym_import,
    ACTIONS(169), 1,
      anon_sym_from,
    ACTIONS(171), 1,
      anon_sym_with,
    ACTIONS(201), 1,
      anon_sym_endblock,
    STATE(117), 1,
      aux_sym__expression_in_statement,
  [1983] = 16,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_macro,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_filter,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_endset,
    ACTIONS(161), 1,
      anon_sym_extends,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_include,
    ACTIONS(167), 1,
      anon_sym_import,
    ACTIONS(169), 1,
      anon_sym_from,
    ACTIONS(171), 1,
      anon_sym_with,
    ACTIONS(203), 1,
      anon_sym_endfor,
    STATE(117), 1,
      aux_sym__expression_in_statement,
  [2032] = 16,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_macro,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_filter,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_endset,
    ACTIONS(161), 1,
      anon_sym_extends,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_include,
    ACTIONS(167), 1,
      anon_sym_import,
    ACTIONS(169), 1,
      anon_sym_from,
    ACTIONS(171), 1,
      anon_sym_with,
    ACTIONS(205), 1,
      anon_sym_endblock,
    STATE(117), 1,
      aux_sym__expression_in_statement,
  [2081] = 16,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_macro,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_filter,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_endset,
    ACTIONS(161), 1,
      anon_sym_extends,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_include,
    ACTIONS(167), 1,
      anon_sym_import,
    ACTIONS(169), 1,
      anon_sym_from,
    ACTIONS(171), 1,
      anon_sym_with,
    ACTIONS(207), 1,
      anon_sym_endfilter,
    STATE(117), 1,
      aux_sym__expression_in_statement,
  [2130] = 16,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_macro,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_filter,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_endset,
    ACTIONS(161), 1,
      anon_sym_extends,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_include,
    ACTIONS(167), 1,
      anon_sym_import,
    ACTIONS(169), 1,
      anon_sym_from,
    ACTIONS(171), 1,
      anon_sym_with,
    ACTIONS(209), 1,
      anon_sym_endwith,
    STATE(117), 1,
      aux_sym__expression_in_statement,
  [2179] = 16,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_macro,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_filter,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_endset,
    ACTIONS(161), 1,
      anon_sym_extends,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_include,
    ACTIONS(167), 1,
      anon_sym_import,
    ACTIONS(169), 1,
      anon_sym_from,
    ACTIONS(171), 1,
      anon_sym_with,
    ACTIONS(211), 1,
      anon_sym_endblock,
    STATE(117), 1,
      aux_sym__expression_in_statement,
  [2228] = 16,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_macro,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_filter,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_endset,
    ACTIONS(161), 1,
      anon_sym_extends,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_include,
    ACTIONS(167), 1,
      anon_sym_import,
    ACTIONS(169), 1,
      anon_sym_from,
    ACTIONS(171), 1,
      anon_sym_with,
    ACTIONS(213), 1,
      anon_sym_endfilter,
    STATE(117), 1,
      aux_sym__expression_in_statement,
  [2277] = 16,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_macro,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_filter,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_endset,
    ACTIONS(161), 1,
      anon_sym_extends,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_include,
    ACTIONS(167), 1,
      anon_sym_import,
    ACTIONS(169), 1,
      anon_sym_from,
    ACTIONS(171), 1,
      anon_sym_with,
    ACTIONS(215), 1,
      anon_sym_endblock,
    STATE(117), 1,
      aux_sym__expression_in_statement,
  [2326] = 15,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_macro,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_filter,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_endset,
    ACTIONS(161), 1,
      anon_sym_extends,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_include,
    ACTIONS(167), 1,
      anon_sym_import,
    ACTIONS(169), 1,
      anon_sym_from,
    ACTIONS(171), 1,
      anon_sym_with,
    STATE(117), 1,
      aux_sym__expression_in_statement,
  [2372] = 5,
    ACTIONS(219), 1,
      aux_sym_text_token1,
    ACTIONS(222), 1,
      aux_sym_text_token2,
    ACTIONS(225), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(53), 1,
      aux_sym_text_repeat1,
    ACTIONS(217), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2391] = 5,
    ACTIONS(231), 1,
      anon_sym_as2,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(229), 2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
    ACTIONS(227), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [2410] = 5,
    ACTIONS(237), 1,
      aux_sym_text_token1,
    ACTIONS(239), 1,
      aux_sym_text_token2,
    ACTIONS(241), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(53), 1,
      aux_sym_text_repeat1,
    ACTIONS(235), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2429] = 1,
    ACTIONS(243), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_ignoremissing,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
      anon_sym_import,
      anon_sym_as,
  [2440] = 2,
    ACTIONS(247), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(245), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2452] = 2,
    ACTIONS(251), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(249), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2464] = 2,
    ACTIONS(255), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(253), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2476] = 2,
    ACTIONS(259), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(257), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2488] = 4,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(263), 2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
    ACTIONS(261), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [2504] = 2,
    ACTIONS(267), 1,
      anon_sym_as2,
    ACTIONS(265), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
      anon_sym_COMMA,
  [2516] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(265), 5,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
  [2530] = 2,
    ACTIONS(274), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(272), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2542] = 2,
    ACTIONS(278), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(276), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2554] = 2,
    ACTIONS(282), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(280), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2566] = 2,
    ACTIONS(286), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(284), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2578] = 4,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(290), 2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
    ACTIONS(288), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [2594] = 2,
    ACTIONS(294), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(292), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2606] = 2,
    ACTIONS(298), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(296), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2618] = 2,
    ACTIONS(302), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(300), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2630] = 2,
    ACTIONS(306), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(304), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2642] = 2,
    ACTIONS(310), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(308), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2654] = 2,
    ACTIONS(314), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(312), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2666] = 2,
    ACTIONS(318), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(316), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2678] = 2,
    ACTIONS(322), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(320), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2690] = 2,
    ACTIONS(326), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(324), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2702] = 2,
    ACTIONS(330), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(328), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2714] = 2,
    ACTIONS(334), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(332), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2726] = 2,
    ACTIONS(338), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(336), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2738] = 2,
    ACTIONS(342), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(340), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2750] = 2,
    ACTIONS(346), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(344), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2762] = 2,
    ACTIONS(350), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(348), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2774] = 2,
    ACTIONS(354), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(352), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2786] = 2,
    ACTIONS(358), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(356), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2798] = 2,
    ACTIONS(362), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(360), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2810] = 2,
    ACTIONS(366), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(364), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2822] = 2,
    ACTIONS(370), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(368), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2834] = 2,
    ACTIONS(374), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(372), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2846] = 2,
    ACTIONS(378), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(376), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2858] = 2,
    ACTIONS(382), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(380), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2870] = 4,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(386), 2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
    ACTIONS(384), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [2886] = 2,
    ACTIONS(390), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(388), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2898] = 2,
    ACTIONS(394), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(392), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2910] = 2,
    ACTIONS(398), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(396), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2922] = 2,
    ACTIONS(402), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(400), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2934] = 2,
    ACTIONS(406), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(404), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2946] = 2,
    ACTIONS(410), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(408), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2958] = 2,
    ACTIONS(414), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(412), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2970] = 2,
    ACTIONS(418), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(416), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2982] = 2,
    ACTIONS(422), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(420), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [2994] = 2,
    ACTIONS(426), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(424), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [3006] = 2,
    ACTIONS(430), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(428), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [3018] = 2,
    ACTIONS(434), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(432), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [3030] = 2,
    ACTIONS(438), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(436), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [3042] = 2,
    ACTIONS(442), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(440), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [3054] = 2,
    ACTIONS(446), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(444), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [3066] = 2,
    ACTIONS(450), 2,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(448), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT_DASH,
  [3078] = 1,
    ACTIONS(452), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
      anon_sym_COMMA,
  [3087] = 3,
    ACTIONS(456), 1,
      anon_sym_ignoremissing,
    ACTIONS(458), 2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
    ACTIONS(454), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3100] = 3,
    ACTIONS(460), 1,
      aux_sym__expression_in_statement_token1,
    STATE(111), 1,
      aux_sym__expression_in_statement,
    ACTIONS(463), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3112] = 3,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    STATE(111), 1,
      aux_sym__expression_in_statement,
    ACTIONS(465), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3124] = 3,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    STATE(111), 1,
      aux_sym__expression_in_statement,
    ACTIONS(467), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3136] = 3,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    STATE(111), 1,
      aux_sym__expression_in_statement,
    ACTIONS(469), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3148] = 3,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    STATE(111), 1,
      aux_sym__expression_in_statement,
    ACTIONS(471), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3160] = 4,
    ACTIONS(473), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(475), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(107), 1,
      sym_else_statement,
    STATE(129), 2,
      sym_elif_statement,
      aux_sym_if_statement_repeat1,
  [3174] = 3,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    STATE(111), 1,
      aux_sym__expression_in_statement,
    ACTIONS(477), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3186] = 3,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    STATE(119), 1,
      aux_sym__expression_in_statement,
    ACTIONS(479), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3198] = 3,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    STATE(111), 1,
      aux_sym__expression_in_statement,
    ACTIONS(481), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3210] = 3,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    STATE(111), 1,
      aux_sym__expression_in_statement,
    ACTIONS(483), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3222] = 2,
    ACTIONS(487), 2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
    ACTIONS(485), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3232] = 3,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    STATE(111), 1,
      aux_sym__expression_in_statement,
    ACTIONS(489), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3244] = 2,
    ACTIONS(229), 2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
    ACTIONS(227), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3254] = 4,
    ACTIONS(491), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(493), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(59), 1,
      sym_else_statement,
    STATE(129), 2,
      sym_elif_statement,
      aux_sym_if_statement_repeat1,
  [3268] = 3,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    STATE(111), 1,
      aux_sym__expression_in_statement,
    ACTIONS(495), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3280] = 3,
    ACTIONS(139), 1,
      aux_sym__expression_in_statement_token1,
    STATE(111), 1,
      aux_sym__expression_in_statement,
    ACTIONS(497), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3292] = 3,
    ACTIONS(501), 1,
      anon_sym_scoped,
    ACTIONS(503), 1,
      anon_sym_required,
    ACTIONS(499), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3304] = 4,
    ACTIONS(505), 1,
      sym_identifier,
    ACTIONS(507), 1,
      anon_sym_DQUOTE,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    STATE(110), 1,
      sym_string,
  [3317] = 3,
    ACTIONS(511), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(514), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(129), 2,
      sym_elif_statement,
      aux_sym_if_statement_repeat1,
  [3328] = 2,
    ACTIONS(517), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(519), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3337] = 2,
    ACTIONS(523), 1,
      anon_sym_required,
    ACTIONS(521), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3346] = 2,
    ACTIONS(525), 1,
      sym_identifier,
    ACTIONS(527), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3355] = 2,
    ACTIONS(529), 1,
      sym_identifier,
    ACTIONS(531), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3364] = 4,
    ACTIONS(533), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(535), 1,
      aux_sym__output_code_token1,
    STATE(172), 1,
      aux_sym__output_code_repeat1,
    STATE(208), 1,
      sym__output_code,
  [3377] = 2,
    ACTIONS(537), 1,
      sym_identifier,
    ACTIONS(539), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3386] = 2,
    ACTIONS(541), 1,
      sym_identifier,
    ACTIONS(543), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3395] = 1,
    ACTIONS(545), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3401] = 1,
    ACTIONS(547), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3407] = 1,
    ACTIONS(549), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3413] = 3,
    ACTIONS(143), 1,
      anon_sym_else,
    ACTIONS(149), 1,
      anon_sym_elif,
    ACTIONS(551), 1,
      anon_sym_endif,
  [3423] = 1,
    ACTIONS(521), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3429] = 1,
    ACTIONS(553), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3435] = 1,
    ACTIONS(555), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3441] = 1,
    ACTIONS(557), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3447] = 1,
    ACTIONS(559), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3453] = 1,
    ACTIONS(561), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3459] = 1,
    ACTIONS(563), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3465] = 3,
    ACTIONS(565), 1,
      aux_sym_comment_token1,
    ACTIONS(568), 1,
      anon_sym_POUND_RBRACE,
    STATE(148), 1,
      aux_sym_comment_repeat1,
  [3475] = 1,
    ACTIONS(570), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3481] = 3,
    ACTIONS(572), 1,
      aux_sym_comment_token1,
    ACTIONS(574), 1,
      anon_sym_POUND_RBRACE,
    STATE(176), 1,
      aux_sym_comment_repeat1,
  [3491] = 1,
    ACTIONS(485), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3497] = 3,
    ACTIONS(576), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(578), 1,
      aux_sym__output_code_token1,
    STATE(152), 1,
      aux_sym__output_code_repeat1,
  [3507] = 1,
    ACTIONS(581), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3513] = 1,
    ACTIONS(261), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3519] = 1,
    ACTIONS(583), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3525] = 1,
    ACTIONS(585), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3531] = 1,
    ACTIONS(587), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3537] = 1,
    ACTIONS(589), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3543] = 1,
    ACTIONS(384), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3549] = 1,
    ACTIONS(591), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3555] = 3,
    ACTIONS(507), 1,
      anon_sym_DQUOTE,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    STATE(228), 1,
      sym_string,
  [3565] = 1,
    ACTIONS(593), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3571] = 1,
    ACTIONS(595), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3577] = 1,
    ACTIONS(597), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3583] = 3,
    ACTIONS(507), 1,
      anon_sym_DQUOTE,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    STATE(229), 1,
      sym_string,
  [3593] = 1,
    ACTIONS(599), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3599] = 3,
    ACTIONS(143), 1,
      anon_sym_else,
    ACTIONS(149), 1,
      anon_sym_elif,
    ACTIONS(601), 1,
      anon_sym_endif,
  [3609] = 1,
    ACTIONS(603), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3615] = 1,
    ACTIONS(605), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3621] = 1,
    ACTIONS(607), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3627] = 1,
    ACTIONS(609), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3633] = 3,
    ACTIONS(611), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(613), 1,
      aux_sym__output_code_token1,
    STATE(152), 1,
      aux_sym__output_code_repeat1,
  [3643] = 1,
    ACTIONS(615), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3649] = 1,
    ACTIONS(527), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3655] = 1,
    ACTIONS(617), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3661] = 3,
    ACTIONS(619), 1,
      aux_sym_comment_token1,
    ACTIONS(621), 1,
      anon_sym_POUND_RBRACE,
    STATE(148), 1,
      aux_sym_comment_repeat1,
  [3671] = 1,
    ACTIONS(531), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3677] = 1,
    ACTIONS(288), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3683] = 1,
    ACTIONS(623), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3689] = 1,
    ACTIONS(539), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PLUS_PERCENT_RBRACE,
  [3695] = 2,
    ACTIONS(625), 1,
      aux_sym__expression_in_statement_token1,
    STATE(113), 1,
      aux_sym__expression_in_statement,
  [3702] = 2,
    ACTIONS(625), 1,
      aux_sym__expression_in_statement_token1,
    STATE(114), 1,
      aux_sym__expression_in_statement,
  [3709] = 2,
    ACTIONS(625), 1,
      aux_sym__expression_in_statement_token1,
    STATE(125), 1,
      aux_sym__expression_in_statement,
  [3716] = 2,
    ACTIONS(625), 1,
      aux_sym__expression_in_statement_token1,
    STATE(126), 1,
      aux_sym__expression_in_statement,
  [3723] = 2,
    ACTIONS(625), 1,
      aux_sym__expression_in_statement_token1,
    STATE(115), 1,
      aux_sym__expression_in_statement,
  [3730] = 2,
    ACTIONS(625), 1,
      aux_sym__expression_in_statement_token1,
    STATE(112), 1,
      aux_sym__expression_in_statement,
  [3737] = 2,
    ACTIONS(625), 1,
      aux_sym__expression_in_statement_token1,
    STATE(120), 1,
      aux_sym__expression_in_statement,
  [3744] = 2,
    ACTIONS(625), 1,
      aux_sym__expression_in_statement_token1,
    STATE(122), 1,
      aux_sym__expression_in_statement,
  [3751] = 1,
    ACTIONS(627), 1,
      sym_identifier,
  [3755] = 1,
    ACTIONS(629), 1,
      aux_sym_output_token1,
  [3759] = 1,
    ACTIONS(631), 1,
      aux_sym_output_token1,
  [3763] = 1,
    ACTIONS(633), 1,
      aux_sym_output_token1,
  [3767] = 1,
    ACTIONS(635), 1,
      aux_sym_output_token1,
  [3771] = 1,
    ACTIONS(637), 1,
      aux_sym_output_token1,
  [3775] = 1,
    ACTIONS(639), 1,
      aux_sym_output_token1,
  [3779] = 1,
    ACTIONS(641), 1,
      aux_sym_output_token1,
  [3783] = 1,
    ACTIONS(643), 1,
      aux_sym_output_token1,
  [3787] = 1,
    ACTIONS(645), 1,
      aux_sym_output_token1,
  [3791] = 1,
    ACTIONS(647), 1,
      aux_sym_output_token1,
  [3795] = 1,
    ACTIONS(649), 1,
      aux_sym_output_token1,
  [3799] = 1,
    ACTIONS(651), 1,
      aux_sym_output_token1,
  [3803] = 1,
    ACTIONS(653), 1,
      aux_sym_output_token1,
  [3807] = 1,
    ACTIONS(655), 1,
      aux_sym_output_token1,
  [3811] = 1,
    ACTIONS(657), 1,
      aux_sym_output_token1,
  [3815] = 1,
    ACTIONS(659), 1,
      aux_sym_output_token1,
  [3819] = 1,
    ACTIONS(661), 1,
      aux_sym_output_token1,
  [3823] = 1,
    ACTIONS(663), 1,
      aux_sym_output_token1,
  [3827] = 1,
    ACTIONS(665), 1,
      anon_sym_RBRACE_RBRACE,
  [3831] = 1,
    ACTIONS(667), 1,
      aux_sym_output_token1,
  [3835] = 1,
    ACTIONS(669), 1,
      aux_sym_output_token1,
  [3839] = 1,
    ACTIONS(671), 1,
      aux_sym_output_token1,
  [3843] = 1,
    ACTIONS(673), 1,
      ts_builtin_sym_end,
  [3847] = 1,
    ACTIONS(675), 1,
      aux_sym_output_token1,
  [3851] = 1,
    ACTIONS(677), 1,
      sym_identifier,
  [3855] = 1,
    ACTIONS(679), 1,
      sym_identifier,
  [3859] = 1,
    ACTIONS(681), 1,
      sym_identifier,
  [3863] = 1,
    ACTIONS(683), 1,
      anon_sym_SQUOTE,
  [3867] = 1,
    ACTIONS(685), 1,
      sym_identifier,
  [3871] = 1,
    ACTIONS(687), 1,
      aux_sym_output_token1,
  [3875] = 1,
    ACTIONS(149), 1,
      anon_sym_elif,
  [3879] = 1,
    ACTIONS(689), 1,
      aux_sym_output_token1,
  [3883] = 1,
    ACTIONS(683), 1,
      anon_sym_DQUOTE,
  [3887] = 1,
    ACTIONS(691), 1,
      aux_sym_output_token1,
  [3891] = 1,
    ACTIONS(693), 1,
      sym_identifier,
  [3895] = 1,
    ACTIONS(695), 1,
      aux_sym_string_token1,
  [3899] = 1,
    ACTIONS(697), 1,
      aux_sym_output_token1,
  [3903] = 1,
    ACTIONS(699), 1,
      aux_sym_output_token1,
  [3907] = 1,
    ACTIONS(701), 1,
      anon_sym_import,
  [3911] = 1,
    ACTIONS(703), 1,
      anon_sym_as,
  [3915] = 1,
    ACTIONS(705), 1,
      aux_sym_string_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 146,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 238,
  [SMALL_STATE(8)] = 284,
  [SMALL_STATE(9)] = 327,
  [SMALL_STATE(10)] = 370,
  [SMALL_STATE(11)] = 413,
  [SMALL_STATE(12)] = 456,
  [SMALL_STATE(13)] = 499,
  [SMALL_STATE(14)] = 542,
  [SMALL_STATE(15)] = 585,
  [SMALL_STATE(16)] = 628,
  [SMALL_STATE(17)] = 671,
  [SMALL_STATE(18)] = 714,
  [SMALL_STATE(19)] = 757,
  [SMALL_STATE(20)] = 800,
  [SMALL_STATE(21)] = 843,
  [SMALL_STATE(22)] = 886,
  [SMALL_STATE(23)] = 929,
  [SMALL_STATE(24)] = 972,
  [SMALL_STATE(25)] = 1015,
  [SMALL_STATE(26)] = 1058,
  [SMALL_STATE(27)] = 1101,
  [SMALL_STATE(28)] = 1144,
  [SMALL_STATE(29)] = 1187,
  [SMALL_STATE(30)] = 1230,
  [SMALL_STATE(31)] = 1285,
  [SMALL_STATE(32)] = 1340,
  [SMALL_STATE(33)] = 1392,
  [SMALL_STATE(34)] = 1444,
  [SMALL_STATE(35)] = 1493,
  [SMALL_STATE(36)] = 1542,
  [SMALL_STATE(37)] = 1591,
  [SMALL_STATE(38)] = 1640,
  [SMALL_STATE(39)] = 1689,
  [SMALL_STATE(40)] = 1738,
  [SMALL_STATE(41)] = 1787,
  [SMALL_STATE(42)] = 1836,
  [SMALL_STATE(43)] = 1885,
  [SMALL_STATE(44)] = 1934,
  [SMALL_STATE(45)] = 1983,
  [SMALL_STATE(46)] = 2032,
  [SMALL_STATE(47)] = 2081,
  [SMALL_STATE(48)] = 2130,
  [SMALL_STATE(49)] = 2179,
  [SMALL_STATE(50)] = 2228,
  [SMALL_STATE(51)] = 2277,
  [SMALL_STATE(52)] = 2326,
  [SMALL_STATE(53)] = 2372,
  [SMALL_STATE(54)] = 2391,
  [SMALL_STATE(55)] = 2410,
  [SMALL_STATE(56)] = 2429,
  [SMALL_STATE(57)] = 2440,
  [SMALL_STATE(58)] = 2452,
  [SMALL_STATE(59)] = 2464,
  [SMALL_STATE(60)] = 2476,
  [SMALL_STATE(61)] = 2488,
  [SMALL_STATE(62)] = 2504,
  [SMALL_STATE(63)] = 2516,
  [SMALL_STATE(64)] = 2530,
  [SMALL_STATE(65)] = 2542,
  [SMALL_STATE(66)] = 2554,
  [SMALL_STATE(67)] = 2566,
  [SMALL_STATE(68)] = 2578,
  [SMALL_STATE(69)] = 2594,
  [SMALL_STATE(70)] = 2606,
  [SMALL_STATE(71)] = 2618,
  [SMALL_STATE(72)] = 2630,
  [SMALL_STATE(73)] = 2642,
  [SMALL_STATE(74)] = 2654,
  [SMALL_STATE(75)] = 2666,
  [SMALL_STATE(76)] = 2678,
  [SMALL_STATE(77)] = 2690,
  [SMALL_STATE(78)] = 2702,
  [SMALL_STATE(79)] = 2714,
  [SMALL_STATE(80)] = 2726,
  [SMALL_STATE(81)] = 2738,
  [SMALL_STATE(82)] = 2750,
  [SMALL_STATE(83)] = 2762,
  [SMALL_STATE(84)] = 2774,
  [SMALL_STATE(85)] = 2786,
  [SMALL_STATE(86)] = 2798,
  [SMALL_STATE(87)] = 2810,
  [SMALL_STATE(88)] = 2822,
  [SMALL_STATE(89)] = 2834,
  [SMALL_STATE(90)] = 2846,
  [SMALL_STATE(91)] = 2858,
  [SMALL_STATE(92)] = 2870,
  [SMALL_STATE(93)] = 2886,
  [SMALL_STATE(94)] = 2898,
  [SMALL_STATE(95)] = 2910,
  [SMALL_STATE(96)] = 2922,
  [SMALL_STATE(97)] = 2934,
  [SMALL_STATE(98)] = 2946,
  [SMALL_STATE(99)] = 2958,
  [SMALL_STATE(100)] = 2970,
  [SMALL_STATE(101)] = 2982,
  [SMALL_STATE(102)] = 2994,
  [SMALL_STATE(103)] = 3006,
  [SMALL_STATE(104)] = 3018,
  [SMALL_STATE(105)] = 3030,
  [SMALL_STATE(106)] = 3042,
  [SMALL_STATE(107)] = 3054,
  [SMALL_STATE(108)] = 3066,
  [SMALL_STATE(109)] = 3078,
  [SMALL_STATE(110)] = 3087,
  [SMALL_STATE(111)] = 3100,
  [SMALL_STATE(112)] = 3112,
  [SMALL_STATE(113)] = 3124,
  [SMALL_STATE(114)] = 3136,
  [SMALL_STATE(115)] = 3148,
  [SMALL_STATE(116)] = 3160,
  [SMALL_STATE(117)] = 3174,
  [SMALL_STATE(118)] = 3186,
  [SMALL_STATE(119)] = 3198,
  [SMALL_STATE(120)] = 3210,
  [SMALL_STATE(121)] = 3222,
  [SMALL_STATE(122)] = 3232,
  [SMALL_STATE(123)] = 3244,
  [SMALL_STATE(124)] = 3254,
  [SMALL_STATE(125)] = 3268,
  [SMALL_STATE(126)] = 3280,
  [SMALL_STATE(127)] = 3292,
  [SMALL_STATE(128)] = 3304,
  [SMALL_STATE(129)] = 3317,
  [SMALL_STATE(130)] = 3328,
  [SMALL_STATE(131)] = 3337,
  [SMALL_STATE(132)] = 3346,
  [SMALL_STATE(133)] = 3355,
  [SMALL_STATE(134)] = 3364,
  [SMALL_STATE(135)] = 3377,
  [SMALL_STATE(136)] = 3386,
  [SMALL_STATE(137)] = 3395,
  [SMALL_STATE(138)] = 3401,
  [SMALL_STATE(139)] = 3407,
  [SMALL_STATE(140)] = 3413,
  [SMALL_STATE(141)] = 3423,
  [SMALL_STATE(142)] = 3429,
  [SMALL_STATE(143)] = 3435,
  [SMALL_STATE(144)] = 3441,
  [SMALL_STATE(145)] = 3447,
  [SMALL_STATE(146)] = 3453,
  [SMALL_STATE(147)] = 3459,
  [SMALL_STATE(148)] = 3465,
  [SMALL_STATE(149)] = 3475,
  [SMALL_STATE(150)] = 3481,
  [SMALL_STATE(151)] = 3491,
  [SMALL_STATE(152)] = 3497,
  [SMALL_STATE(153)] = 3507,
  [SMALL_STATE(154)] = 3513,
  [SMALL_STATE(155)] = 3519,
  [SMALL_STATE(156)] = 3525,
  [SMALL_STATE(157)] = 3531,
  [SMALL_STATE(158)] = 3537,
  [SMALL_STATE(159)] = 3543,
  [SMALL_STATE(160)] = 3549,
  [SMALL_STATE(161)] = 3555,
  [SMALL_STATE(162)] = 3565,
  [SMALL_STATE(163)] = 3571,
  [SMALL_STATE(164)] = 3577,
  [SMALL_STATE(165)] = 3583,
  [SMALL_STATE(166)] = 3593,
  [SMALL_STATE(167)] = 3599,
  [SMALL_STATE(168)] = 3609,
  [SMALL_STATE(169)] = 3615,
  [SMALL_STATE(170)] = 3621,
  [SMALL_STATE(171)] = 3627,
  [SMALL_STATE(172)] = 3633,
  [SMALL_STATE(173)] = 3643,
  [SMALL_STATE(174)] = 3649,
  [SMALL_STATE(175)] = 3655,
  [SMALL_STATE(176)] = 3661,
  [SMALL_STATE(177)] = 3671,
  [SMALL_STATE(178)] = 3677,
  [SMALL_STATE(179)] = 3683,
  [SMALL_STATE(180)] = 3689,
  [SMALL_STATE(181)] = 3695,
  [SMALL_STATE(182)] = 3702,
  [SMALL_STATE(183)] = 3709,
  [SMALL_STATE(184)] = 3716,
  [SMALL_STATE(185)] = 3723,
  [SMALL_STATE(186)] = 3730,
  [SMALL_STATE(187)] = 3737,
  [SMALL_STATE(188)] = 3744,
  [SMALL_STATE(189)] = 3751,
  [SMALL_STATE(190)] = 3755,
  [SMALL_STATE(191)] = 3759,
  [SMALL_STATE(192)] = 3763,
  [SMALL_STATE(193)] = 3767,
  [SMALL_STATE(194)] = 3771,
  [SMALL_STATE(195)] = 3775,
  [SMALL_STATE(196)] = 3779,
  [SMALL_STATE(197)] = 3783,
  [SMALL_STATE(198)] = 3787,
  [SMALL_STATE(199)] = 3791,
  [SMALL_STATE(200)] = 3795,
  [SMALL_STATE(201)] = 3799,
  [SMALL_STATE(202)] = 3803,
  [SMALL_STATE(203)] = 3807,
  [SMALL_STATE(204)] = 3811,
  [SMALL_STATE(205)] = 3815,
  [SMALL_STATE(206)] = 3819,
  [SMALL_STATE(207)] = 3823,
  [SMALL_STATE(208)] = 3827,
  [SMALL_STATE(209)] = 3831,
  [SMALL_STATE(210)] = 3835,
  [SMALL_STATE(211)] = 3839,
  [SMALL_STATE(212)] = 3843,
  [SMALL_STATE(213)] = 3847,
  [SMALL_STATE(214)] = 3851,
  [SMALL_STATE(215)] = 3855,
  [SMALL_STATE(216)] = 3859,
  [SMALL_STATE(217)] = 3863,
  [SMALL_STATE(218)] = 3867,
  [SMALL_STATE(219)] = 3871,
  [SMALL_STATE(220)] = 3875,
  [SMALL_STATE(221)] = 3879,
  [SMALL_STATE(222)] = 3883,
  [SMALL_STATE(223)] = 3887,
  [SMALL_STATE(224)] = 3891,
  [SMALL_STATE(225)] = 3895,
  [SMALL_STATE(226)] = 3899,
  [SMALL_STATE(227)] = 3903,
  [SMALL_STATE(228)] = 3907,
  [SMALL_STATE(229)] = 3911,
  [SMALL_STATE(230)] = 3915,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(55),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(55),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(150),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(221),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(219),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(219),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_elif_statement, 6, .production_id = 11), SHIFT(219),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_elif_statement, 6, .production_id = 11), SHIFT(219),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_elif_statement, 5, .production_id = 11), SHIFT(219),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_elif_statement, 5, .production_id = 11), SHIFT(219),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(53),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(53),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 9, .production_id = 13),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 9, .production_id = 13),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_statement, 10, .production_id = 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_statement, 10, .production_id = 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 10),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, .production_id = 10),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 8, .production_id = 9),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 8, .production_id = 9),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(218),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 8),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_statement, 8),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_assignment_statement, 4),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_assignment_statement, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 9, .production_id = 4),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 9, .production_id = 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, .production_id = 11),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 9, .production_id = 11),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 9, .production_id = 18),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 9, .production_id = 18),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_else_statement, 9, .production_id = 18),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_else_statement, 9, .production_id = 18),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 13, .production_id = 9),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 13, .production_id = 9),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 8),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 8),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_statement, 9, .production_id = 12),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_statement, 9, .production_id = 12),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_statement, 4, .dynamic_precedence = -1, .production_id = 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_statement, 4, .dynamic_precedence = -1, .production_id = 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_statement, 9, .production_id = 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_statement, 9, .production_id = 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 5, .production_id = 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 5, .production_id = 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extends_statement, 5, .production_id = 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extends_statement, 5, .production_id = 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 9, .production_id = 9),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 9, .production_id = 9),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_else_statement, 8),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_else_statement, 8),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 5),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 5),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 7, .production_id = 9),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 7, .production_id = 9),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 12, .production_id = 9),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 12, .production_id = 9),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 11, .production_id = 9),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 11, .production_id = 9),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 7),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 7),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 11, .production_id = 9),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 11, .production_id = 9),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 11, .production_id = 17),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 11, .production_id = 17),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 10, .production_id = 14),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_statement, 10, .production_id = 14),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, .production_id = 4),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6, .production_id = 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 9, .production_id = 9),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 9, .production_id = 9),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 5),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 5),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 10, .production_id = 9),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 10, .production_id = 9),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 4),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output, 4),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 9),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_statement, 9),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 10, .production_id = 9),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 10, .production_id = 9),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 9, .production_id = 14),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_statement, 9, .production_id = 14),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 6),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 6),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 10, .production_id = 13),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 10, .production_id = 13),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 3),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_statement, 10, .production_id = 12),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_statement, 10, .production_id = 12),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 10, .production_id = 16),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 10, .production_id = 16),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 10, .production_id = 15),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 10, .production_id = 15),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 6),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, .production_id = 6),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 7),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 7),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 8),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 8),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 10, .production_id = 6),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 10, .production_id = 6),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 4),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_in_statement, 2), SHIFT_REPEAT(130),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_in_statement, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(227),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(227),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_in_statement, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_in_statement, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [565] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(148),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__output_code_repeat1, 2),
  [578] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__output_code_repeat1, 2), SHIFT_REPEAT(152),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_code, 1),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [673] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_jinja2() {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
