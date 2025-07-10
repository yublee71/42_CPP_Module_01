#include "Weapon.hpp"

#include <string>

Weapon::Weapon(std::string type) { type_ = type; }

const std::string &Weapon::getType() const { return (type_); }

void Weapon::setType(std::string new_type) { type_ = new_type; }
