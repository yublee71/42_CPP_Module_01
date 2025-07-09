#include "Zombie.hpp"

#include <string>

int main(void) {
  int n = 10;
  std::string name = "Yubeen";

  Zombie *zombie_horde = zombieHorde(n, name);

  for (int i = 0; i < n; i++)
    zombie_horde[i].announce();

  delete[] zombie_horde;
}
