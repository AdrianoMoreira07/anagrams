/**
 * Universidad de La Laguna; Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática (1º)
 * 
 * @author Adriano dos Santos Moreira <adriano.moreira.07@ull.edu.es> 
 * @brief Shows name anagrams for your name or word
 */

#include <string>
#include <fstream>
#include <iostream>
#include "anagrams_functions.h"

int main(int argc, char* argv[]) {
  Start(argc, argv);
  const std::string kInputArgument{argv[1]};
  std::ifstream input_file{kInputArgument};
  const std::string kName{argv[2]};
  std::string current_line;
  bool was_anagram{false};

  while (input_file) {
    getline(input_file, current_line);
    if (current_line == "") {
      continue;
    }
    if (IsAnagram(Lowercase(kName), Lowercase(current_line))) {
      std::cout << current_line << std::endl;
      was_anagram = true;
    }
  }
  if (was_anagram == false) {
    std::cout << "No anagrams found." << std::endl;
  }
  
  return 0;
}