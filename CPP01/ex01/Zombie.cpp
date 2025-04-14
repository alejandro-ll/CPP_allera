#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {
    std::cout << _name << " has been destroyed." << std::endl;
}

void Zombie::setName(std::string name) {
    this->_name = name;
}

void Zombie::announce() {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
