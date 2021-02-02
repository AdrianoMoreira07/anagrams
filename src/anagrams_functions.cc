/**
 * Universidad de La Laguna; Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática (1º)
 * 
 * @author Adriano dos Santos Moreira <adriano.moreira.07@ull.edu.es> 
 * @brief Functions for anagrams.cc
 */

#include <string>
#include <algorithm>
#include <iostream>
#include "anagrams_functions.h"

/**
 * Shows error messages and help
 * @param argc Number of parameters
 * @param argv Parameters
 */
void Start(int argc, char* argv[]) {
  const std::string kHelp {
    "This is a simple bored-afternoon project which can find\n"
    "name anagrams for your name or word.\n"
    "You just have to feed it with a list of names and execute it\n"
    "with a name, something like: $ ./anagrams names.txt juan\n\n"

    "It is very likely that your name does not have any anagram, these are\n"
    "a few that work pretty well: Adriano, Amelia, Daniel, Sora.\n\n"

    "As I said earlier, you can also provide a word that is not a name\n"
    "or even a disordered name (i. e. 'nuaj' instead of 'juan')."
  };
  const std::string kBadEntry {
    "Anagrams\n"
    "Usage: ./anagrams names.txt juan\n"
    "Try ./anagrams --help if you need more information."
  };
  if (argc != 3) {
    if (argc == 2) {
      std::string query{argv[1]};
      if (query == "--help") {
        std::cout << kHelp << std::endl;
        exit(EXIT_SUCCESS);
      }
    }
    std::cout << kBadEntry << std::endl;
    exit(EXIT_SUCCESS);
  }
}

/**
 * Checks if two words are anagrams
 * @param word1
 * @param word2
 * @return whether they are anagrams (1) or not (0)
 */
bool IsAnagram(const std::string& word1, const std::string& word2) {
  if (word1.size() != word2.size() || word1 == word2) {
    return false;
  }
  for (auto i: word1) {
    if (std::count(word1.begin(), word1.end(), i) != 
        std::count(word2.begin(), word2.end(), i)) {
      return false;
    }
  }
  return true;
}

/// Returns lowercase string
std::string Lowercase(const std::string& word) {
  std::string final_word{""};
  for (auto i: word) {
    final_word += tolower(i);
  }
  return final_word;
}