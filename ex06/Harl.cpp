#include "Harl.hpp"

#include <iostream>
#include <string>

void Harl::complain(std::string level) {
  std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  int i = 0;

  while (i < 4) {
    if (levels[i] == level) {
      break;
    }
    i++;
  }

  switch (i) {
  case 0:
    this->debug();
    // fall through
  case 1:
    this->info();
    // fall through
  case 2:
    this->warning();
    // fall through
  case 3:
    this->error();
    break;
  default:
    std::cout << "[ Probably complaining about insignificant problems ]"
              << std::endl;
    break;
  }
}

void Harl::debug(void) { std::cout << "[ DEBUG ]" << std::endl; }

void Harl::info(void) { std::cout << "[ INFO ]" << std::endl; }

void Harl::warning(void) { std::cout << "[ WARNING ]" << std::endl; }

void Harl::error(void) { std::cout << "[ ERROR ]" << std::endl; }
