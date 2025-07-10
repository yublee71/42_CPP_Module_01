#include "HumanA.hpp"

#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon &weapon)
    : name_(name), weapon_(weapon){};

void HumanA::attack(void) const {
  std::cout << name_ << " attacks with their " << weapon_.getType()
            << std::endl;
}
