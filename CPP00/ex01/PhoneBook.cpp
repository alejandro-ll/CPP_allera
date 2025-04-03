#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook() : nextIndex(0), count(0) {}

std::string PhoneBook::promptInput(const std::string& fieldName) const {
    std::string input;
    while (true) {
        std::cout << fieldName << ": ";
        std::getline(std::cin, input);
        if (!input.empty())
            break;
        std::cout << "Field cannot be empty!" << std::endl;
    }
    return input;
}

bool isNumber(const std::string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (!isdigit(str[i]))
            return false;
    }
    return true;
}

void PhoneBook::addContact() {
    Contact contact;
    contact.setField(0, promptInput("First name"));
    contact.setField(1, promptInput("Last name"));
    contact.setField(2, promptInput("Nickname"));
    contact.setField(3, promptInput("Phone number"));
    contact.setField(4, promptInput("Darkest secret"));

    contacts[nextIndex] = contact;
    nextIndex = (nextIndex + 1) % 8;
    if (count < 8)
        count++;

    std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::searchContact() const {
    if (count == 0) {
        std::cout << "Phonebook is empty." << std::endl;
        return;
    }

    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < count; i++) {
        std::cout << std::setw(10) << i << "|"
                  << contacts[i].getShortField(0) << "|"
                  << contacts[i].getShortField(1) << "|"
                  << contacts[i].getShortField(2) << std::endl;
    }

    std::cout << "Enter index: ";
    std::string input;
    std::getline(std::cin, input);

    if (!isNumber(input)) {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    int index = atoi(input.c_str());

    if (index < 0 || index >= count) {
        std::cout << "Invalid index." << std::endl;
        return;
    }

    contacts[index].printFullInfo();
}
