
// Generated from .\PuLang.g4 by ANTLR 4.9.2


#include "PuLangListener.h"

#include "PuLangParser.h"


using namespace antlrcpp;
using namespace antlr4;

PuLangParser::PuLangParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

PuLangParser::~PuLangParser() {
  delete _interpreter;
}

std::string PuLangParser::getGrammarFileName() const {
  return "PuLang.g4";
}

const std::vector<std::string>& PuLangParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& PuLangParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- LiteralValueContext ------------------------------------------------------------------

PuLangParser::LiteralValueContext::LiteralValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PuLangParser::LiteralValueContext::String() {
  return getToken(PuLangParser::String, 0);
}

tree::TerminalNode* PuLangParser::LiteralValueContext::Integer() {
  return getToken(PuLangParser::Integer, 0);
}

tree::TerminalNode* PuLangParser::LiteralValueContext::Decimal() {
  return getToken(PuLangParser::Decimal, 0);
}

tree::TerminalNode* PuLangParser::LiteralValueContext::Id() {
  return getToken(PuLangParser::Id, 0);
}


size_t PuLangParser::LiteralValueContext::getRuleIndex() const {
  return PuLangParser::RuleLiteralValue;
}

void PuLangParser::LiteralValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PuLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralValue(this);
}

void PuLangParser::LiteralValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PuLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralValue(this);
}

PuLangParser::LiteralValueContext* PuLangParser::literalValue() {
  LiteralValueContext *_localctx = _tracker.createInstance<LiteralValueContext>(_ctx, getState());
  enterRule(_localctx, 0, PuLangParser::RuleLiteralValue);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(4);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PuLangParser::Id)
      | (1ULL << PuLangParser::String)
      | (1ULL << PuLangParser::Integer)
      | (1ULL << PuLangParser::Decimal))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

PuLangParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PuLangParser::LiteralValueContext* PuLangParser::ExpressionContext::literalValue() {
  return getRuleContext<PuLangParser::LiteralValueContext>(0);
}

std::vector<PuLangParser::ExpressionContext *> PuLangParser::ExpressionContext::expression() {
  return getRuleContexts<PuLangParser::ExpressionContext>();
}

PuLangParser::ExpressionContext* PuLangParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<PuLangParser::ExpressionContext>(i);
}

tree::TerminalNode* PuLangParser::ExpressionContext::POWER() {
  return getToken(PuLangParser::POWER, 0);
}

tree::TerminalNode* PuLangParser::ExpressionContext::STAR() {
  return getToken(PuLangParser::STAR, 0);
}

tree::TerminalNode* PuLangParser::ExpressionContext::DIV() {
  return getToken(PuLangParser::DIV, 0);
}

tree::TerminalNode* PuLangParser::ExpressionContext::MOD() {
  return getToken(PuLangParser::MOD, 0);
}

tree::TerminalNode* PuLangParser::ExpressionContext::ADD() {
  return getToken(PuLangParser::ADD, 0);
}

tree::TerminalNode* PuLangParser::ExpressionContext::MINUS() {
  return getToken(PuLangParser::MINUS, 0);
}

tree::TerminalNode* PuLangParser::ExpressionContext::EQUAL() {
  return getToken(PuLangParser::EQUAL, 0);
}

tree::TerminalNode* PuLangParser::ExpressionContext::NOT_EQ() {
  return getToken(PuLangParser::NOT_EQ, 0);
}

tree::TerminalNode* PuLangParser::ExpressionContext::GREATER_THAN() {
  return getToken(PuLangParser::GREATER_THAN, 0);
}

tree::TerminalNode* PuLangParser::ExpressionContext::LESS_THAN() {
  return getToken(PuLangParser::LESS_THAN, 0);
}

tree::TerminalNode* PuLangParser::ExpressionContext::AND() {
  return getToken(PuLangParser::AND, 0);
}

tree::TerminalNode* PuLangParser::ExpressionContext::OR() {
  return getToken(PuLangParser::OR, 0);
}


size_t PuLangParser::ExpressionContext::getRuleIndex() const {
  return PuLangParser::RuleExpression;
}

void PuLangParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PuLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void PuLangParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PuLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


PuLangParser::ExpressionContext* PuLangParser::expression() {
   return expression(0);
}

PuLangParser::ExpressionContext* PuLangParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PuLangParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  PuLangParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, PuLangParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(7);
    literalValue();
    _ctx->stop = _input->LT(-1);
    setState(29);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(27);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(9);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(10);
          match(PuLangParser::POWER);
          setState(11);
          expression(7);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(12);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(13);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << PuLangParser::STAR)
            | (1ULL << PuLangParser::DIV)
            | (1ULL << PuLangParser::MOD))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(14);
          expression(6);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(15);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(16);
          _la = _input->LA(1);
          if (!(_la == PuLangParser::MINUS

          || _la == PuLangParser::ADD)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(17);
          expression(5);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(18);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(19);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << PuLangParser::EQUAL)
            | (1ULL << PuLangParser::NOT_EQ)
            | (1ULL << PuLangParser::GREATER_THAN)
            | (1ULL << PuLangParser::LESS_THAN))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(20);
          expression(4);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(21);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(22);
          match(PuLangParser::AND);
          setState(23);
          expression(3);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(24);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(25);
          match(PuLangParser::OR);
          setState(26);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(31);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool PuLangParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool PuLangParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);
    case 3: return precpred(_ctx, 3);
    case 4: return precpred(_ctx, 2);
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> PuLangParser::_decisionToDFA;
atn::PredictionContextCache PuLangParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN PuLangParser::_atn;
std::vector<uint16_t> PuLangParser::_serializedATN;

