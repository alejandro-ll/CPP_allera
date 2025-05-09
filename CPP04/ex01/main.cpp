#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <vector>

int main()
{
    // in your main function, create and fill an array of Animal objects. Half of it will
    // be Dog objects and the other half will be Cat objects. At the end of your program
    // execution, loop over this array and delete every Animal. You must delete directly dogs
    // and cats as Animals. The appropriate destructors must be called in the expected order

    // Create an array of Animal pointers
    std::vector<AAnimal*> animals;


    // Fill the array with Dog and Cat objects 4 in total
    for (int i = 0; i < 2; ++i) {
        animals.push_back(new Dog());
        animals.push_back(new Cat());
    }

    // Loop over the array and call makeSound() on each Animal
    for (size_t i = 0; i < animals.size(); ++i) {
        animals[i]->makeSound();
    }

    // Loop over the array and delete every Animal
    for (size_t i = 0; i < animals.size(); ++i) {
        delete animals[i];
    }

    // Clear the vector
    animals.clear();

    std::cout << "---- Deep copy test ----" << std::endl;
    Cat original;
    original.getBrain()->setIdea(0, "Chase a laser");
    Cat copy = original;

    std::cout << "Original idea: " << original.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy idea:     " << copy.getBrain()->getIdea(0) << std::endl;

    original.getBrain()->setIdea(0, "Nap on the keyboard");

    std::cout << "Modified original idea: " << original.getBrain()->getIdea(0) << std::endl;
    std::cout << "Unchanged copy idea:    " << copy.getBrain()->getIdea(0) << std::endl;

    return 0;
}