
// Generated from .\PuLang.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "PuLangParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by PuLangParser.
 */
class  PuLangVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PuLangParser.
   */
    virtual antlrcpp::Any visitLiteralValue(PuLangParser::LiteralValueContext *context) = 0;

    virtual antlrcpp::Any visitExpression(PuLangParser::ExpressionContext *context) = 0;


};

