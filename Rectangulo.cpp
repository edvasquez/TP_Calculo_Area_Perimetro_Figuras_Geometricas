//
//  Rectangulo.cpp
//  CalculoPerimetroAreas
//


#include <iostream>
#include "Rectangulo.h"
#include "Punto.h"




Rectangulo getRectangulo()
{
    Rectangulo rectangulo;
    std::cout << "ingrese el punto origen del Rectangulo" << "\n";
    std::cout << "Punto origen" << "\n";
    rectangulo.origen = getPunto();
    std::cout << "Alto: ";
    std::cin >> rectangulo.alto;
    std::cout << "Ancho: ";
    std::cin >> rectangulo.ancho;
    
    return rectangulo;
}


double getAreaRectangulo(struct Rectangulo rectangulo)
{
    return rectangulo.alto * rectangulo.ancho;
}


double getPerimetroRectangulo(struct Rectangulo rectangulo)
{
    return (2 * rectangulo.alto) + (2 * rectangulo.ancho);
}