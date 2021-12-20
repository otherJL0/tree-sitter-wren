#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
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
  anon_sym_true = 10,
  anon_sym_false = 11,
  sym_num = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_string_token1 = 14,
  sym_newline = 15,
  sym_source_file = 16,
  sym_comment = 17,
  sym_line_comment = 18,
  sym_block_comment = 19,
  sym_block = 20,
  sym_value = 21,
  sym_statement = 22,
  sym_bool = 23,
  sym_string = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym_block_repeat1 = 26,
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
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_num] = "num",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_newline] = "newline",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_block] = "block",
  [sym_value] = "value",
  [sym_statement] = "statement",
  [sym_bool] = "bool",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_num] = sym_num,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_newline] = sym_newline,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_block] = sym_block,
  [sym_value] = sym_value,
  [sym_statement] = sym_statement,
  [sym_bool] = sym_bool,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
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
  [sym_value] = {
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
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(17);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(17);
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
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
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
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 6},
};

enum {
  ts_external_token_newline = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_newline] = sym_newline,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_newline] = true,
  },
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
    [sym_newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(19),
    [sym_comment] = STATE(2),
    [sym_line_comment] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym_block] = STATE(2),
    [sym_value] = STATE(8),
    [sym_statement] = STATE(2),
    [sym_bool] = STATE(9),
    [sym_string] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(2),
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
    [sym_comment] = STATE(3),
    [sym_line_comment] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym_block] = STATE(3),
    [sym_value] = STATE(8),
    [sym_statement] = STATE(3),
    [sym_bool] = STATE(9),
    [sym_string] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_num] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
  },
  [3] = {
    [sym_comment] = STATE(3),
    [sym_line_comment] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym_block] = STATE(3),
    [sym_value] = STATE(8),
    [sym_statement] = STATE(3),
    [sym_bool] = STATE(9),
    [sym_string] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_STAR] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_var] = ACTIONS(32),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_num] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    ACTIONS(46), 1,
      anon_sym_var,
    ACTIONS(52), 1,
      sym_num,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_value,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(9), 2,
      sym_bool,
      sym_string,
  [28] = 8,
    ACTIONS(11), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      sym_num,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_value,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(9), 2,
      sym_bool,
      sym_string,
  [56] = 8,
    ACTIONS(11), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      sym_num,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_value,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(9), 2,
      sym_bool,
      sym_string,
  [84] = 1,
    ACTIONS(62), 10,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [97] = 1,
    ACTIONS(64), 10,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [110] = 1,
    ACTIONS(66), 10,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [123] = 1,
    ACTIONS(68), 10,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [136] = 1,
    ACTIONS(70), 10,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [149] = 1,
    ACTIONS(72), 9,
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
    ACTIONS(74), 9,
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
  [185] = 1,
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
  [197] = 1,
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
  [209] = 5,
    ACTIONS(15), 1,
      sym_num,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_value,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 2,
      sym_bool,
      sym_string,
  [227] = 1,
    ACTIONS(82), 1,
      aux_sym_string_token1,
  [231] = 1,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
  [235] = 1,
    ACTIONS(86), 1,
      aux_sym_line_comment_token1,
  [239] = 1,
    ACTIONS(88), 1,
      anon_sym_STAR_SLASH,
  [243] = 1,
    ACTIONS(90), 1,
      anon_sym_EQ,
  [247] = 1,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
  [251] = 1,
    ACTIONS(94), 1,
      sym_identifier,
  [255] = 1,
    ACTIONS(96), 1,
      aux_sym_line_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 28,
  [SMALL_STATE(6)] = 56,
  [SMALL_STATE(7)] = 84,
  [SMALL_STATE(8)] = 97,
  [SMALL_STATE(9)] = 110,
  [SMALL_STATE(10)] = 123,
  [SMALL_STATE(11)] = 136,
  [SMALL_STATE(12)] = 149,
  [SMALL_STATE(13)] = 161,
  [SMALL_STATE(14)] = 173,
  [SMALL_STATE(15)] = 185,
  [SMALL_STATE(16)] = 197,
  [SMALL_STATE(17)] = 209,
  [SMALL_STATE(18)] = 227,
  [SMALL_STATE(19)] = 231,
  [SMALL_STATE(20)] = 235,
  [SMALL_STATE(21)] = 239,
  [SMALL_STATE(22)] = 243,
  [SMALL_STATE(23)] = 247,
  [SMALL_STATE(24)] = 251,
  [SMALL_STATE(25)] = 255,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(24),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [84] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_wren_external_scanner_create(void);
void tree_sitter_wren_external_scanner_destroy(void *);
bool tree_sitter_wren_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_wren_external_scanner_serialize(void *, char *);
void tree_sitter_wren_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_wren_external_scanner_create,
      tree_sitter_wren_external_scanner_destroy,
      tree_sitter_wren_external_scanner_scan,
      tree_sitter_wren_external_scanner_serialize,
      tree_sitter_wren_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
