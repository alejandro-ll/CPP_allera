#include "Zombie.hpp"
#include <iostream>

std::string _name;

Zombie::Zombie(std::string name){
    this->_name = name;
}
void Zombie::announce(){
    std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}  
Zombie::~Zombie(){
    std::cout << "<" << this->_name << "> is dead" << std::endl;
}