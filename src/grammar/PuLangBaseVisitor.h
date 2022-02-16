
// Generated from .\PuLang.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "PuLangVisitor.h"


/**
 * This class provides an empty implementation of PuLangVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  PuLangBaseVisitor : public PuLangVisitor {
public:

  virtual antlrcpp::Any visitLiteralValue(PuLangParser::LiteralValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(PuLangParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }


};

