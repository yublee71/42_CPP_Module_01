#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
public:
  Zombie(std::string name);
  ~Zombie(void);

  void announce(void);

private:
  std::string name_;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
