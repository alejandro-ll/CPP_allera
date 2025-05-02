#include "ClapTrap.hpp"

int main() {
    ClapTrap a("Alexito");
    ClapTrap b("Botin");

    a.attack("Botin");
    b.takeDamage(4);

    b.attack("Alexito");
    a.takeDamage(2);

    b.beRepaired(3);
    a.beRepaired(1);

    return 0;
}
