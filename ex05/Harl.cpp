#include "Harl.hpp"

#include <iostream>
#include <string>

void Harl::complain(std::string level) {
  void (Harl::*function_ptrs[])(void) = {&Harl::debug, &Harl::info,
                                         &Harl::warning, &Harl::error};
  std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  for (int i = 0; i < 4; i++) {
    if (levels[i] == level) {
      (this->*function_ptrs[i])();
      return;
    }
  }
  std::cout << "[ Probably complaining about insignificant problems ]"
            << std::endl;
}

void Harl::debug(void) { std::cout << "[ DEBUG ]" << std::endl; }

void Harl::info(void) { std::cout << "[ INFO ]" << std::endl; }

void Harl::warning(void) { std::cout << "[ WARNING ]" << std::endl; }

void Harl::error(void) { std::cout << "[ ERROR ]" << std::endl; }