std::vector<std::string> PuLangParser::_ruleNames = {
  "literalValue", "expression"
};

std::vector<std::string> PuLangParser::_literalNames = {
  "", "'_'", "':'", "';'", "'\"'", "','", "'('", "')'", "'{'", "'}'", "'->'", 
  "'='", "'=='", "'!='", "'>'", "'<'", "'-'", "'.'", "'**'", "'*'", "'/'", 
  "'%'", "'+'", "'and'", "'or'"
};

std::vector<std::string> PuLangParser::_symbolicNames = {
  "", "UNDERLINE", "COLON", "SEMI_COLON", "QUOTE", "COMMA", "OPEN_PAREN", 
  "CLOSE_PAREN", "OPEN_BRACE", "CLOSE_BRACE", "ARROW", "EQ", "EQUAL", "NOT_EQ", 
  "GREATER_THAN", "LESS_THAN", "MINUS", "DOT", "POWER", "STAR", "DIV", "MOD", 
  "ADD", "AND", "OR", "Comment", "WS", "Id", "String", "Integer", "Decimal"
};

dfa::Vocabulary PuLangParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> PuLangParser::_tokenNames;

PuLangParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x20, 0x23, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x3, 0x2, 
       0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x1e, 0xa, 0x3, 0xc, 0x3, 0xe, 
       0x3, 0x21, 0xb, 0x3, 0x3, 0x3, 0x2, 0x3, 0x4, 0x4, 0x2, 0x4, 0x2, 
       0x6, 0x3, 0x2, 0x1d, 0x20, 0x3, 0x2, 0x15, 0x17, 0x4, 0x2, 0x12, 
       0x12, 0x18, 0x18, 0x3, 0x2, 0xe, 0x11, 0x2, 0x26, 0x2, 0x6, 0x3, 
       0x2, 0x2, 0x2, 0x4, 0x8, 0x3, 0x2, 0x2, 0x2, 0x6, 0x7, 0x9, 0x2, 
       0x2, 0x2, 0x7, 0x3, 0x3, 0x2, 0x2, 0x2, 0x8, 0x9, 0x8, 0x3, 0x1, 
       0x2, 0x9, 0xa, 0x5, 0x2, 0x2, 0x2, 0xa, 0x1f, 0x3, 0x2, 0x2, 0x2, 
       0xb, 0xc, 0xc, 0x8, 0x2, 0x2, 0xc, 0xd, 0x7, 0x14, 0x2, 0x2, 0xd, 
       0x1e, 0x5, 0x4, 0x3, 0x9, 0xe, 0xf, 0xc, 0x7, 0x2, 0x2, 0xf, 0x10, 
       0x9, 0x3, 0x2, 0x2, 0x10, 0x1e, 0x5, 0x4, 0x3, 0x8, 0x11, 0x12, 0xc, 
       0x6, 0x2, 0x2, 0x12, 0x13, 0x9, 0x4, 0x2, 0x2, 0x13, 0x1e, 0x5, 0x4, 
       0x3, 0x7, 0x14, 0x15, 0xc, 0x5, 0x2, 0x2, 0x15, 0x16, 0x9, 0x5, 0x2, 
       0x2, 0x16, 0x1e, 0x5, 0x4, 0x3, 0x6, 0x17, 0x18, 0xc, 0x4, 0x2, 0x2, 
       0x18, 0x19, 0x7, 0x19, 0x2, 0x2, 0x19, 0x1e, 0x5, 0x4, 0x3, 0x5, 
       0x1a, 0x1b, 0xc, 0x3, 0x2, 0x2, 0x1b, 0x1c, 0x7, 0x1a, 0x2, 0x2, 
       0x1c, 0x1e, 0x5, 0x4, 0x3, 0x4, 0x1d, 0xb, 0x3, 0x2, 0x2, 0x2, 0x1d, 
       0xe, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x11, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x14, 
       0x3, 0x2, 0x2, 0x2, 0x1d, 0x17, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1a, 0x3, 
       0x2, 0x2, 0x2, 0x1e, 0x21, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x1d, 0x3, 0x2, 
       0x2, 0x2, 0x1f, 0x20, 0x3, 0x2, 0x2, 0x2, 0x20, 0x5, 0x3, 0x2, 0x2, 
       0x2, 0x21, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x4, 0x1d, 0x1f, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

PuLangParser::Initializer PuLangParser::_init;
