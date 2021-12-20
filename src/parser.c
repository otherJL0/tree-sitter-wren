#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

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
  sym_statement = 27,
  sym_bool = 28,
  sym_string = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_block_comment_repeat1 = 31,
  aux_sym_block_comment_repeat2 = 32,
  aux_sym_block_repeat1 = 33,
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
  [sym_statement] = "statement",
  [sym_bool] = "bool",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_block_comment_repeat2] = "block_comment_repeat2",
  [aux_sym_block_repeat1] = "block_repeat1",
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
  [sym_statement] = sym_statement,
  [sym_bool] = sym_bool,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym_block_comment_repeat2] = aux_sym_block_comment_repeat2,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
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
  [sym_statement] = {
    .visible = true,
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
};

enum {
  field_name = 1,
  field_receiver = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_receiver] = "receiver",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
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
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
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
    [sym_source_file] = STATE(50),
    [sym__comment] = STATE(3),
    [sym_line_comment] = STATE(3),
    [sym_block_comment] = STATE(3),
    [sym_block] = STATE(3),
    [sym__value] = STATE(12),
    [sym_method_call] = STATE(12),
    [sym_statement] = STATE(3),
    [sym_bool] = STATE(12),
    [sym_string] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    [sym__comment] = STATE(2),
    [sym_line_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_block] = STATE(2),
    [sym__value] = STATE(12),
    [sym_method_call] = STATE(12),
    [sym_statement] = STATE(2),
    [sym_bool] = STATE(12),
    [sym_string] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(26),
    [anon_sym_SLASH_STAR] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(32),
    [anon_sym_var] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(38),
    [anon_sym_false] = ACTIONS(38),
    [sym_num] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(44),
  },
  [3] = {
    [sym__comment] = STATE(2),
    [sym_line_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_block] = STATE(2),
    [sym__value] = STATE(12),
    [sym_method_call] = STATE(12),
    [sym_statement] = STATE(2),
    [sym_bool] = STATE(12),
    [sym_string] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(47),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_var,
    ACTIONS(53), 1,
      sym__newline,
    ACTIONS(57), 1,
      sym_num,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      aux_sym_block_comment_repeat1,
    STATE(8), 1,
      aux_sym_block_repeat1,
    STATE(32), 1,
      sym_statement,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 4,
      sym__value,
      sym_method_call,
      sym_bool,
      sym_string,
  [35] = 10,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_var,
    ACTIONS(57), 1,
      sym_num,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym_block_repeat1,
    STATE(22), 1,
      aux_sym_block_comment_repeat1,
    STATE(34), 1,
      sym_statement,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 4,
      sym__value,
      sym_method_call,
      sym_bool,
      sym_string,
  [70] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_var,
    ACTIONS(72), 1,
      sym_num,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      aux_sym_block_repeat1,
    STATE(38), 1,
      sym_statement,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 4,
      sym__value,
      sym_method_call,
      sym_bool,
      sym_string,
  [99] = 8,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_var,
    ACTIONS(78), 1,
      sym_num,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      aux_sym_block_repeat1,
    STATE(37), 1,
      sym_statement,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 4,
      sym__value,
      sym_method_call,
      sym_bool,
      sym_string,
  [128] = 8,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_var,
    ACTIONS(78), 1,
      sym_num,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      aux_sym_block_repeat1,
    STATE(34), 1,
      sym_statement,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 4,
      sym__value,
      sym_method_call,
      sym_bool,
      sym_string,
  [157] = 2,
    ACTIONS(84), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [172] = 2,
    ACTIONS(88), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [187] = 2,
    ACTIONS(92), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(90), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [202] = 2,
    ACTIONS(96), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [217] = 2,
    ACTIONS(100), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [232] = 2,
    ACTIONS(104), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [247] = 2,
    ACTIONS(108), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [262] = 2,
    ACTIONS(112), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [277] = 2,
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
  [292] = 2,
    ACTIONS(120), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(118), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [307] = 2,
    ACTIONS(124), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [322] = 2,
    ACTIONS(128), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(126), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [337] = 2,
    ACTIONS(132), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(130), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [352] = 3,
    ACTIONS(136), 1,
      sym__newline,
    STATE(22), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(134), 7,
      anon_sym_RBRACE,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [368] = 4,
    ACTIONS(61), 1,
      sym__newline,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(139), 6,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [386] = 4,
    ACTIONS(61), 1,
      sym__newline,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(139), 6,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [404] = 4,
    ACTIONS(61), 1,
      sym__newline,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(139), 6,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [422] = 3,
    ACTIONS(61), 1,
      sym__newline,
    STATE(22), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(139), 6,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [437] = 4,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_num,
    ACTIONS(147), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 3,
      sym__value,
      sym_bool,
      sym_string,
  [453] = 4,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      sym_num,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 3,
      sym__value,
      sym_bool,
      sym_string,
  [469] = 3,
    ACTIONS(157), 1,
      sym__newline,
    STATE(30), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(155), 2,
      aux_sym_line_comment_token1,
      anon_sym_STAR_SLASH,
  [480] = 3,
    ACTIONS(159), 1,
      sym__newline,
    STATE(30), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(134), 2,
      aux_sym_line_comment_token1,
      anon_sym_STAR_SLASH,
  [491] = 3,
    ACTIONS(164), 1,
      sym__newline,
    STATE(29), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(162), 2,
      aux_sym_line_comment_token1,
      anon_sym_STAR_SLASH,
  [502] = 3,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    ACTIONS(168), 1,
      sym__newline,
    STATE(25), 1,
      aux_sym_block_comment_repeat1,
  [512] = 3,
    ACTIONS(170), 1,
      aux_sym_line_comment_token1,
    ACTIONS(172), 1,
      anon_sym_STAR_SLASH,
    STATE(36), 1,
      aux_sym_block_comment_repeat2,
  [522] = 3,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    ACTIONS(174), 1,
      sym__newline,
    STATE(24), 1,
      aux_sym_block_comment_repeat1,
  [532] = 3,
    ACTIONS(155), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(176), 1,
      aux_sym_line_comment_token1,
    STATE(35), 1,
      aux_sym_block_comment_repeat2,
  [542] = 3,
    ACTIONS(170), 1,
      aux_sym_line_comment_token1,
    ACTIONS(179), 1,
      anon_sym_STAR_SLASH,
    STATE(35), 1,
      aux_sym_block_comment_repeat2,
  [552] = 3,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(181), 1,
      sym__newline,
    STATE(23), 1,
      aux_sym_block_comment_repeat1,
  [562] = 2,
    ACTIONS(183), 1,
      sym__newline,
    STATE(26), 1,
      aux_sym_block_comment_repeat1,
  [569] = 2,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_argument_list,
  [576] = 2,
    ACTIONS(90), 1,
      sym__newline,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
  [583] = 2,
    ACTIONS(110), 1,
      sym__newline,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
  [590] = 2,
    ACTIONS(114), 1,
      sym__newline,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
  [597] = 2,
    ACTIONS(126), 1,
      sym__newline,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
  [604] = 2,
    ACTIONS(94), 1,
      sym__newline,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
  [611] = 2,
    ACTIONS(86), 1,
      sym__newline,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
  [618] = 2,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_argument_list,
  [625] = 1,
    ACTIONS(189), 1,
      anon_sym_DOT,
  [629] = 1,
    ACTIONS(191), 1,
      aux_sym_line_comment_token1,
  [633] = 1,
    ACTIONS(193), 1,
      aux_sym_string_token1,
  [637] = 1,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
  [641] = 1,
    ACTIONS(197), 1,
      sym_identifier,
  [645] = 1,
    ACTIONS(199), 1,
      anon_sym_EQ,
  [649] = 1,
    ACTIONS(201), 1,
      sym_identifier,
  [653] = 1,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
  [657] = 1,
    ACTIONS(205), 1,
      anon_sym_EQ,
  [661] = 1,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
  [665] = 1,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
  [669] = 1,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
  [673] = 1,
    ACTIONS(213), 1,
      sym_identifier,
  [677] = 1,
    ACTIONS(215), 1,
      aux_sym_string_token1,
  [681] = 1,
    ACTIONS(217), 1,
      sym_identifier,
  [685] = 1,
    ACTIONS(219), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 35,
  [SMALL_STATE(6)] = 70,
  [SMALL_STATE(7)] = 99,
  [SMALL_STATE(8)] = 128,
  [SMALL_STATE(9)] = 157,
  [SMALL_STATE(10)] = 172,
  [SMALL_STATE(11)] = 187,
  [SMALL_STATE(12)] = 202,
  [SMALL_STATE(13)] = 217,
  [SMALL_STATE(14)] = 232,
  [SMALL_STATE(15)] = 247,
  [SMALL_STATE(16)] = 262,
  [SMALL_STATE(17)] = 277,
  [SMALL_STATE(18)] = 292,
  [SMALL_STATE(19)] = 307,
  [SMALL_STATE(20)] = 322,
  [SMALL_STATE(21)] = 337,
  [SMALL_STATE(22)] = 352,
  [SMALL_STATE(23)] = 368,
  [SMALL_STATE(24)] = 386,
  [SMALL_STATE(25)] = 404,
  [SMALL_STATE(26)] = 422,
  [SMALL_STATE(27)] = 437,
  [SMALL_STATE(28)] = 453,
  [SMALL_STATE(29)] = 469,
  [SMALL_STATE(30)] = 480,
  [SMALL_STATE(31)] = 491,
  [SMALL_STATE(32)] = 502,
  [SMALL_STATE(33)] = 512,
  [SMALL_STATE(34)] = 522,
  [SMALL_STATE(35)] = 532,
  [SMALL_STATE(36)] = 542,
  [SMALL_STATE(37)] = 552,
  [SMALL_STATE(38)] = 562,
  [SMALL_STATE(39)] = 569,
  [SMALL_STATE(40)] = 576,
  [SMALL_STATE(41)] = 583,
  [SMALL_STATE(42)] = 590,
  [SMALL_STATE(43)] = 597,
  [SMALL_STATE(44)] = 604,
  [SMALL_STATE(45)] = 611,
  [SMALL_STATE(46)] = 618,
  [SMALL_STATE(47)] = 625,
  [SMALL_STATE(48)] = 629,
  [SMALL_STATE(49)] = 633,
  [SMALL_STATE(50)] = 637,
  [SMALL_STATE(51)] = 641,
  [SMALL_STATE(52)] = 645,
  [SMALL_STATE(53)] = 649,
  [SMALL_STATE(54)] = 653,
  [SMALL_STATE(55)] = 657,
  [SMALL_STATE(56)] = 661,
  [SMALL_STATE(57)] = 665,
  [SMALL_STATE(58)] = 669,
  [SMALL_STATE(59)] = 673,
  [SMALL_STATE(60)] = 677,
  [SMALL_STATE(61)] = 681,
  [SMALL_STATE(62)] = 685,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(62),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(59),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(45),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(44),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(60),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 6),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 4, .production_id = 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_call, 4, .production_id = 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(22),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat2, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(30),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat2, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat2, 2), SHIFT_REPEAT(31),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [195] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
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
