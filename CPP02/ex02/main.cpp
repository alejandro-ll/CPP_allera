#include <iostream>
#include "Fixed.hpp"

int main(void) {
    // Creación básica
    Fixed a;
    Fixed const b( Fixed(5.05f) * Fixed(2) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max(a, b) << std::endl;

    // --- Extras para probar TODO ---

    Fixed c(10);
    Fixed d(2.5f);

    // Comparaciones
    std::cout << "c > d? " << (c > d) << std::endl;
    std::cout << "c < d? " << (c < d) << std::endl;
    std::cout << "c >= d? " << (c >= d) << std::endl;
    std::cout << "c <= d? " << (c <= d) << std::endl;
    std::cout << "c == d? " << (c == d) << std::endl;
    std::cout << "c != d? " << (c != d) << std::endl;

    // Aritmética
    Fixed sum = c + d;
    Fixed diff = c - d;
    Fixed prod = c * d;
    Fixed div = c / d;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << diff << std::endl;
    std::cout << "Product: " << prod << std::endl;
    std::cout << "Division: " << div << std::endl;

    // Incremento y Decremento
    Fixed e(0);
    std::cout << "e: " << e << std::endl;
    std::cout << "++e: " << ++e << std::endl;
    std::cout << "e++: " << e++ << std::endl;
    std::cout << "e after e++: " << e << std::endl;
    std::cout << "--e: " << --e << std::endl;
    std::cout << "e--: " << e-- << std::endl;
    std::cout << "e after e--: " << e << std::endl;

    // min y max
    Fixed f(1.5f);
    Fixed g(2.5f);

    std::cout << "Min(f, g): " << Fixed::min(f, g) << std::endl;
    std::cout << "Max(f, g): " << Fixed::max(f, g) << std::endl;

    return 0;
}
