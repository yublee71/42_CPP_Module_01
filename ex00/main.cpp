#include "Zombie.hpp"

int main(void)
{
	Zombie *new_zombie = newZombie("Lee");
	new_zombie->announce();
	delete new_zombie;

	randomChump("Park");
}