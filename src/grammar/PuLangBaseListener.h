
// Generated from .\PuLang.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "PuLangListener.h"


/**
 * This class provides an empty implementation of PuLangListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  PuLangBaseListener : public PuLangListener {
public:

  virtual void enterLiteralValue(PuLangParser::LiteralValueContext * /*ctx*/) override { }
  virtual void exitLiteralValue(PuLangParser::LiteralValueContext * /*ctx*/) override { }

  virtual void enterExpression(PuLangParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(PuLangParser::ExpressionContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

