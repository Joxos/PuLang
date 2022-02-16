
// Generated from .\PuLang.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "PuLangParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by PuLangParser.
 */
class  PuLangListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterLiteralValue(PuLangParser::LiteralValueContext *ctx) = 0;
  virtual void exitLiteralValue(PuLangParser::LiteralValueContext *ctx) = 0;

  virtual void enterExpression(PuLangParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(PuLangParser::ExpressionContext *ctx) = 0;


};

