//
//  Util.cpp
//  CalculoPerimetroAreas
//
//

#include <iostream>
#include <cmath>
#include "Punto.h"
#include "Util.h"


void getMenuPrincipal()
{
    std::cout << "Seleccione una opcion" << "\n";
    std::cout << CIRCULO << " : area y circunferencia del circulo" << "\n";
    std::cout << TRIANGULO << " : area y perimetro del triangulo" << "\n";
    std::cout << RECTANGULO << " : area y perimetro del rectangulo" << "\n";
    std::cout << "otro : fin" << "\n";
    std::cout << "ingrese opcion: ";
}

void getSalidaPantalla(char seleccion, double area, double perimetro)
{
    std::cout << "Area: "<< area << "\n";
    
    if(seleccion == CIRCULO ){
        std::cout << "Circunferencia: "<< perimetro << "\n";
    }else{
        std::cout << "Perimetro: "<< perimetro << "\n";
    }
}

double getLongitudSegmento(Punto origen, Punto fin)
{
    Punto segmento;
    
    segmento.x = fin.x - origen.x;
    segmento.y = fin.y - origen.y;
    
    return sqrt(pow(segmento.x, 2) + pow(segmento.y, 2));
}