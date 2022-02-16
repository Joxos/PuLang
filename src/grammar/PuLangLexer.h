
// Generated from .\PuLang.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  PuLangLexer : public antlr4::Lexer {
public:
  enum {
    UNDERLINE = 1, COLON = 2, SEMI_COLON = 3, QUOTE = 4, COMMA = 5, OPEN_PAREN = 6, 
    CLOSE_PAREN = 7, OPEN_BRACE = 8, CLOSE_BRACE = 9, ARROW = 10, EQ = 11, 
    EQUAL = 12, NOT_EQ = 13, GREATER_THAN = 14, LESS_THAN = 15, MINUS = 16, 
    DOT = 17, POWER = 18, STAR = 19, DIV = 20, MOD = 21, ADD = 22, AND = 23, 
    OR = 24, Comment = 25, WS = 26, Id = 27, String = 28, Integer = 29, 
    Decimal = 30
  };

  explicit PuLangLexer(antlr4::CharStream *input);
  ~PuLangLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

