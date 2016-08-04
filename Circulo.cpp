//
//  Circulo.cpp
//  CalculoPerimetroAreas
//


#include <iostream>
#include <cmath>
#include "Circulo.h"
#include "Punto.h"



Circulo getNewCirculo(){
    struct Circulo circulo;
    circulo.centro = getReadPunto();
    std::cout << "Ingrese el radio del circulo: ";
    std::cin >> circulo.radio;
    
    return circulo;
}


double getAreaCirculo(Circulo circulo)
{
    return M_PI * pow(circulo.radio, 2);
}


double getCircunferencia(Circulo circulo)
{
    return 2 * M_PI * circulo.radio;
}
