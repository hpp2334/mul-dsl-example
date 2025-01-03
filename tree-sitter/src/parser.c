#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 111
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 19

enum ts_symbol_identifiers {
  anon_sym_struct = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_COMMA = 5,
  sym_struct_field_child_annotation = 6,
  anon_sym_declare = 7,
  anon_sym_components = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_event = 11,
  anon_sym_string = 12,
  anon_sym_bool = 13,
  anon_sym_widget = 14,
  anon_sym_void = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_DASH_GT = 18,
  anon_sym_LT = 19,
  anon_sym_GT = 20,
  anon_sym_EQ = 21,
  anon_sym_DOT = 22,
  sym_identifier = 23,
  sym_string_literal = 24,
  anon_sym_true = 25,
  anon_sym_false = 26,
  sym_source_file = 27,
  sym__declaration = 28,
  sym_struct_declaration = 29,
  sym_struct_field = 30,
  sym_struct_field_annotation = 31,
  sym_component_declaration = 32,
  sym_event_declaration = 33,
  sym_event_field = 34,
  sym_component_implementation = 35,
  sym__type = 36,
  sym_primitive_type = 37,
  sym_array_type = 38,
  sym_custom_type = 39,
  sym_function_type = 40,
  sym_type_parameters = 41,
  sym_component_body = 42,
  sym__component_expression = 43,
  sym_component_plain_expression = 44,
  sym_named_argument = 45,
  sym_lambda_expression = 46,
  sym__expression = 47,
  sym_member_expression = 48,
  sym_boolean_literal = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_struct_declaration_repeat1 = 51,
  aux_sym_struct_field_repeat1 = 52,
  aux_sym_event_declaration_repeat1 = 53,
  aux_sym_function_type_repeat1 = 54,
  aux_sym_type_parameters_repeat1 = 55,
  aux_sym_component_body_repeat1 = 56,
  aux_sym_component_plain_expression_repeat1 = 57,
  aux_sym_lambda_expression_repeat1 = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_struct] = "struct",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [sym_struct_field_child_annotation] = "struct_field_child_annotation",
  [anon_sym_declare] = "declare",
  [anon_sym_components] = "components",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_event] = "event",
  [anon_sym_string] = "string",
  [anon_sym_bool] = "bool",
  [anon_sym_widget] = "widget",
  [anon_sym_void] = "void",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [sym_identifier] = "identifier",
  [sym_string_literal] = "string_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_struct_declaration] = "struct_declaration",
  [sym_struct_field] = "struct_field",
  [sym_struct_field_annotation] = "struct_field_annotation",
  [sym_component_declaration] = "component_declaration",
  [sym_event_declaration] = "event_declaration",
  [sym_event_field] = "event_field",
  [sym_component_implementation] = "component_implementation",
  [sym__type] = "_type",
  [sym_primitive_type] = "primitive_type",
  [sym_array_type] = "array_type",
  [sym_custom_type] = "custom_type",
  [sym_function_type] = "function_type",
  [sym_type_parameters] = "type_parameters",
  [sym_component_body] = "component_body",
  [sym__component_expression] = "_component_expression",
  [sym_component_plain_expression] = "component_plain_expression",
  [sym_named_argument] = "named_argument",
  [sym_lambda_expression] = "lambda_expression",
  [sym__expression] = "_expression",
  [sym_member_expression] = "member_expression",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_struct_declaration_repeat1] = "struct_declaration_repeat1",
  [aux_sym_struct_field_repeat1] = "struct_field_repeat1",
  [aux_sym_event_declaration_repeat1] = "event_declaration_repeat1",
  [aux_sym_function_type_repeat1] = "function_type_repeat1",
  [aux_sym_type_parameters_repeat1] = "type_parameters_repeat1",
  [aux_sym_component_body_repeat1] = "component_body_repeat1",
  [aux_sym_component_plain_expression_repeat1] = "component_plain_expression_repeat1",
  [aux_sym_lambda_expression_repeat1] = "lambda_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_struct_field_child_annotation] = sym_struct_field_child_annotation,
  [anon_sym_declare] = anon_sym_declare,
  [anon_sym_components] = anon_sym_components,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_event] = anon_sym_event,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_widget] = anon_sym_widget,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_identifier] = sym_identifier,
  [sym_string_literal] = sym_string_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_source_file] = sym_source_file,
  [sym__declaration] = sym__declaration,
  [sym_struct_declaration] = sym_struct_declaration,
  [sym_struct_field] = sym_struct_field,
  [sym_struct_field_annotation] = sym_struct_field_annotation,
  [sym_component_declaration] = sym_component_declaration,
  [sym_event_declaration] = sym_event_declaration,
  [sym_event_field] = sym_event_field,
  [sym_component_implementation] = sym_component_implementation,
  [sym__type] = sym__type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_array_type] = sym_array_type,
  [sym_custom_type] = sym_custom_type,
  [sym_function_type] = sym_function_type,
  [sym_type_parameters] = sym_type_parameters,
  [sym_component_body] = sym_component_body,
  [sym__component_expression] = sym__component_expression,
  [sym_component_plain_expression] = sym_component_plain_expression,
  [sym_named_argument] = sym_named_argument,
  [sym_lambda_expression] = sym_lambda_expression,
  [sym__expression] = sym__expression,
  [sym_member_expression] = sym_member_expression,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_struct_declaration_repeat1] = aux_sym_struct_declaration_repeat1,
  [aux_sym_struct_field_repeat1] = aux_sym_struct_field_repeat1,
  [aux_sym_event_declaration_repeat1] = aux_sym_event_declaration_repeat1,
  [aux_sym_function_type_repeat1] = aux_sym_function_type_repeat1,
  [aux_sym_type_parameters_repeat1] = aux_sym_type_parameters_repeat1,
  [aux_sym_component_body_repeat1] = aux_sym_component_body_repeat1,
  [aux_sym_component_plain_expression_repeat1] = aux_sym_component_plain_expression_repeat1,
  [aux_sym_lambda_expression_repeat1] = aux_sym_lambda_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_struct_field_child_annotation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_declare] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_components] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_event] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_widget] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_struct_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_component_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_event_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_event_field] = {
    .visible = true,
    .named = true,
  },
  [sym_component_implementation] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_component_body] = {
    .visible = true,
    .named = true,
  },
  [sym__component_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_component_plain_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_named_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_member_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_event_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_plain_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lambda_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_argument = 1,
  field_arguments = 2,
  field_body = 3,
  field_element_type = 4,
  field_name = 5,
  field_object = 6,
  field_property = 7,
  field_props_type = 8,
  field_return = 9,
  field_type = 10,
  field_value = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_element_type] = "element_type",
  [field_name] = "name",
  [field_object] = "object",
  [field_property] = "property",
  [field_props_type] = "props_type",
  [field_return] = "return",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 1},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 3},
  [11] = {.index = 18, .length = 1},
  [12] = {.index = 19, .length = 3},
  [13] = {.index = 22, .length = 2},
  [14] = {.index = 24, .length = 2},
  [15] = {.index = 26, .length = 4},
  [16] = {.index = 30, .length = 3},
  [17] = {.index = 33, .length = 2},
  [18] = {.index = 35, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 0},
    {field_type, 2},
  [3] =
    {field_name, 2},
    {field_props_type, 4},
  [5] =
    {field_element_type, 1},
  [6] =
    {field_body, 5},
    {field_name, 1},
    {field_props_type, 3},
  [9] =
    {field_name, 1},
    {field_type, 3},
  [11] =
    {field_name, 0},
  [12] =
    {field_arguments, 1},
    {field_return, 4},
  [14] =
    {field_body, 1},
  [15] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_return, 5},
  [18] =
    {field_argument, 1},
  [19] =
    {field_argument, 1},
    {field_argument, 2},
    {field_name, 0},
  [22] =
    {field_argument, 0},
    {field_body, 2},
  [24] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [26] =
    {field_argument, 1},
    {field_argument, 2},
    {field_argument, 3},
    {field_name, 0},
  [30] =
    {field_argument, 0},
    {field_argument, 1, .inherited = true},
    {field_body, 3},
  [33] =
    {field_name, 0},
    {field_value, 2},
  [35] =
    {field_object, 0},
    {field_property, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [24] = 21,
  [25] = 20,
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
  [72] = 39,
  [73] = 41,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(55);
      ADVANCE_MAP(
        '"', 2,
        '(', 64,
        ')', 65,
        ',', 60,
        '-', 5,
        '.', 81,
        ':', 59,
        '<', 78,
        '=', 80,
        '>', 79,
        '@', 8,
        '[', 75,
        ']', 76,
        'b', 40,
        'c', 37,
        'd', 18,
        'e', 54,
        'f', 6,
        's', 51,
        't', 43,
        'v', 41,
        'w', 24,
        '{', 57,
        '}', 58,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 't') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(106);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '(', 64,
        ')', 65,
        ',', 60,
        '-', 5,
        '.', 81,
        '@', 8,
        ']', 76,
        '{', 57,
        '}', 58,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 'v') ADVANCE(98);
      if (lookahead == 'w') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(77);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 54:
      if (lookahead == 'v') ADVANCE(14);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_struct_field_child_annotation);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_components);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_widget);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_struct_field_child_annotation] = ACTIONS(1),
    [anon_sym_declare] = ACTIONS(1),
    [anon_sym_components] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_event] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_widget] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(94),
    [sym__declaration] = STATE(12),
    [sym_struct_declaration] = STATE(12),
    [sym_component_declaration] = STATE(12),
    [sym_event_declaration] = STATE(12),
    [sym_component_implementation] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(5),
    [anon_sym_declare] = ACTIONS(7),
    [anon_sym_components] = ACTIONS(9),
    [anon_sym_event] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(15), 4,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_widget,
      anon_sym_void,
    STATE(107), 5,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_custom_type,
      sym_function_type,
  [23] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(15), 4,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_widget,
      anon_sym_void,
    STATE(104), 5,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_custom_type,
      sym_function_type,
  [46] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(15), 4,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_widget,
      anon_sym_void,
    STATE(60), 5,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_custom_type,
      sym_function_type,
  [69] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(15), 4,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_widget,
      anon_sym_void,
    STATE(109), 5,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_custom_type,
      sym_function_type,
  [92] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(15), 4,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_widget,
      anon_sym_void,
    STATE(46), 5,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_custom_type,
      sym_function_type,
  [115] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(15), 4,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_widget,
      anon_sym_void,
    STATE(57), 5,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_custom_type,
      sym_function_type,
  [138] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(15), 4,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_widget,
      anon_sym_void,
    STATE(51), 5,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_custom_type,
      sym_function_type,
  [161] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(15), 4,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_widget,
      anon_sym_void,
    STATE(78), 5,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_custom_type,
      sym_function_type,
  [184] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(15), 4,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_widget,
      anon_sym_void,
    STATE(31), 5,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_custom_type,
      sym_function_type,
  [207] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(15), 4,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_widget,
      anon_sym_void,
    STATE(30), 5,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_custom_type,
      sym_function_type,
  [230] = 6,
    ACTIONS(5), 1,
      anon_sym_struct,
    ACTIONS(7), 1,
      anon_sym_declare,
    ACTIONS(9), 1,
      anon_sym_components,
    ACTIONS(11), 1,
      anon_sym_event,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(13), 6,
      sym__declaration,
      sym_struct_declaration,
      sym_component_declaration,
      sym_event_declaration,
      sym_component_implementation,
      aux_sym_source_file_repeat1,
  [254] = 6,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_struct,
    ACTIONS(28), 1,
      anon_sym_declare,
    ACTIONS(31), 1,
      anon_sym_components,
    ACTIONS(34), 1,
      anon_sym_event,
    STATE(13), 6,
      sym__declaration,
      sym_struct_declaration,
      sym_component_declaration,
      sym_event_declaration,
      sym_component_implementation,
      aux_sym_source_file_repeat1,
  [278] = 6,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_component_body,
    STATE(65), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(39), 3,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      sym_identifier,
  [299] = 5,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      sym_struct_field_child_annotation,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(18), 2,
      sym_struct_field,
      aux_sym_struct_declaration_repeat1,
    STATE(49), 2,
      sym_struct_field_annotation,
      aux_sym_struct_field_repeat1,
  [317] = 5,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      sym_struct_field_child_annotation,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(19), 2,
      sym_struct_field,
      aux_sym_struct_declaration_repeat1,
    STATE(49), 2,
      sym_struct_field_annotation,
      aux_sym_struct_field_repeat1,
  [335] = 5,
    ACTIONS(47), 1,
      sym_struct_field_child_annotation,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(15), 2,
      sym_struct_field,
      aux_sym_struct_declaration_repeat1,
    STATE(49), 2,
      sym_struct_field_annotation,
      aux_sym_struct_field_repeat1,
  [353] = 5,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      sym_struct_field_child_annotation,
    ACTIONS(58), 1,
      sym_identifier,
    STATE(18), 2,
      sym_struct_field,
      aux_sym_struct_declaration_repeat1,
    STATE(49), 2,
      sym_struct_field_annotation,
      aux_sym_struct_field_repeat1,
  [371] = 5,
    ACTIONS(47), 1,
      sym_struct_field_child_annotation,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(18), 2,
      sym_struct_field,
      aux_sym_struct_declaration_repeat1,
    STATE(49), 2,
      sym_struct_field_annotation,
      aux_sym_struct_field_repeat1,
  [389] = 4,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      anon_sym_DASH_GT,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(22), 4,
      sym__component_expression,
      sym_component_plain_expression,
      sym_lambda_expression,
      aux_sym_component_body_repeat1,
  [405] = 4,
    ACTIONS(65), 1,
      anon_sym_DASH_GT,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(20), 4,
      sym__component_expression,
      sym_component_plain_expression,
      sym_lambda_expression,
      aux_sym_component_body_repeat1,
  [421] = 4,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 1,
      anon_sym_DASH_GT,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(22), 4,
      sym__component_expression,
      sym_component_plain_expression,
      sym_lambda_expression,
      aux_sym_component_body_repeat1,
  [437] = 4,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      sym_string_literal,
    ACTIONS(83), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(83), 3,
      sym__expression,
      sym_member_expression,
      sym_boolean_literal,
  [453] = 4,
    ACTIONS(65), 1,
      anon_sym_DASH_GT,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(25), 4,
      sym__component_expression,
      sym_component_plain_expression,
      sym_lambda_expression,
      aux_sym_component_body_repeat1,
  [469] = 4,
    ACTIONS(65), 1,
      anon_sym_DASH_GT,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(22), 4,
      sym__component_expression,
      sym_component_plain_expression,
      sym_lambda_expression,
      aux_sym_component_body_repeat1,
  [485] = 1,
    ACTIONS(89), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_struct_field_child_annotation,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [494] = 1,
    ACTIONS(91), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_struct_field_child_annotation,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [503] = 1,
    ACTIONS(93), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_struct_field_child_annotation,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [512] = 4,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_component_body,
    ACTIONS(39), 3,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      sym_identifier,
  [527] = 1,
    ACTIONS(95), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_struct_field_child_annotation,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [536] = 1,
    ACTIONS(97), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_struct_field_child_annotation,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [545] = 1,
    ACTIONS(99), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_declare,
      anon_sym_components,
      anon_sym_event,
  [553] = 1,
    ACTIONS(101), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_declare,
      anon_sym_components,
      anon_sym_event,
  [561] = 1,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_declare,
      anon_sym_components,
      anon_sym_event,
  [569] = 1,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_declare,
      anon_sym_components,
      anon_sym_event,
  [577] = 1,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_declare,
      anon_sym_components,
      anon_sym_event,
  [585] = 1,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_declare,
      anon_sym_components,
      anon_sym_event,
  [593] = 3,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_component_body,
    ACTIONS(111), 3,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      sym_identifier,
  [605] = 1,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_declare,
      anon_sym_components,
      anon_sym_event,
  [613] = 3,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_component_body,
    ACTIONS(115), 3,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      sym_identifier,
  [625] = 1,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_declare,
      anon_sym_components,
      anon_sym_event,
  [633] = 1,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_declare,
      anon_sym_components,
      anon_sym_event,
  [641] = 3,
    ACTIONS(121), 1,
      sym_struct_field_child_annotation,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(43), 2,
      sym_struct_field_annotation,
      aux_sym_struct_field_repeat1,
  [652] = 3,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(128), 1,
      sym_identifier,
    STATE(47), 2,
      sym_event_field,
      aux_sym_event_declaration_repeat1,
  [663] = 3,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(44), 2,
      sym_event_field,
      aux_sym_event_declaration_repeat1,
  [674] = 2,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(132), 3,
      anon_sym_RBRACE,
      sym_struct_field_child_annotation,
      sym_identifier,
  [683] = 3,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(47), 2,
      sym_event_field,
      aux_sym_event_declaration_repeat1,
  [694] = 3,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(50), 2,
      sym_named_argument,
      aux_sym_component_plain_expression_repeat1,
  [705] = 3,
    ACTIONS(47), 1,
      sym_struct_field_child_annotation,
    ACTIONS(145), 1,
      sym_identifier,
    STATE(43), 2,
      sym_struct_field_annotation,
      aux_sym_struct_field_repeat1,
  [716] = 3,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(52), 2,
      sym_named_argument,
      aux_sym_component_plain_expression_repeat1,
  [727] = 2,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(151), 3,
      anon_sym_RBRACE,
      sym_struct_field_child_annotation,
      sym_identifier,
  [736] = 3,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(52), 2,
      sym_named_argument,
      aux_sym_component_plain_expression_repeat1,
  [747] = 1,
    ACTIONS(160), 3,
      anon_sym_RBRACE,
      sym_struct_field_child_annotation,
      sym_identifier,
  [753] = 3,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_GT,
    STATE(54), 1,
      aux_sym_type_parameters_repeat1,
  [763] = 3,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_GT,
    STATE(54), 1,
      aux_sym_type_parameters_repeat1,
  [773] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_function_type_repeat1,
  [783] = 2,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(175), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [791] = 1,
    ACTIONS(179), 3,
      anon_sym_RBRACE,
      sym_struct_field_child_annotation,
      sym_identifier,
  [797] = 3,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_function_type_repeat1,
  [807] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_function_type_repeat1,
  [817] = 3,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_GT,
    STATE(55), 1,
      aux_sym_type_parameters_repeat1,
  [827] = 3,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_LT,
    STATE(90), 1,
      sym_type_parameters,
  [837] = 1,
    ACTIONS(194), 3,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      sym_identifier,
  [843] = 1,
    ACTIONS(196), 3,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      sym_identifier,
  [849] = 3,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_DASH_GT,
    STATE(67), 1,
      aux_sym_lambda_expression_repeat1,
  [859] = 1,
    ACTIONS(200), 3,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      sym_identifier,
  [865] = 3,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      anon_sym_DASH_GT,
    STATE(67), 1,
      aux_sym_lambda_expression_repeat1,
  [875] = 1,
    ACTIONS(207), 3,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      sym_identifier,
  [881] = 1,
    ACTIONS(209), 3,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      sym_identifier,
  [887] = 1,
    ACTIONS(211), 3,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      sym_identifier,
  [893] = 2,
    ACTIONS(215), 1,
      anon_sym_DOT,
    ACTIONS(213), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [901] = 1,
    ACTIONS(113), 3,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      sym_identifier,
  [907] = 1,
    ACTIONS(117), 3,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      sym_identifier,
  [913] = 2,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_component_body,
  [920] = 1,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [925] = 1,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [930] = 2,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(221), 1,
      anon_sym_EQ,
  [937] = 1,
    ACTIONS(184), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [942] = 2,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(69), 1,
      sym_component_plain_expression,
  [949] = 1,
    ACTIONS(225), 2,
      sym_struct_field_child_annotation,
      sym_identifier,
  [954] = 2,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(63), 1,
      sym_component_plain_expression,
  [961] = 1,
    ACTIONS(227), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [966] = 1,
    ACTIONS(229), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [971] = 1,
    ACTIONS(231), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [976] = 1,
    ACTIONS(233), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [981] = 1,
    ACTIONS(235), 1,
      anon_sym_COLON,
  [985] = 1,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
  [989] = 1,
    ACTIONS(239), 1,
      sym_identifier,
  [993] = 1,
    ACTIONS(241), 1,
      sym_identifier,
  [997] = 1,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
  [1001] = 1,
    ACTIONS(245), 1,
      anon_sym_COLON,
  [1005] = 1,
    ACTIONS(247), 1,
      sym_identifier,
  [1009] = 1,
    ACTIONS(249), 1,
      sym_identifier,
  [1013] = 1,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
  [1017] = 1,
    ACTIONS(253), 1,
      anon_sym_DASH_GT,
  [1021] = 1,
    ACTIONS(255), 1,
      sym_identifier,
  [1025] = 1,
    ACTIONS(257), 1,
      anon_sym_components,
  [1029] = 1,
    ACTIONS(221), 1,
      anon_sym_EQ,
  [1033] = 1,
    ACTIONS(259), 1,
      sym_identifier,
  [1037] = 1,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
  [1041] = 1,
    ACTIONS(263), 1,
      sym_identifier,
  [1045] = 1,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
  [1049] = 1,
    ACTIONS(267), 1,
      anon_sym_DASH_GT,
  [1053] = 1,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
  [1057] = 1,
    ACTIONS(271), 1,
      sym_identifier,
  [1061] = 1,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
  [1065] = 1,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
  [1069] = 1,
    ACTIONS(277), 1,
      anon_sym_COLON,
  [1073] = 1,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
  [1077] = 1,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 115,
  [SMALL_STATE(8)] = 138,
  [SMALL_STATE(9)] = 161,
  [SMALL_STATE(10)] = 184,
  [SMALL_STATE(11)] = 207,
  [SMALL_STATE(12)] = 230,
  [SMALL_STATE(13)] = 254,
  [SMALL_STATE(14)] = 278,
  [SMALL_STATE(15)] = 299,
  [SMALL_STATE(16)] = 317,
  [SMALL_STATE(17)] = 335,
  [SMALL_STATE(18)] = 353,
  [SMALL_STATE(19)] = 371,
  [SMALL_STATE(20)] = 389,
  [SMALL_STATE(21)] = 405,
  [SMALL_STATE(22)] = 421,
  [SMALL_STATE(23)] = 437,
  [SMALL_STATE(24)] = 453,
  [SMALL_STATE(25)] = 469,
  [SMALL_STATE(26)] = 485,
  [SMALL_STATE(27)] = 494,
  [SMALL_STATE(28)] = 503,
  [SMALL_STATE(29)] = 512,
  [SMALL_STATE(30)] = 527,
  [SMALL_STATE(31)] = 536,
  [SMALL_STATE(32)] = 545,
  [SMALL_STATE(33)] = 553,
  [SMALL_STATE(34)] = 561,
  [SMALL_STATE(35)] = 569,
  [SMALL_STATE(36)] = 577,
  [SMALL_STATE(37)] = 585,
  [SMALL_STATE(38)] = 593,
  [SMALL_STATE(39)] = 605,
  [SMALL_STATE(40)] = 613,
  [SMALL_STATE(41)] = 625,
  [SMALL_STATE(42)] = 633,
  [SMALL_STATE(43)] = 641,
  [SMALL_STATE(44)] = 652,
  [SMALL_STATE(45)] = 663,
  [SMALL_STATE(46)] = 674,
  [SMALL_STATE(47)] = 683,
  [SMALL_STATE(48)] = 694,
  [SMALL_STATE(49)] = 705,
  [SMALL_STATE(50)] = 716,
  [SMALL_STATE(51)] = 727,
  [SMALL_STATE(52)] = 736,
  [SMALL_STATE(53)] = 747,
  [SMALL_STATE(54)] = 753,
  [SMALL_STATE(55)] = 763,
  [SMALL_STATE(56)] = 773,
  [SMALL_STATE(57)] = 783,
  [SMALL_STATE(58)] = 791,
  [SMALL_STATE(59)] = 797,
  [SMALL_STATE(60)] = 807,
  [SMALL_STATE(61)] = 817,
  [SMALL_STATE(62)] = 827,
  [SMALL_STATE(63)] = 837,
  [SMALL_STATE(64)] = 843,
  [SMALL_STATE(65)] = 849,
  [SMALL_STATE(66)] = 859,
  [SMALL_STATE(67)] = 865,
  [SMALL_STATE(68)] = 875,
  [SMALL_STATE(69)] = 881,
  [SMALL_STATE(70)] = 887,
  [SMALL_STATE(71)] = 893,
  [SMALL_STATE(72)] = 901,
  [SMALL_STATE(73)] = 907,
  [SMALL_STATE(74)] = 913,
  [SMALL_STATE(75)] = 920,
  [SMALL_STATE(76)] = 925,
  [SMALL_STATE(77)] = 930,
  [SMALL_STATE(78)] = 937,
  [SMALL_STATE(79)] = 942,
  [SMALL_STATE(80)] = 949,
  [SMALL_STATE(81)] = 954,
  [SMALL_STATE(82)] = 961,
  [SMALL_STATE(83)] = 966,
  [SMALL_STATE(84)] = 971,
  [SMALL_STATE(85)] = 976,
  [SMALL_STATE(86)] = 981,
  [SMALL_STATE(87)] = 985,
  [SMALL_STATE(88)] = 989,
  [SMALL_STATE(89)] = 993,
  [SMALL_STATE(90)] = 997,
  [SMALL_STATE(91)] = 1001,
  [SMALL_STATE(92)] = 1005,
  [SMALL_STATE(93)] = 1009,
  [SMALL_STATE(94)] = 1013,
  [SMALL_STATE(95)] = 1017,
  [SMALL_STATE(96)] = 1021,
  [SMALL_STATE(97)] = 1025,
  [SMALL_STATE(98)] = 1029,
  [SMALL_STATE(99)] = 1033,
  [SMALL_STATE(100)] = 1037,
  [SMALL_STATE(101)] = 1041,
  [SMALL_STATE(102)] = 1045,
  [SMALL_STATE(103)] = 1049,
  [SMALL_STATE(104)] = 1053,
  [SMALL_STATE(105)] = 1057,
  [SMALL_STATE(106)] = 1061,
  [SMALL_STATE(107)] = 1065,
  [SMALL_STATE(108)] = 1069,
  [SMALL_STATE(109)] = 1073,
  [SMALL_STATE(110)] = 1077,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_plain_expression, 1, 0, 7),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, 0, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5, 0, 8),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 6, 0, 10),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 6, 0, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_declaration, 5, 0, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 5, 0, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 4, 0, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 6, 0, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_implementation, 6, 0, 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_plain_expression, 4, 0, 15),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_plain_expression, 3, 0, 12),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_declaration, 4, 0, 1),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3, 0, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_event_declaration_repeat1, 2, 0, 0),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_event_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 4, 0, 6),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_plain_expression_repeat1, 2, 0, 0),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_plain_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 5, 0, 6),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_field, 3, 0, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 4, 0, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 2, 0, 9),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_plain_expression, 2, 0, 7),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 3, 0, 13),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lambda_expression_repeat1, 2, 0, 14), SHIFT_REPEAT(101),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_expression_repeat1, 2, 0, 14),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_plain_expression, 4, 0, 12),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 4, 0, 16),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_plain_expression, 5, 0, 15),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_expression_repeat1, 2, 0, 11),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_annotation, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 3, 0, 17),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 3, 0, 18),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_field, 4, 0, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [251] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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

TS_PUBLIC const TSLanguage *tree_sitter_mui(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
