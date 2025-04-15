#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int _value;
    static const int _fractionalBits = 8;

public:
    // Canonical form
    Fixed();                                // Default constructor
    Fixed(const Fixed& other);              // Copy constructor
    Fixed& operator=(const Fixed& other);   // Copy assignment operator
    ~Fixed();                               // Destructor

    // New constructors
    Fixed(const int value);                 // From int
    Fixed(const float value);               // From float

    // Conversions
    float toFloat(void) const;
    int toInt(void) const;

    // Getters/Setters
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

// Overload <<
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
