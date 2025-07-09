#include "Zombie.hpp"

#include <iostream>
#include <string>

Zombie::Zombie(void) {}

Zombie::~Zombie(void) {
  std::cout << "Zombie " << name_ << " has been destroyed!" << std::endl;
}

void Zombie::setName(std::string name) { name_ = name; }

void Zombie::announce(void) {
  std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
