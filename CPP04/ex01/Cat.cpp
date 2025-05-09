#include "Cat.hpp"

#include <iostream>
#include <string>

Cat::Cat() {
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : AAnimal(other) {
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = new Brain(*other.brain);
    this->type = other.type;
}

Cat& Cat::operator=(const Cat &other) {
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other) {
        AAnimal::operator=(other);
        type = other.type;
        if (this->brain) {
            delete brain;
        }
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const {
    std::cout << "Meow Meow!" << std::endl;
}