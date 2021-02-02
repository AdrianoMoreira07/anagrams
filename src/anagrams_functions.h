/**
 * Universidad de La Laguna; Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática (1º)
 * 
 * @author Adriano dos Santos Moreira <adriano.moreira.07@ull.edu.es> 
 * @brief Header for anagrams_functions.cc
 */
#ifndef ANAGRAMS_FUNCTIONS
#define ANAGRAMS_FUNCTIONS

#include <string>

void Start(int argc, char* argv[]);
bool IsAnagram(const std::string& word1, const std::string& word2);
std::string Lowercase(const std::string& word);

#endif
