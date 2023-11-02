// Bryan Orozco
// bryancostco@csu.fullerton.edu
// @Bryancostco
// Partners: @jaimegalvan23cd

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (argc <= 1) {
    std::cerr << "Error: Please provide at least one command line argument."
              << "\n";
    return 1;
  }

  double sum = 0.0;
  int count = 0;

  for (int i = 1; i < argc; ++i) {
    try {
      double num = std::stod(arguments[i]);
      sum += num;
      count++;
    } catch (const std::invalid_argument& e) {
      std::cerr << "Error: Argument '" << arguments[i]
                << "' is not a valid number."
                << "\n";
      return 1;
    }
  }

  if (count == 0) {
    std::cerr << "Error: No valid numbers found in the arguments."
              << "\n";
    return 1;
  }

  double average = sum / count;

  std::cout << "average = " << average << "\n";

  return 0;
}