#include "DiamondTrap.hpp"

int main() {
    DiamondTrap d("Alexito");

    d.attack("Training Dummy");
    d.takeDamage(40);
    d.beRepaired(20);
    d.whoAmI();

    return 0;
}
