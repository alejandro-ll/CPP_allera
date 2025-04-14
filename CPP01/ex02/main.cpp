#include <iostream>
#include <string>

int main() {
    std::string brain = "HI THIS IS BRAIN";

    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

    std::cout << "Dirección de 'brain':     " << &brain << std::endl;
    std::cout << "Dirección de 'stringPTR': " << stringPTR << std::endl;
    std::cout << "Dirección de 'stringREF': " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "Valor de 'brain':         " << brain << std::endl;
    std::cout << "Valor desde 'stringPTR':  " << *stringPTR << std::endl;
    std::cout << "Valor desde 'stringREF':  " << stringREF << std::endl;

    return 0;
}
