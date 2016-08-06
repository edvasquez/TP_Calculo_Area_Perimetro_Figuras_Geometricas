//
//  Triangulo.cpp
//  CalculoPerimetroAreas
//


#include <iostream>
#include <cmath>
#include "Triangulo.h"
#include "Punto.h"
#include "Util.h"


Triangulo getTriangulo()
{
    Triangulo triangulo;
    std::cout << "ingrese los tres punto del triangulo" << "\n";
    std::cout << "Punto A" << "\n";
    triangulo.a = getPunto();
    std::cout << "Punto B" << "\n";
    triangulo.b = getPunto();
    std::cout << "Punto C" << "\n";
    triangulo.c = getPunto();
    
    return triangulo;
}

double getAreaTriangulo(Triangulo triangulo)
{
    double ladoA = getLongitudSegmento(triangulo.a, triangulo.c);
    double ladoB = getLongitudSegmento(triangulo.a, triangulo.b);
    double ladoC = getLongitudSegmento(triangulo.c, triangulo.b);
    
    // formula de Heron
    double semiPerimetro = (ladoA + ladoB + ladoC) / 2;
    double aux = (semiPerimetro - ladoA) * (semiPerimetro - ladoB) * (semiPerimetro - ladoC);
    
    return sqrt(semiPerimetro * aux);
}

double getPerimetroTriangulo(Triangulo triangulo)
{
    double ladoA = getLongitudSegmento(triangulo.a, triangulo.c);
    double ladoB = getLongitudSegmento(triangulo.a, triangulo.b);
    double ladoC = getLongitudSegmento(triangulo.c, triangulo.b);
    
    return ladoA + ladoB + ladoC;
}
