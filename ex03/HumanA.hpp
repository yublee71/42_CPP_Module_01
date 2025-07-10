#include "Weapon.hpp"

#include <string>

class HumanA {
public:
  HumanA(std::string name, Weapon &weapon);
  void attack(void) const;

private:
  std::string name_;
  Weapon &weapon_;
};
