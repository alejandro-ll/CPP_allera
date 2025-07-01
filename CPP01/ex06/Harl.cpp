#include "Harl.hpp"
#include <iostream>

void Harl::debug(void) {
    std::cout << "[ DEBUG ]\nI love having extra bacon...\n" << std::endl;
}
void Harl::info(void) {
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon...\n" << std::endl;
}
void Harl::warning(void) {
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon...\n" << std::endl;
}
void Harl::error(void) {
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain(std::string level) {
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    void (Harl::*actions[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

    for (int i = 0; i < 4; ++i) {
        if (levels[i] == level) {
            for (int j = i; j < 4; ++j)
                (this->*actions[j])();
            return;
        }
    }

    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
