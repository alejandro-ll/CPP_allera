#include "Contact.hpp"
#include <iostream>
#include <iomanip>

void Contact::setField(int index, const std::string& value) {
    if (index >= 0 && index < 5)
        fields[index] = value;
}

std::string Contact::getField(int index) const {
    if (index >= 0 && index < 5)
        return fields[index];
    return "";
}

bool Contact::isEmpty() const {
    for (int i = 0; i < 5; i++) {
        if (fields[i].empty())
            return true;
    }
    return false;
}

std::string Contact::getShortField(int index) const {
    std::string field = getField(index);
    if (field.length() > 10)
        return field.substr(0, 9) + ".";
    return std::string(10 - field.length(), ' ') + field;
}

void Contact::printFullInfo() const {
    const char* labels[5] = { "First name", "Last name", "Nickname", "Phone", "Secret" };
    for (int i = 0; i < 5; i++) {
        std::cout << labels[i] << ": " << fields[i] << std::endl;
    }
}
