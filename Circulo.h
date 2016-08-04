//
//  Circulo.h
//  CalculoPerimetroAreas
//

#include "Punto.h"

struct Circulo{
    Punto centro;
    double radio;
};

Circulo getNewCirculo();
double getAreaCirculo(Circulo);
double getCircunferencia(Circulo);