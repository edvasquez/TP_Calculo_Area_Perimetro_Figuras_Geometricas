//
//  Rectangulo.h
//  CalculoPerimetroAreas
//


#include "Punto.h"

struct Rectangulo{
    Punto origen;
    double alto;
    double ancho;
};

Rectangulo getRectangulo();
double getAreaRectangulo(Rectangulo rectangulo);
double getPerimetroRectangulo(Rectangulo rectangulo);