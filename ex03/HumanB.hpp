#include "Weapon.hpp"

#include <string>

class HumanB {
public:
  HumanB(std::string name);
  void setWeapon(Weapon &weapon);
  void attack(void) const;

private:
  std::string name_;
  Weapon *weapon_;
};
