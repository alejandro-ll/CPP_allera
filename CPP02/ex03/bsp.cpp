#include "Point.hpp"

// Función para calcular el área de un triángulo
static Fixed area(Point const a, Point const b, Point const c) {
    float result = (a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) +
                    b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) +
                    c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2.0f;

    if (result < 0)
        result = -result;

    return Fixed(result);
}

// Función bsp
bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed areaABC = area(a, b, c);
    Fixed areaPAB = area(point, a, b);
    Fixed areaPBC = area(point, b, c);
    Fixed areaPCA = area(point, c, a);

    if (areaPAB.toFloat() == 0 || areaPBC.toFloat() == 0 || areaPCA.toFloat() == 0)
        return false; // Si está en un borde

    return (areaABC.toFloat() == (areaPAB + areaPBC + areaPCA).toFloat());
}
