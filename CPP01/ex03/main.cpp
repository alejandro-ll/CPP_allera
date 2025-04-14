#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int main() {
    {
        Weapon bat("bate de madera");
        HumanA luis("Luis", bat);

        luis.attack();
        bat.setType("bate con clavos");
        luis.attack();
    }

    std::cout << "--------------------" << std::endl;

    {
        Weapon palo("palo oxidado");
        HumanB carla("Carla");

        carla.attack();  // sin arma
        carla.equip(palo);
        carla.attack();

        palo.setType("machete improvisado");
        carla.attack();
    }

    return 0;
}
