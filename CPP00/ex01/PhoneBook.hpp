#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
public:
    PhoneBook();

    void addContact();
    void searchContact() const;

private:
    Contact contacts[8];
    int nextIndex;
    int count;

    std::string promptInput(const std::string& fieldName) const;
};

#endif
