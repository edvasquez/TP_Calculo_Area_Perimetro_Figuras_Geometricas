//
//  Punto.cpp
//  CalculoPerimetroAreas
//


#include <iostream>
#include "Punto.h"


Punto getReadPunto()
{
    Punto punto;
    std::cout << "ingrese el valor X: ";
    std::cin >> punto.x;
    std::cout << "ingrese el valor Y: ";
    std::cin >> punto.y;
    
    return punto;
}