#include <iostream>

/*
Your program should then convert the amount 
entered by the user and display the total amount of USD.
*/


int main() {
  double pesos, reais, soles;
  double dollars;
  std::cout <<"Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cout <<"Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout <<"Enter number of Peruvian Soles: ";
  std::cin >> soles;
  /*
  from Pesos to USD: 0.048;
  from Reais to USD: 0.18;
  from Soles to USD: 0.24;
  */
  dollars = (0.048 * pesos) + (0.18 * reais) + (0.24 * soles);
  std::cout << "US Dollars = $" << dollars;

}