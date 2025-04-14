#include "Zombie.hpp"

int main() {
    int numZombies = 5;
    Zombie* horde = zombieHorde(numZombies, "HordeMember");

    if (horde) {
        for (int i = 0; i < numZombies; i++) {
            horde[i].announce();
        }

        delete[] horde;
    }

    return 0;
}
