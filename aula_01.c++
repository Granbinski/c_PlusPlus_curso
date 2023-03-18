#include <iostream>
#include <string>

int main() {
  std::string nome;
  std::cout << "Qual é o seu nome? ";
  std::getline(std::cin, nome);
  std::cout << "Olá, " << nome << "!\n";
  return 0;
}
