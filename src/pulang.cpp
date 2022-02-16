// standard
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

// antlr4
#include "PuLangLexer.h"
#include "PuLangParser.h"
#include "antlr4-runtime.h"

// clipp
#include "clipp/clipp.h"

// spdlog
#include "spdlog/common.h"
#include "spdlog/spdlog.h"

using namespace std;

// arguments
vector<string> input;
string output = "./";

// function head
bool compile(void);

int main(int argc, char *argv[]) {
  using namespace clipp;

// set log level
#define DEBUG
#ifdef DEBUG
  spdlog::warn("DEBUG LEVEL");
  spdlog::set_level(spdlog::level::debug);
#endif
#ifdef RELEASE
  spdlog::set_level(spdlog::level::err);
#endif

  // command line parser
  spdlog::debug("init command line parser");
  // define modes
  enum class mode { compile, help };
  mode selected = mode::help;

  // compileMode
  spdlog::debug("init compileMode");
  auto compileMode =
      (command("compile")
           .set(selected, mode::compile)
           .doc("compile some files"),
       values("files", input).doc("files to compile"),
       option("-o", "-output") & value("path", output).doc("output directory"));

  // helpMode
  spdlog::debug("init helpMode");
  auto helpMode = (command("help").set(selected, mode::help));

  // cli parser
  spdlog::debug("init cli");
  auto cli =
      ((compileMode | helpMode), option("-v", "-version")
                                     .call([] {
                                       spdlog::info("PuLang version 1.0");
                                       exit(0);
                                     })
                                     .doc("show version and exit."));

  // do parse job
  spdlog::debug("parse command line");
  parse(argc, argv, cli);

  // switch to different modes
  spdlog::debug("switch select");
  switch (selected) {
  case mode::compile:
    spdlog::debug("enter compile");
    if (!compile()) {
      spdlog::critical("exit with exception");
      return -1;
    }
    return 0;
  case mode::help:
    spdlog::debug("enter help");
    cout << make_man_page(cli, "pulang");
    return 0;
  }
  spdlog::debug("final exit");
  return 0;
}

bool compile(void) {
  using namespace antlr4;
  using namespace antlrcpp;
  if (input.size() == 0) {
    spdlog::error("no input file");
    return false;
  }
  for (string i : input) {
    spdlog::debug("with input file {}", i);
  }
  spdlog::debug("with output path {}", output);
  ifstream fin(input[0]);
  if (!fin) {
    spdlog::error("cannot open file");
    return false;
  }
  string content, buf;
  while (getline(fin, buf)) {
    spdlog::debug("get content: {}", buf);
    content += buf;
  }
  spdlog::debug("content:\n{}", content);
  fin.close();
  ANTLRInputStream input(content);
  PuLangLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  PuLangParser parser(&tokens);
  tree::ParseTree *tree = parser.expression();

  wstring s = s2ws(tree->toStringTree(&parser)) + L"\n";

  wcout << "Parse Tree: " << s << std::endl;
  return true;
}
