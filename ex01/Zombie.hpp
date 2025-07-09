#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
public:
  Zombie(void);
  ~Zombie(void);

  void setName(std::string name);
  void announce(void);

private:
  std::string name_;
};

Zombie *zombieHorde(int N, std::string name);

#endif
