#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_SLASH_SLASH = 2,
  aux_sym_line_comment_token1 = 3,
  anon_sym_SLASH_STAR = 4,
  anon_sym_STAR_SLASH = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_var = 8,
  anon_sym_EQ = 9,
  sym__newline = 10,
  anon_sym_true = 11,
  anon_sym_false = 12,
  sym_num = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_string_token1 = 15,
  sym_source_file = 16,
  sym__comment = 17,
  sym_line_comment = 18,
  sym_block_comment = 19,
  sym_block = 20,
  sym__value = 21,
  sym_statement = 22,
  sym_bool = 23,
  sym_string = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym_block_comment_repeat1 = 26,
  aux_sym_block_comment_repeat2 = 27,
  aux_sym_block_repeat1 = 28,
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
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(25);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(25);
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
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 5},
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
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(46),
    [sym__comment] = STATE(3),
    [sym_line_comment] = STATE(3),
    [sym_block_comment] = STATE(3),
    [sym_block] = STATE(3),
    [sym__value] = STATE(12),
    [sym_statement] = STATE(3),
    [sym_bool] = STATE(12),
    [sym_string] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_num] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
  },
  [2] = {
    [sym__comment] = STATE(2),
    [sym_line_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_block] = STATE(2),
    [sym__value] = STATE(12),
    [sym_statement] = STATE(2),
    [sym_bool] = STATE(12),
    [sym_string] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [anon_sym_SLASH_STAR] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_var] = ACTIONS(30),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_num] = ACTIONS(36),
    [anon_sym_DQUOTE] = ACTIONS(39),
  },
  [3] = {
    [sym__comment] = STATE(2),
    [sym_line_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_block] = STATE(2),
    [sym__value] = STATE(12),
    [sym_statement] = STATE(2),
    [sym_bool] = STATE(12),
    [sym_string] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_num] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(44), 1,
      anon_sym_var,
    ACTIONS(46), 1,
      sym__newline,
    ACTIONS(50), 1,
      sym_num,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      aux_sym_block_repeat1,
    STATE(22), 1,
      aux_sym_block_comment_repeat1,
    STATE(35), 1,
      sym_statement,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 3,
      sym__value,
      sym_bool,
      sym_string,
  [31] = 9,
    ACTIONS(44), 1,
      anon_sym_var,
    ACTIONS(50), 1,
      sym_num,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      sym__newline,
    STATE(4), 1,
      aux_sym_block_comment_repeat1,
    STATE(8), 1,
      aux_sym_block_repeat1,
    STATE(32), 1,
      sym_statement,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 3,
      sym__value,
      sym_bool,
      sym_string,
  [62] = 7,
    ACTIONS(56), 1,
      anon_sym_var,
    ACTIONS(62), 1,
      sym_num,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      aux_sym_block_repeat1,
    STATE(36), 1,
      sym_statement,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 3,
      sym__value,
      sym_bool,
      sym_string,
  [87] = 7,
    ACTIONS(68), 1,
      anon_sym_var,
    ACTIONS(72), 1,
      sym_num,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      aux_sym_block_repeat1,
    STATE(31), 1,
      sym_statement,
    ACTIONS(70), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 3,
      sym__value,
      sym_bool,
      sym_string,
  [112] = 7,
    ACTIONS(68), 1,
      anon_sym_var,
    ACTIONS(72), 1,
      sym_num,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      aux_sym_block_repeat1,
    STATE(35), 1,
      sym_statement,
    ACTIONS(70), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 3,
      sym__value,
      sym_bool,
      sym_string,
  [137] = 1,
    ACTIONS(76), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [149] = 1,
    ACTIONS(78), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [161] = 1,
    ACTIONS(80), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [173] = 1,
    ACTIONS(82), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [185] = 1,
    ACTIONS(84), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [197] = 1,
    ACTIONS(86), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [209] = 1,
    ACTIONS(88), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [221] = 1,
    ACTIONS(90), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [233] = 1,
    ACTIONS(92), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [245] = 1,
    ACTIONS(94), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [257] = 1,
    ACTIONS(96), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [269] = 4,
    ACTIONS(46), 1,
      sym__newline,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(100), 5,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [286] = 4,
    ACTIONS(46), 1,
      sym__newline,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(100), 5,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [303] = 3,
    ACTIONS(106), 1,
      sym__newline,
    STATE(22), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(104), 6,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [318] = 4,
    ACTIONS(46), 1,
      sym__newline,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(100), 5,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [335] = 4,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_num,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 3,
      sym__value,
      sym_bool,
      sym_string,
  [351] = 3,
    ACTIONS(46), 1,
      sym__newline,
    STATE(22), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(100), 5,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [365] = 4,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      sym_num,
    ACTIONS(70), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(40), 3,
      sym__value,
      sym_bool,
      sym_string,
  [381] = 3,
    ACTIONS(115), 1,
      sym__newline,
    STATE(27), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(104), 2,
      aux_sym_line_comment_token1,
      anon_sym_STAR_SLASH,
  [392] = 3,
    ACTIONS(120), 1,
      sym__newline,
    STATE(27), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(118), 2,
      aux_sym_line_comment_token1,
      anon_sym_STAR_SLASH,
  [403] = 3,
    ACTIONS(124), 1,
      sym__newline,
    STATE(28), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(122), 2,
      aux_sym_line_comment_token1,
      anon_sym_STAR_SLASH,
  [414] = 3,
    ACTIONS(126), 1,
      aux_sym_line_comment_token1,
    ACTIONS(128), 1,
      anon_sym_STAR_SLASH,
    STATE(34), 1,
      aux_sym_block_comment_repeat2,
  [424] = 3,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(130), 1,
      sym__newline,
    STATE(20), 1,
      aux_sym_block_comment_repeat1,
  [434] = 3,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    ACTIONS(134), 1,
      sym__newline,
    STATE(23), 1,
      aux_sym_block_comment_repeat1,
  [444] = 3,
    ACTIONS(118), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(136), 1,
      aux_sym_line_comment_token1,
    STATE(33), 1,
      aux_sym_block_comment_repeat2,
  [454] = 3,
    ACTIONS(126), 1,
      aux_sym_line_comment_token1,
    ACTIONS(139), 1,
      anon_sym_STAR_SLASH,
    STATE(33), 1,
      aux_sym_block_comment_repeat2,
  [464] = 3,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    ACTIONS(141), 1,
      sym__newline,
    STATE(21), 1,
      aux_sym_block_comment_repeat1,
  [474] = 2,
    ACTIONS(143), 1,
      sym__newline,
    STATE(25), 1,
      aux_sym_block_comment_repeat1,
  [481] = 2,
    ACTIONS(94), 1,
      sym__newline,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
  [488] = 2,
    ACTIONS(82), 1,
      sym__newline,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
  [495] = 2,
    ACTIONS(92), 1,
      sym__newline,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
  [502] = 2,
    ACTIONS(88), 1,
      sym__newline,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
  [509] = 1,
    ACTIONS(153), 1,
      aux_sym_line_comment_token1,
  [513] = 1,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
  [517] = 1,
    ACTIONS(157), 1,
      anon_sym_EQ,
  [521] = 1,
    ACTIONS(159), 1,
      aux_sym_string_token1,
  [525] = 1,
    ACTIONS(161), 1,
      sym_identifier,
  [529] = 1,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
  [533] = 1,
    ACTIONS(165), 1,
      anon_sym_EQ,
  [537] = 1,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
  [541] = 1,
    ACTIONS(169), 1,
      sym_identifier,
  [545] = 1,
    ACTIONS(171), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 31,
  [SMALL_STATE(6)] = 62,
  [SMALL_STATE(7)] = 87,
  [SMALL_STATE(8)] = 112,
  [SMALL_STATE(9)] = 137,
  [SMALL_STATE(10)] = 149,
  [SMALL_STATE(11)] = 161,
  [SMALL_STATE(12)] = 173,
  [SMALL_STATE(13)] = 185,
  [SMALL_STATE(14)] = 197,
  [SMALL_STATE(15)] = 209,
  [SMALL_STATE(16)] = 221,
  [SMALL_STATE(17)] = 233,
  [SMALL_STATE(18)] = 245,
  [SMALL_STATE(19)] = 257,
  [SMALL_STATE(20)] = 269,
  [SMALL_STATE(21)] = 286,
  [SMALL_STATE(22)] = 303,
  [SMALL_STATE(23)] = 318,
  [SMALL_STATE(24)] = 335,
  [SMALL_STATE(25)] = 351,
  [SMALL_STATE(26)] = 365,
  [SMALL_STATE(27)] = 381,
  [SMALL_STATE(28)] = 392,
  [SMALL_STATE(29)] = 403,
  [SMALL_STATE(30)] = 414,
  [SMALL_STATE(31)] = 424,
  [SMALL_STATE(32)] = 434,
  [SMALL_STATE(33)] = 444,
  [SMALL_STATE(34)] = 454,
  [SMALL_STATE(35)] = 464,
  [SMALL_STATE(36)] = 474,
  [SMALL_STATE(37)] = 481,
  [SMALL_STATE(38)] = 488,
  [SMALL_STATE(39)] = 495,
  [SMALL_STATE(40)] = 502,
  [SMALL_STATE(41)] = 509,
  [SMALL_STATE(42)] = 513,
  [SMALL_STATE(43)] = 517,
  [SMALL_STATE(44)] = 521,
  [SMALL_STATE(45)] = 525,
  [SMALL_STATE(46)] = 529,
  [SMALL_STATE(47)] = 533,
  [SMALL_STATE(48)] = 537,
  [SMALL_STATE(49)] = 541,
  [SMALL_STATE(50)] = 545,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(49),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(37),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(38),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(50),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(22),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(27),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat2, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat2, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat2, 2), SHIFT_REPEAT(29),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [163] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
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
