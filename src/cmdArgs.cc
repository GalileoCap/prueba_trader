#include "cmdArgs.h"

#include <cxxopts.hpp>
#include <cstdlib>

std::string DataPath, OutPath;
int Interes, Strike;

void printHelp(const cxxopts::Options &options, int status) {
  std::cout << options.help() << std::endl;
  exit(0);
}

void parseArgs(int argc, char** argv) {
  cxxopts::Options options("PruebaTecnica", "");
  options.add_options()
    ("dataPath", "Path al archivo .csv con los datos", cxxopts::value<std::string>())
    ("outPath", "Path directorio donde guardar los gráficos", cxxopts::value<std::string>()->default_value("./"))
    ("interes", "Tasa de interés", cxxopts::value<int>()->default_value("100"))
    ("strike", "Strike", cxxopts::value<int>()->default_value("1033"))
    ("h,help", "Imprime esta ayuda");

  try {
    options.parse_positional({"dataPath"});

    auto result = options.parse(argc, argv);
    if (result.count("help"))
      printHelp(options, 0);

    DataPath = result["dataPath"].as<std::string>();
    OutPath = result["outPath"].as<std::string>();
    Interes = result["interes"].as<int>();
    Strike = result["strike"].as<int>();
  } catch (const cxxopts::exceptions::no_such_option &ex) { // Si se uso una opcion inexistente
    printHelp(options, 1);
  }
}
