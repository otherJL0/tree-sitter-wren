#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum {
  sym_identifier = 1,
  anon_sym_SLASH_SLASH = 2,
  aux_sym_line_comment_token1 = 3,
  anon_sym_SLASH_STAR = 4,
  anon_sym_STAR_SLASH = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_DOT = 10,
  anon_sym_var = 11,
  anon_sym_EQ = 12,
  sym__newline = 13,
  anon_sym_true = 14,
  anon_sym_false = 15,
  sym_num = 16,
  anon_sym_DQUOTE = 17,
  aux_sym_string_token1 = 18,
  sym_source_file = 19,
  sym__comment = 20,
  sym_line_comment = 21,
  sym_block_comment = 22,
  sym_block = 23,
  sym__value = 24,
  sym_argument_list = 25,
  sym_method_call = 26,
  sym__expression = 27,
  sym_assignment = 28,
  sym__statement = 29,
  sym_bool = 30,
  sym_string = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_block_comment_repeat1 = 33,
  aux_sym_block_comment_repeat2 = 34,
  aux_sym_block_repeat1 = 35,
  aux_sym_argument_list_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_var] = "var",
  [anon_sym_EQ] = "=",
  [sym__newline] = "_newline",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_num] = "num",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_source_file] = "source_file",
  [sym__comment] = "_comment",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_block] = "block",
  [sym__value] = "_value",
  [sym_argument_list] = "argument_list",
  [sym_method_call] = "method_call",
  [sym__expression] = "_expression",
  [sym_assignment] = "assignment",
  [sym__statement] = "_statement",
  [sym_bool] = "bool",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_block_comment_repeat2] = "block_comment_repeat2",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym__newline] = sym__newline,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_num] = sym_num,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_source_file] = sym_source_file,
  [sym__comment] = sym__comment,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_block] = sym_block,
  [sym__value] = sym__value,
  [sym_argument_list] = sym_argument_list,
  [sym_method_call] = sym_method_call,
  [sym__expression] = sym__expression,
  [sym_assignment] = sym_assignment,
  [sym__statement] = sym__statement,
  [sym_bool] = sym_bool,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym_block_comment_repeat2] = aux_sym_block_comment_repeat2,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
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
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
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
  [sym_num] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_method_call] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_receiver = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_receiver] = "receiver",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_value, 3},
  [2] =
    {field_name, 2},
    {field_receiver, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '}') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '}') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(26);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(26);
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
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 't') ADVANCE(2);
      if (lookahead == 'v') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(55),
    [sym__comment] = STATE(2),
    [sym_line_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_block] = STATE(2),
    [sym__value] = STATE(2),
    [sym_method_call] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym__statement] = STATE(2),
    [sym_bool] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_SLASH_SLASH] = ACTIONS(7),
    [anon_sym_SLASH_STAR] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_num] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
  },
  [2] = {
    [sym__comment] = STATE(3),
    [sym_line_comment] = STATE(3),
    [sym_block_comment] = STATE(3),
    [sym_block] = STATE(3),
    [sym__value] = STATE(3),
    [sym_method_call] = STATE(3),
    [sym__expression] = STATE(3),
    [sym_assignment] = STATE(3),
    [sym__statement] = STATE(3),
    [sym_bool] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_SLASH_SLASH] = ACTIONS(7),
    [anon_sym_SLASH_STAR] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_num] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(19),
  },
  [3] = {
    [sym__comment] = STATE(3),
    [sym_line_comment] = STATE(3),
    [sym_block_comment] = STATE(3),
    [sym_block] = STATE(3),
    [sym__value] = STATE(3),
    [sym_method_call] = STATE(3),
    [sym__expression] = STATE(3),
    [sym_assignment] = STATE(3),
    [sym__statement] = STATE(3),
    [sym_bool] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(30),
    [anon_sym_SLASH_STAR] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(36),
    [anon_sym_var] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(42),
    [anon_sym_false] = ACTIONS(42),
    [sym_num] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(48),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_var,
    ACTIONS(55), 1,
      sym__newline,
    ACTIONS(59), 1,
      sym_num,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      aux_sym_block_comment_repeat1,
    STATE(6), 1,
      aux_sym_block_repeat1,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 7,
      sym__value,
      sym_method_call,
      sym__expression,
      sym_assignment,
      sym__statement,
      sym_bool,
      sym_string,
  [35] = 9,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_var,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym__newline,
    ACTIONS(65), 1,
      sym_num,
    STATE(8), 1,
      aux_sym_block_repeat1,
    STATE(29), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(40), 7,
      sym__value,
      sym_method_call,
      sym__expression,
      sym_assignment,
      sym__statement,
      sym_bool,
      sym_string,
  [70] = 7,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_var,
    ACTIONS(67), 1,
      sym_num,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      aux_sym_block_repeat1,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(40), 7,
      sym__value,
      sym_method_call,
      sym__expression,
      sym_assignment,
      sym__statement,
      sym_bool,
      sym_string,
  [99] = 7,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(74), 1,
      anon_sym_var,
    ACTIONS(80), 1,
      sym_num,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      aux_sym_block_repeat1,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 7,
      sym__value,
      sym_method_call,
      sym__expression,
      sym_assignment,
      sym__statement,
      sym_bool,
      sym_string,
  [128] = 7,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_var,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      sym_num,
    STATE(7), 1,
      aux_sym_block_repeat1,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 7,
      sym__value,
      sym_method_call,
      sym__expression,
      sym_assignment,
      sym__statement,
      sym_bool,
      sym_string,
  [157] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      sym_identifier,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    ACTIONS(92), 1,
      sym_num,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(11), 5,
      sym__value,
      sym__expression,
      sym_bool,
      sym_string,
      aux_sym_argument_list_repeat1,
  [181] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    ACTIONS(98), 1,
      sym_num,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 5,
      sym__value,
      sym__expression,
      sym_bool,
      sym_string,
      aux_sym_argument_list_repeat1,
  [205] = 6,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(108), 1,
      sym_num,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(11), 5,
      sym__value,
      sym__expression,
      sym_bool,
      sym_string,
      aux_sym_argument_list_repeat1,
  [229] = 3,
    ACTIONS(118), 1,
      anon_sym_DOT,
    ACTIONS(116), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(114), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [247] = 2,
    ACTIONS(122), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(120), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_num,
      anon_sym_DQUOTE,
  [263] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      sym_identifier,
    ACTIONS(92), 1,
      sym_num,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(11), 5,
      sym__value,
      sym__expression,
      sym_bool,
      sym_string,
      aux_sym_argument_list_repeat1,
  [287] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 5,
      sym__value,
      sym__expression,
      sym_bool,
      sym_string,
      aux_sym_argument_list_repeat1,
  [311] = 2,
    ACTIONS(134), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_num,
      anon_sym_DQUOTE,
  [327] = 2,
    ACTIONS(138), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(136), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [342] = 2,
    ACTIONS(142), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(140), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [357] = 2,
    ACTIONS(146), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(144), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [372] = 2,
    ACTIONS(150), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(148), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [387] = 2,
    ACTIONS(154), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(152), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [402] = 2,
    ACTIONS(158), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(156), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [417] = 2,
    ACTIONS(162), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(160), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [432] = 2,
    ACTIONS(166), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(164), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [447] = 2,
    ACTIONS(170), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(168), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [462] = 2,
    ACTIONS(174), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(172), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [477] = 2,
    ACTIONS(178), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(176), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [492] = 4,
    ACTIONS(63), 1,
      sym__newline,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(180), 6,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [510] = 3,
    ACTIONS(186), 1,
      sym__newline,
    STATE(29), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(184), 7,
      anon_sym_RBRACE,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [526] = 4,
    ACTIONS(63), 1,
      sym__newline,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(180), 6,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [544] = 4,
    ACTIONS(63), 1,
      sym__newline,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(180), 6,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [562] = 3,
    ACTIONS(63), 1,
      sym__newline,
    STATE(29), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(180), 6,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [577] = 4,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      sym_num,
    ACTIONS(193), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 3,
      sym__value,
      sym_bool,
      sym_string,
  [593] = 4,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      sym_num,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 3,
      sym__value,
      sym_bool,
      sym_string,
  [609] = 3,
    ACTIONS(203), 1,
      sym__newline,
    STATE(36), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(201), 2,
      aux_sym_line_comment_token1,
      anon_sym_STAR_SLASH,
  [620] = 3,
    ACTIONS(207), 1,
      sym__newline,
    STATE(37), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(205), 2,
      aux_sym_line_comment_token1,
      anon_sym_STAR_SLASH,
  [631] = 3,
    ACTIONS(209), 1,
      sym__newline,
    STATE(37), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(184), 2,
      aux_sym_line_comment_token1,
      anon_sym_STAR_SLASH,
  [642] = 3,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    ACTIONS(214), 1,
      sym__newline,
    STATE(31), 1,
      aux_sym_block_comment_repeat1,
  [652] = 3,
    ACTIONS(216), 1,
      aux_sym_line_comment_token1,
    ACTIONS(218), 1,
      anon_sym_STAR_SLASH,
    STATE(41), 1,
      aux_sym_block_comment_repeat2,
  [662] = 3,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(220), 1,
      sym__newline,
    STATE(30), 1,
      aux_sym_block_comment_repeat1,
  [672] = 3,
    ACTIONS(216), 1,
      aux_sym_line_comment_token1,
    ACTIONS(222), 1,
      anon_sym_STAR_SLASH,
    STATE(43), 1,
      aux_sym_block_comment_repeat2,
  [682] = 3,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    ACTIONS(224), 1,
      sym__newline,
    STATE(28), 1,
      aux_sym_block_comment_repeat1,
  [692] = 3,
    ACTIONS(205), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(226), 1,
      aux_sym_line_comment_token1,
    STATE(43), 1,
      aux_sym_block_comment_repeat2,
  [702] = 3,
    ACTIONS(114), 1,
      sym__newline,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    ACTIONS(229), 1,
      anon_sym_DOT,
  [712] = 2,
    ACTIONS(152), 1,
      sym__newline,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
  [719] = 2,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_argument_list,
  [726] = 2,
    ACTIONS(120), 1,
      sym__newline,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
  [733] = 2,
    ACTIONS(132), 1,
      sym__newline,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
  [740] = 2,
    ACTIONS(172), 1,
      sym__newline,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
  [747] = 2,
    ACTIONS(164), 1,
      sym__newline,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
  [754] = 2,
    ACTIONS(233), 1,
      sym__newline,
    STATE(32), 1,
      aux_sym_block_comment_repeat1,
  [761] = 2,
    ACTIONS(136), 1,
      sym__newline,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
  [768] = 2,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_argument_list,
  [775] = 1,
    ACTIONS(237), 1,
      anon_sym_EQ,
  [779] = 1,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
  [783] = 1,
    ACTIONS(241), 1,
      aux_sym_string_token1,
  [787] = 1,
    ACTIONS(243), 1,
      sym_identifier,
  [791] = 1,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
  [795] = 1,
    ACTIONS(247), 1,
      anon_sym_EQ,
  [799] = 1,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
  [803] = 1,
    ACTIONS(251), 1,
      sym_identifier,
  [807] = 1,
    ACTIONS(253), 1,
      aux_sym_line_comment_token1,
  [811] = 1,
    ACTIONS(255), 1,
      sym_identifier,
  [815] = 1,
    ACTIONS(257), 1,
      aux_sym_string_token1,
  [819] = 1,
    ACTIONS(259), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 35,
  [SMALL_STATE(6)] = 70,
  [SMALL_STATE(7)] = 99,
  [SMALL_STATE(8)] = 128,
  [SMALL_STATE(9)] = 157,
  [SMALL_STATE(10)] = 181,
  [SMALL_STATE(11)] = 205,
  [SMALL_STATE(12)] = 229,
  [SMALL_STATE(13)] = 247,
  [SMALL_STATE(14)] = 263,
  [SMALL_STATE(15)] = 287,
  [SMALL_STATE(16)] = 311,
  [SMALL_STATE(17)] = 327,
  [SMALL_STATE(18)] = 342,
  [SMALL_STATE(19)] = 357,
  [SMALL_STATE(20)] = 372,
  [SMALL_STATE(21)] = 387,
  [SMALL_STATE(22)] = 402,
  [SMALL_STATE(23)] = 417,
  [SMALL_STATE(24)] = 432,
  [SMALL_STATE(25)] = 447,
  [SMALL_STATE(26)] = 462,
  [SMALL_STATE(27)] = 477,
  [SMALL_STATE(28)] = 492,
  [SMALL_STATE(29)] = 510,
  [SMALL_STATE(30)] = 526,
  [SMALL_STATE(31)] = 544,
  [SMALL_STATE(32)] = 562,
  [SMALL_STATE(33)] = 577,
  [SMALL_STATE(34)] = 593,
  [SMALL_STATE(35)] = 609,
  [SMALL_STATE(36)] = 620,
  [SMALL_STATE(37)] = 631,
  [SMALL_STATE(38)] = 642,
  [SMALL_STATE(39)] = 652,
  [SMALL_STATE(40)] = 662,
  [SMALL_STATE(41)] = 672,
  [SMALL_STATE(42)] = 682,
  [SMALL_STATE(43)] = 692,
  [SMALL_STATE(44)] = 702,
  [SMALL_STATE(45)] = 712,
  [SMALL_STATE(46)] = 719,
  [SMALL_STATE(47)] = 726,
  [SMALL_STATE(48)] = 733,
  [SMALL_STATE(49)] = 740,
  [SMALL_STATE(50)] = 747,
  [SMALL_STATE(51)] = 754,
  [SMALL_STATE(52)] = 761,
  [SMALL_STATE(53)] = 768,
  [SMALL_STATE(54)] = 775,
  [SMALL_STATE(55)] = 779,
  [SMALL_STATE(56)] = 783,
  [SMALL_STATE(57)] = 787,
  [SMALL_STATE(58)] = 791,
  [SMALL_STATE(59)] = 795,
  [SMALL_STATE(60)] = 799,
  [SMALL_STATE(61)] = 803,
  [SMALL_STATE(62)] = 807,
  [SMALL_STATE(63)] = 811,
  [SMALL_STATE(64)] = 815,
  [SMALL_STATE(65)] = 819,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(44),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(63),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(47),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(51),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(64),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(11),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(13),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(11),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(56),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 6),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 4, .production_id = 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_call, 4, .production_id = 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, .production_id = 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(29),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat2, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat2, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(37),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat2, 2), SHIFT_REPEAT(35),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [239] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_wren(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
