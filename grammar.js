module.exports = grammar({
  name: "wren",

  word: ($) => $.identifier,

  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $._comment,
          $.statement,
          $.block,
        ),
      ),

    _comment: ($) => choice($.line_comment, $.block_comment),
    line_comment: (_$) => seq("//", /.*/),
    block_comment: ($) =>
      seq(
        "/*",
        repeat(
          seq(/.*/, repeat($._newline)),
        ),
        "*/",
      ),

    block: ($) =>
      seq(
        "{",
        choice(
          $.statement,
          seq(
            repeat($._newline),
            repeat(seq($.statement, repeat1($._newline))),
            $.statement,
            repeat($._newline),
          ),
        ),
        "}",
      ),

    _value: ($) =>
      choice(
        $.bool,
        $.num,
        $.string,
      ),

    argument_list: ($) => seq("(", ")"),
    method_call: ($) =>
      seq(
        field("receiver", $.identifier),
        ".",
        field("name", $.identifier),
        $.argument_list,
      ),

    statement: ($) =>
      choice(
        $._value,
        seq("var", $.identifier, "=", $._value),
        $.method_call,
      ),

    _newline: (_$) => /\s*\n/,
    identifier: (_$) => /[A-Za-z_]+/,
    bool: (_$) => choice("true", "false"),
    num: (_$) => /[0-9]+/,
    string: (_$) => seq('"', /[^"]+/, '"'),
  },
});
