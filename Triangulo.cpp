//
//  Triangulo.cpp
//  CalculoPerimetroAreas
//


#include <iostream>
#include <cmath>
#include "Triangulo.h"
#include "Punto.h"



Triangulo getNewTriangulo()
{
     Triangulo triangulo;
    std::cout << "ingrese los tres punto del triangulo" << "\n";
    std::cout << "Punto A" << "\n";
    triangulo.a = getReadPunto();
    std::cout << "Punto B" << "\n";
    triangulo.b = getReadPunto();
    std::cout << "Punto C" << "\n";
    triangulo.c = getReadPunto();
    
    return triangulo;
}

double getLongitudSegmento(Punto origen, Punto fin)
{
    struct Punto segmento;
    double lado = 0;
    
    segmento.x = fin.x - origen.x;
    segmento.y = fin.y - origen.y;
    
    lado = sqrt(pow(segmento.x, 2) + pow(segmento.y, 2));
    
    return lado;
}

double getAreaTriangulo(Triangulo triangulo)
{
    
    double ladoA = 0;
    double ladoB = 0;
    double ladoC = 0;
    
    ladoA = getLongitudSegmento(triangulo.a, triangulo.c);
    ladoB = getLongitudSegmento(triangulo.a, triangulo.b);
    ladoC = getLongitudSegmento(triangulo.c, triangulo.b);
    
    // formula de Heron
    
    double semiPerimetro = (ladoA + ladoB + ladoC) / 2;
    double aux = (semiPerimetro - ladoA) * (semiPerimetro - ladoB) * (semiPerimetro - ladoC);
    double area =sqrt(semiPerimetro * aux);
    
    return area;
}

double getPerimetroTriangulo(Triangulo triangulo)
{
    double ladoA = 0;
    double ladoB = 0;
    double ladoC = 0;
    
    ladoA = getLongitudSegmento(triangulo.a, triangulo.c);
    ladoB = getLongitudSegmento(triangulo.a, triangulo.b);
    ladoC = getLongitudSegmento(triangulo.c, triangulo.b);
    
    double perimetro = ladoA + ladoB + ladoC;
    
    return perimetro;
}
