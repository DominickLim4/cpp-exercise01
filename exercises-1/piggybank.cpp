#include <iostream>

int main() {
  
  double pesos, reais, soles;
  double dollars;

  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  
  // 1 Peso = 0.050$
  // 1 Real = 0.3$
  // 1 Sole = 0.27$

  dollars = 0.050 * pesos + 0.27 * reais + 0.3 * soles;

  std::cout << "US Dollars = $" << dollars;
}