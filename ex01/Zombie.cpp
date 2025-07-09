#include "Zombie.hpp"

#include <string>
#include <iostream>

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->name_ << " has been destroyed!" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name_ = name;
}

void Zombie::announce(void)
{
	std::cout << this->name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}