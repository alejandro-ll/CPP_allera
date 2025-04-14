#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int main() {
    {
        Weapon bat("wooden bat");
        HumanA jim("Jim", bat);

        jim.attack();
        bat.setType("spiked bat");
        jim.attack();
    }

    std::cout << "--------------------" << std::endl;

    {
        Weapon stick("rusty stick");
        HumanB bob("Bob");

        bob.attack();  // sin arma
        bob.equip(stick);
        bob.attack();

        stick.setType("improvised machete");
        bob.attack();
    }

    return 0;
}
