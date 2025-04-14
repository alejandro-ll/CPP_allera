#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& weapon)
    : _name(name), _weapon(weapon) {}

void HumanA::attack() const {
    std::cout << _name << " lanza un ataque con su " << _weapon.getType() << std::endl;
}
