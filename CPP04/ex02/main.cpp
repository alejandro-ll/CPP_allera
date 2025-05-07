#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Dog* dog = new Dog();
    const Cat* cat = new Cat();

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    dog->makeSound();
    cat->makeSound();

    return 0;
}