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
  spdlog::set_level(spdlog::level::info);
#endif

  // command line parser
  spdlog::debug("init command line parser");
  // define modes
  enum class mode { compile, help, unselected };
  mode selected = mode::unselected;

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
  auto helpMode = (option("-h", "-help")
                       .set(selected, mode::help)
                       .doc("show help and exit"));

  // versionMode
  spdlog::debug("init versionMode");
  auto versionMode = (option("-v", "-version")
                          .call([] {
                            spdlog::info("PuLang version 1.0");
                            exit(0);
                          })
                          .doc("show version and exit"));

  // cli parser
  spdlog::debug("init cli");
  auto cli = ((compileMode | helpMode | versionMode));

  // do parse job
  spdlog::debug("parse command line");
  parse(argc, argv, cli);

  // switch to a mode
  switch (selected) {
  case mode::unselected:
    spdlog::error("please select a mode");
    spdlog::info("-h for more information");
    exit(0);
  case mode::help:
    spdlog::debug("enter help");
    cout << make_man_page(cli, "pulang");
    exit(0);
  case mode::compile:
    if (!compile()) {
      spdlog::critical("exit with exception");
      exit(-1);
    }
    exit(0);
  }

  // final exit
  spdlog::debug("final exit");
  return 0;
}

// compile worker
bool compile(void) {
  using namespace antlr4;
  using namespace antlrcpp;

  // check the number of input files
  if (input.size() == 0) {
    spdlog::error("no input file");
    return false;
  }

  // debug the files
  for (string i : input) {
    spdlog::debug("with input file {}", i);
  }
  spdlog::debug("with output path {}", output);

  string content, s;
  int compiled_file_count = 0;
  ifstream fin;
  for (string fname : input) {
    // read the file
    spdlog::debug("current file name: {}", fname);
    fin.open(fname);
    if (!fin) {
      spdlog::error("cannot open file: {}", fname);
      continue;
    }
    while (getline(fin, s)) {
      spdlog::debug("get content: {}", s);
      content += s;
    }
    fin.close();

    // parse the file
    ANTLRInputStream input(content);
    PuLangLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    PuLangParser parser(&tokens);
    tree::ParseTree *tree = parser.expression();
    cout << "Parse tree: " << tree->toStringTree(&parser) << endl;
    ++compiled_file_count;
  }
  if (compiled_file_count == 1) {
    spdlog::info("{}/{} file compiled", compiled_file_count, input.size());
  } else {
    spdlog::info("{}/{} files compiled", compiled_file_count, input.size());
  }
  return true;
}
