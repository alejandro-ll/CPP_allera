#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
public:
    void setField(int index, const std::string& value);
    std::string getField(int index) const;
    bool isEmpty() const;

    std::string getShortField(int index) const;
    void printFullInfo() const;

private:
    std::string fields[5]; // 0: first name, 1: last name, 2: nickname, 3: phone, 4: secret
};

#endif
