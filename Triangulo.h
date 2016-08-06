//
//  Triangulo.h
//  CalculoPerimetroAreas
//


#include "Punto.h"

struct Triangulo{
     Punto a;
     Punto b;
     Punto c;
};

Triangulo getTriangulo();
double getAreaTriangulo(Triangulo triangulo);
double getPerimetroTriangulo(Triangulo triangulo);
double getLongitudSegmento(Punto origen, Punto fin);