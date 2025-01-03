l/**
 * @file mul grammar for tree-sitter
 * @author None <hpp2334@outlook.com>
 * @license Apache License 2.0
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'mul',

  precedences: $ => [
    ['component_plain_expression', 'lambda'],
    ['struct_decl', 'component_decl', 'event_decl'],
  ],

  rules: {
    source_file: $ => repeat($._declaration),
    _declaration: $ => choice(
      $.struct_declaration,
      $.component_declaration,
      $.event_declaration,
      $.component_implementation
    ),
    struct_declaration: $ => seq(
      'struct',
      field('name', $.identifier),
      optional($.type_parameters),
      '{',
      repeat($.struct_field),
      '}'
    ),
    struct_field: $ => seq(
      repeat($.struct_field_annotation),
      field('name', $.identifier),
      ':',
      field('type', $._type),
      optional(',')
    ),

    struct_field_annotation: $ => choice(
      $.struct_field_child_annotation
    ),

    struct_field_child_annotation: $ => '@child',
    component_declaration: $ => seq(
      'declare',
      'components',
      field('name', $.identifier),
      '(',
      field('props_type', $._type),
      ')'
    ),
    event_declaration: $ => seq(
      'event',
      field('name', $.identifier),
      '{',
      repeat($.event_field),
      '}'
    ),

    event_field: $ => seq(
      field('name', $.identifier),
      ':',
      field('type', $._type),
      optional(',')
    ),
    component_implementation: $ => seq(
      'components',
      field('name', $.identifier),
      '(',
      field('props_type', $._type),
      ')',
      field('body', $.component_body)
    ),
    _type: $ => choice(
      $.primitive_type,
      $.array_type,
      $.custom_type,
      $.function_type,
    ),

    primitive_type: $ => choice(
      'string',
      'bool',
      'widget',
      'void'
    ),

    array_type: $ => seq(
      '[',
      field('element_type', $._type),
      ']'
    ),

    custom_type: $ => $.identifier,

    function_type: $ => seq(
      '(',
      field('arguments', sepBy1(',', $._type)),
      ')',
      '->',
      field('return', $._type),
    ),

    type_parameters: $ => seq(
      '<',
      sepBy1(',', $.identifier),
      '>'
    ),
    component_body: $ => seq(
      '{',
      repeat($._component_expression),
      '}'
    ),

    _component_expression: $ => choice(
      $.component_plain_expression,
      $.lambda_expression
    ),
    component_plain_expression: $ => prec.left(seq(
      field('name', $.identifier),
      field('argument', optional(seq(
        '(',
        choice(
          repeat($.named_argument),
          $.identifier,
        ),
        ')',
      ))),
      optional($.component_body)
    )),
    named_argument: $ => seq(
      field('name', $.identifier),
      '=',
      field('value', $._expression)
    ),
    lambda_expression: $ => seq(
      sepBy(',', field('argument', $.identifier)),
      '->',
      field('body', $.component_plain_expression)
    ),
    _expression: $ => choice(
      $.identifier,
      $.member_expression,
      $.string_literal,
      $.boolean_literal
    ),
    member_expression: $ => seq(
      field('object', $.identifier),
      '.',
      field('property', $.identifier)
    ),
    attribute: $ => seq(
      '@',
      $.identifier
    ),
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    string_literal: $ => /"[^"]*"/,
    boolean_literal: $ => choice('true', 'false'),
  },
});

function sepBy1(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)));
}

function sepBy(separator, rule) {
  return optional(sepBy1(separator, rule));
}