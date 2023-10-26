// Bryan Orozco
// bryancostco@csu.fullerton.edu
// @Bryancostco
// Partners: @jaimegalvan23

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (argc != 4) {
    std::cout << "error: you must supply three arguements";
    return 1;
  }

  std::string protein_input{arguments.at(1)};
  std::string bread_input{arguments.at(2)};
  std::string condiment_input{arguments.at(3)};

  std::cout << "Your order: A " << protein_input << " sandwich on "
            << bread_input << " with " << condiment_input;
  return 0;
}
