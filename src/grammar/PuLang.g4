// antlr4 ..\PuLang.g4 -o antlr
// D:\Apps\jdk-17.0.2\bin\javac.exe .\*.java
// grun PuLang declVar

// TEST1: 1**2+6*3-7/4%5 == "Hello, world!" or "SPQ" != "PuLang"

grammar PuLang;

// CONST
UNDERLINE: '_';
COLON: ':';
SEMI_COLON: ';';
QUOTE: '"';
COMMA: ',';
OPEN_PAREN: '(';
CLOSE_PAREN: ')';
OPEN_BRACE: '{';
CLOSE_BRACE: '}';
ARROW: '->';
EQ: '=';
EQUAL: '==';
NOT_EQ: '!=';
GREATER_THAN: '>';
LESS_THAN: '<';
MINUS: '-';
DOT: '.';
POWER: '**';
STAR: '*';
DIV: '/';
MOD: '%';
ADD: '+';
AND: 'and';
OR: 'or';

// Lexer
Comment
    : '#' ~[\r\n\f]* -> channel(HIDDEN);
WS
    : [ \r\t\n\f]+ -> channel(HIDDEN);

fragment NonZeroDigit
    : [1-9];
fragment Digit
    : '0'|NonZeroDigit;
fragment Alpha
    : [a-zA-Z];
fragment Char
    : Digit|Alpha;
Id
    : (Alpha|UNDERLINE) (Char|UNDERLINE)*;
String
    : QUOTE ~["\\\r\n]+? QUOTE;
Integer
    : (NonZeroDigit Digit*)|'0';
Decimal
    : Integer DOT Digit* NonZeroDigit;

// parser
literalValue
    : String|Integer|Decimal|Id;
expression
    : literalValue
    | expression POWER expression
    | expression (STAR|DIV|MOD) expression
    | expression (ADD|MINUS) expression
    | expression (EQUAL|NOT_EQ|GREATER_THAN|LESS_THAN) expression
    | expression AND expression
    | expression OR expression
    ;
// statement
//     :
//     ( defineVariable
//     | assignVariable)
//     SEMI_COLON;
// block
//     : defineFunction;

// declareVariable
//     : Id COLON expression;
// defineVariable
//     : declareVariable EQ expression;
// assignVariable
//     : Id EQ expression;
// defineFunction
//     : Id OPEN_PAREN (argument (COMMA argument)*)? CLOSE_PAREN (ARROW expression)? body;

// argument
//     : defineVariable|declareVariable;
// body
//     : OPEN_BRACE (block|statement)* CLOSE_BRACE;
