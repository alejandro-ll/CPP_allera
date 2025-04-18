#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int _value;
    static const int _fractionalBits = 8;

public:
    // Canonical form
    Fixed();                                // Constructor por defecto
    Fixed(const Fixed& other);              // Constructor de copia
    Fixed& operator=(const Fixed& other);   // Operador de asignación
    ~Fixed();                               // Destructor

    // Constructores adicionales
    Fixed(const int value);                 // Constructor desde int
    Fixed(const float value);               // Constructor desde float

    // Métodos de conversión
    float toFloat(void) const;
    int toInt(void) const;

    // Getters/Setters
    int getRawBits(void) const;
    void setRawBits(int const raw);

    // Operadores de comparación
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    // Operadores aritméticos
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    // Operadores de incremento y decremento
    Fixed& operator++();      // pre-incremento
    Fixed operator++(int);    // post-incremento
    Fixed& operator--();      // pre-decremento
    Fixed operator--(int);    // post-decremento

    // Funciones min y max
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};

// Sobrecarga del operador de salida <<
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
