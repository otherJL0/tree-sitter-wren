module.exports = grammar({
  name: "wren",

  word: ($) => $.identifier,

  rules: {
    // source_file: ($) =>
    //   repeat(
    //     choice(
    //       $.comment,
    //       $.statement,
    //       $.block,
    //     ),
    //   ),
    source_file: ($) =>
      repeat(
        choice(
          $.comment,
          $.statement,
        ),
      ),

    comment: ($) => choice($.line_comment, $.block_comment),
    line_comment: (_$) => seq("//", /.*/),
    block_comment: (_$) => seq("/*", /.*/s, "*/"),

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
