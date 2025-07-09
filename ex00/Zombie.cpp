#include "Zombie.hpp"

#include <string>
#include <iostream>

Zombie::Zombie(std::string name)
{
	this->name_ = name;
	std::cout << "Zombie " << this->name_ << " has been created!" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->name_ << " has been destroyed!" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}