#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->name << " has been destroyed!" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}