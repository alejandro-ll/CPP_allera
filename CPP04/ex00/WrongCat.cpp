#include "WrongCat.hpp"

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "WrongCat constructor called\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    std::cout << "WrongCat copy constructor called\n";
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    std::cout << "WrongCat assignment operator called\n";
    if (this != &other)
        type = other.type;
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called\n";
}

void WrongCat::makeSound() const {
    std::cout << "Miau\n";
}
