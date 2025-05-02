#include "ScavTrap.hpp"

int main() {
    ScavTrap scav("Alexito");

    scav.attack("TargetBot");
    scav.takeDamage(20);
    scav.beRepaired(15);
    scav.guardGate();

    return 0;
}
