//
//  Circulo.h
//  CalculoPerimetroAreas
//

#include "Punto.h"

struct Circulo{
    Punto centro;
    double radio;
};

Circulo getCirculo();
double getAreaCirculo(Circulo);
double getCircunferencia(Circulo);