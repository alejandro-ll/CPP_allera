#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Usage: ./harlFilter <level>" << std::endl;
        return 1;
    }

    std::string level = argv[1];
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    int levelIndex = -1;

    for (int i = 0; i < 4; ++i) {
        if (levels[i] == level) {
            levelIndex = i;
            break;
        }
    }

    Harl harl;

    switch (levelIndex) {
        case 0:
            harl.complain("DEBUG");
            break;
        case 1:
            harl.complain("INFO");
            break;
        case 2:
            harl.complain("WARNING");
            break;
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }

    return 0;
}
