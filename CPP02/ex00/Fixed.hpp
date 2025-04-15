#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
private:
    int _value;
    static const int _fractionalBits = 8;

public:
    Fixed();                                // constructor por defecto
    Fixed(const Fixed& other);              // constructor de copia
    Fixed& operator=(const Fixed& other);   // operador de asignación
    ~Fixed();                               // destructor

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
