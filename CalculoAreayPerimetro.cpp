//
//  main.cpp
//  CalculoPerimetroAreas
//


#include <iostream>
#include "Circulo.h"
#include "Triangulo.h"
#include "Rectangulo.h"


int main(int argc, const char * argv[])
{
    int seleccion = 0;
    std::cout << "1 : area y circunferencia del circulo" << "\n";
    std::cout << "2 : area y perimetro del triangulo" << "\n";
    std::cout << "3 : area y perimetro del rectangulo" << "\n";
    std::cout << "otro : fin" << "\n";
    std::cout << "ingrese opcion: ";
    
    
    if(std::cin >> seleccion){
        
        switch(seleccion) {
                
            case 1  : {
                std::cout << "\n" << "Circulo" << "\n";
                Circulo circulo = getNewCirculo();
                std::cout << "Area del circulo: "<< getAreaCirculo(circulo) << "\n";
                std::cout << "Circunferencia del circulo: "<< getCircunferencia(circulo) << "\n";
                break;
            }
            case 2  : {
                std::cout << "\n" << "Triangulo" << "\n";
                Triangulo triangulo = getNewTriangulo();
                std::cout << "Area del triangulo: "<< getAreaTriangulo(triangulo) << "\n";
                std::cout << "Perimetro del triangulo: "<< getPerimetroTriangulo(triangulo) << "\n";
                break;
            }
            case 3 : {
                std::cout << "\n" << "Rectangulo" << "\n";
                Rectangulo rectangulo = getNewRectangulo();
                std::cout << "Area del rectangulo: "<< getAreaRectangulo(rectangulo) << "\n";
                std::cout << "Perimetro del rectangulo: "<< getPerimetroRectangulo(rectangulo) << "\n";
                break;
            }
                
            default :
                return 0;
        }
    }

}