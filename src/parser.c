#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_SLASH_SLASH = 2,
  aux_sym_line_comment_token1 = 3,
  anon_sym_SLASH_STAR = 4,
  anon_sym_STAR_SLASH = 5,
  anon_sym_var = 6,
  anon_sym_EQ = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  sym_num = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_string_token1 = 12,
  sym_source_file = 13,
  sym_comment = 14,
  sym_line_comment = 15,
  sym_block_comment = 16,
  sym_value = 17,
  sym_statement = 18,
  sym_bool = 19,
  sym_string = 20,
  aux_sym_source_file_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_var] = "var",
  [anon_sym_EQ] = "=",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_num] = "num",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_value] = "value",
  [sym_statement] = "statement",
  [sym_bool] = "bool",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_num] = sym_num,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_value] = sym_value,
  [sym_statement] = sym_statement,
  [sym_bool] = sym_bool,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
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
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(15);
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
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(15);
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(14),
    [sym_comment] = STATE(3),
    [sym_line_comment] = STATE(7),
    [sym_block_comment] = STATE(7),
    [sym_value] = STATE(4),
    [sym_statement] = STATE(3),
    [sym_bool] = STATE(6),
    [sym_string] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [anon_sym_var] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [sym_num] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
  },
  [2] = {
    [sym_comment] = STATE(2),
    [sym_line_comment] = STATE(7),
    [sym_block_comment] = STATE(7),
    [sym_value] = STATE(4),
    [sym_statement] = STATE(2),
    [sym_bool] = STATE(6),
    [sym_string] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_SLASH_SLASH] = ACTIONS(19),
    [anon_sym_SLASH_STAR] = ACTIONS(22),
    [anon_sym_var] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(28),
    [anon_sym_false] = ACTIONS(28),
    [sym_num] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(34),
  },
  [3] = {
    [sym_comment] = STATE(2),
    [sym_line_comment] = STATE(7),
    [sym_block_comment] = STATE(7),
    [sym_value] = STATE(4),
    [sym_statement] = STATE(2),
    [sym_bool] = STATE(6),
    [sym_string] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [anon_sym_var] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [sym_num] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(39), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [11] = 1,
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [22] = 1,
    ACTIONS(43), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [33] = 1,
    ACTIONS(45), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [44] = 1,
    ACTIONS(47), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [55] = 1,
    ACTIONS(49), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [66] = 1,
    ACTIONS(51), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [77] = 1,
    ACTIONS(53), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_var,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_DQUOTE,
  [88] = 5,
    ACTIONS(13), 1,
      sym_num,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_value,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_bool,
      sym_string,
  [106] = 1,
    ACTIONS(55), 1,
      aux_sym_string_token1,
  [110] = 1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
  [114] = 1,
    ACTIONS(59), 1,
      aux_sym_line_comment_token1,
  [118] = 1,
    ACTIONS(61), 1,
      sym_identifier,
  [122] = 1,
    ACTIONS(63), 1,
      anon_sym_STAR_SLASH,
  [126] = 1,
    ACTIONS(65), 1,
      anon_sym_EQ,
  [130] = 1,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
  [134] = 1,
    ACTIONS(69), 1,
      aux_sym_line_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 11,
  [SMALL_STATE(6)] = 22,
  [SMALL_STATE(7)] = 33,
  [SMALL_STATE(8)] = 44,
  [SMALL_STATE(9)] = 55,
  [SMALL_STATE(10)] = 66,
  [SMALL_STATE(11)] = 77,
  [SMALL_STATE(12)] = 88,
  [SMALL_STATE(13)] = 106,
  [SMALL_STATE(14)] = 110,
  [SMALL_STATE(15)] = 114,
  [SMALL_STATE(16)] = 118,
  [SMALL_STATE(17)] = 122,
  [SMALL_STATE(18)] = 126,
  [SMALL_STATE(19)] = 130,
  [SMALL_STATE(20)] = 134,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [57] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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
