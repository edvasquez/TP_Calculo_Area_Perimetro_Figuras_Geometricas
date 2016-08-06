//
//  main.cpp
//  CalculoPerimetroAreas
//


#include <iostream>
#include "Circulo.h"
#include "Triangulo.h"
#include "Rectangulo.h"
#include "Util.h"


int main(int argc, const char * argv[])
{
    char seleccion;
    getMenuPrincipal();
    std::cin >> seleccion;
    
    switch(seleccion) {
            
        case 'c'  : {
            std::cout << "\n" << "Circulo" << "\n";
            Circulo circulo = getCirculo();
            getSalidaPantalla(seleccion, getAreaCirculo(circulo), getCircunferencia(circulo));
            break;
        }
        case 't'  : {
            std::cout << "\n" << "Triangulo" << "\n";
            Triangulo triangulo = getTriangulo();
            getSalidaPantalla(seleccion, getAreaTriangulo(triangulo), getPerimetroTriangulo(triangulo));
            break;
        }
        case 'r' : {
            std::cout << "\n" << "Rectangulo" << "\n";
            Rectangulo rectangulo = getRectangulo();
            getSalidaPantalla(seleccion, getAreaRectangulo(rectangulo), getPerimetroRectangulo(rectangulo));
            break;
        }
    }
}