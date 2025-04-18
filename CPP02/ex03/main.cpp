#include "Point.hpp"
#include <iostream>

int main() {
    Point a(0.0f, 0.0f);
    Point b(10.0f, 0.0f);
    Point c(0.0f, 10.0f);

    Point inside(2.0f, 2.0f);
    Point outside(20.0f, 20.0f);
    Point onEdge(0.0f, 5.0f);

    std::cout << "Inside (should be 1): " << bsp(a, b, c, inside) << std::endl;
    std::cout << "Outside (should be 0): " << bsp(a, b, c, outside) << std::endl;
    std::cout << "On Edge (should be 0): " << bsp(a, b, c, onEdge) << std::endl;

    return 0;
}
