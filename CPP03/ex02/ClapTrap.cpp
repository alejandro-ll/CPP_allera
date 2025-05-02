#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Default constructor called for ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Parameterized constructor called for ClapTrap: " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    std::cout << "Copy constructor called for ClapTrap" << std::endl;
    *this = other;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called for ClapTrap: " << _name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    std::cout << "Assignment operator called for ClapTrap" << std::endl;
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string &target) {
    if (_hitPoints > 0 && _energyPoints > 0) {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    } else {
        std::cout << "ClapTrap " << _name << " cannot attack! Either out of hit points or energy points." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    _hitPoints -= amount;
    if (_hitPoints < 0)
        _hitPoints = 0;
    std::cout << "ClapTrap " << _name << " takes " << amount << " damage. "
              << "HP left: " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_hitPoints > 0 && _energyPoints > 0) {
        _energyPoints--;
        _hitPoints += amount;
        std::cout << "ClapTrap " << _name << " repairs for " << amount
                  << " HP. Total HP: " << _hitPoints << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << " can't repair (dead or no energy)." << std::endl;
    }
}