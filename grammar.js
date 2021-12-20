module.exports = grammar({
  name: "wren",

  externals: ($) => [
    $.newline,
  ],
  word: ($) => $.identifier,

  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $.comment,
          $.statement,
          $.block,
        ),
      ),

    comment: ($) => choice($.line_comment, $.block_comment),
    line_comment: (_$) => seq("//", /.*/),
    block_comment: (_$) => seq("/*", /.*/s, "*/"),

    block: ($) => seq("{", repeat($.statement), "}"),

    value: ($) =>
      choice(
        $.bool,
        $.num,
        $.string,
      ),

    statement: ($) =>
      choice(
        $.value,
        seq("var", $.identifier, "=", $.value),
      ),
    identifier: (_$) => /[a-z_]+/,
    bool: (_$) => choice("true", "false"),
    num: (_$) => /[0-9]+/,
    string: (_$) => seq('"', /[^"]+/, '"'),
  },
});
