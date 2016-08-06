//
//  Punto.cpp
//  CalculoPerimetroAreas
//


#include <iostream>
#include "Punto.h"


Punto getPunto()
{
    Punto punto;
    std::cout << "ingrese el valor X: ";
    std::cin >> punto.x;
    std::cout << "ingrese el valor Y: ";
    std::cin >> punto.y;
    
    return punto;
}