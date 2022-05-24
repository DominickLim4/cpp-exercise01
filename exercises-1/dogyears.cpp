#include <string>
#include <iostream>
using namespace std;


int main() {
  string dog;

  //This version of the program is for dogs older than 2 years old.
  //Here is your dog age
  int dog_age = 6;

  int early_years, later_years, human_years;
  early_years = 21;

  //Each following year counts as 4 human years.
  later_years = (dog_age - 2) * 4;

  // Your dog's age in human years
  human_years = early_years + later_years;
  
  std::cout << "Dog name: ";
  std::cin >> dog;
  std::cout << "My name is " << dog << "! Ruff ruff, I am " << human_years << " years old in human years.";
  
}