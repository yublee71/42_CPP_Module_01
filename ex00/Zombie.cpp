#include "Zombie.hpp"

#include <iostream>
#include <string>

Zombie::Zombie(std::string name) {
  name_ = name;
  std::cout << "Zombie " << name_ << " has been created!" << std::endl;
}

Zombie::~Zombie(void) {
  std::cout << "Zombie " << name_ << " has been destroyed!" << std::endl;
}

void Zombie::announce(void) {
  std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
