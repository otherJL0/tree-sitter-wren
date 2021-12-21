module.exports = grammar({
  name: "wren",

  word: ($) => $.identifier,

  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $._comment,
          $._statement,
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
          $._statement,
          seq(
            repeat($._newline),
            repeat(seq($._statement, repeat1($._newline))),
            $._statement,
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

    argument_list: ($) => seq("(", repeat($._expression), ")"),
    method_call: ($) =>
      seq(
        field("receiver", $.identifier),
        ".",
        field("name", $.identifier),
        $.argument_list,
      ),

    _expression: ($) =>
      choice(
        $._value,
        $.identifier,
      ),

    assignment: ($) =>
      seq("var", field("name", $.identifier), "=", field("value", $._value)),

    _statement: ($) =>
      choice(
        $._expression,
        $.assignment,
        $.method_call,
      ),

    _newline: (_$) => /\s*\n/,
    identifier: (_$) => /[A-Za-z_]+/,
    bool: (_$) => choice("true", "false"),
    num: (_$) => /[0-9]+/,
    string: (_$) => seq('"', /[^"]+/, '"'),
  },
});
