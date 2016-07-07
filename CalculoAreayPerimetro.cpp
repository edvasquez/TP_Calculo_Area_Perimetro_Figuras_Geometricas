//
//  CalculoAreayPerimetro.cpp
//  CalculoPerimetroAreas
//
//  Created by Edgar Vasquez
//             Ramiro Mendez
//             Facundo Marin  on 7/5/16.
//  Copyright © 2016 AyED. All rights reserved.
//

#include <iostream>
#include <cmath>

//#define PI 4*atan(1);

struct Punto{
    double x = 0;
    double y = 0;
};

struct Circulo{
    Punto centro;
    double radio = 0;
};

struct Triangulo{
    Punto a;
    Punto b;
    Punto c;
};

struct Rectangulo{
    Punto origen;
    double alto = 0;
    double ancho = 0;
};

Punto getReadPunto();

Circulo getNewCirculo();
double getAreaCirculo(Circulo);
double getCircunferencia(Circulo);

Triangulo getNewTriangulo();
double getAreaTriangulo(Triangulo);
double getPerimetroTriangulo(Triangulo);
double getLongitudSegmento(Punto origen, Punto fin);

Rectangulo getNewRectangulo();
double getAreaRectangulo(Rectangulo);
double getPerimetroRectangulo(Rectangulo);



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

Circulo getNewCirculo(){
    Circulo circulo;
    circulo.centro = getReadPunto();
    std::cout << "Ingrese el radio del circulo: ";
    std::cin >> circulo.radio;
    
    return circulo;
}


Punto getReadPunto()
{
    Punto punto;
    std::cout << "ingrese el valor X: ";
    std::cin >> punto.x;
    std::cout << "ingrese el valor Y: ";
    std::cin >> punto.y;
    
    return punto;
}

double getAreaCirculo(Circulo circulo)
{
    return M_PI * pow(circulo.radio, 2);
}


double getCircunferencia(Circulo circulo)
{
    return 2 * M_PI * circulo.radio;
}

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

double getLongitudSegmento(Punto origen, Punto fin)
{
    Punto segmento;
    double lado = 0;
    
    segmento.x = fin.x - origen.x;
    segmento.y = fin.y - origen.y;
    
    lado = sqrt(pow(segmento.x, 2) + pow(segmento.y, 2));
    
    return lado;
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


Rectangulo getNewRectangulo()
{
    Rectangulo rectangulo;
    std::cout << "ingrese el punto origen del Rectangulo" << "\n";
    std::cout << "Punto origen" << "\n";
    rectangulo.origen = getReadPunto();
    std::cout << "Alto: ";
    std::cin >> rectangulo.alto;
    std::cout << "Ancho: ";
    std::cin >> rectangulo.ancho;
    
    return rectangulo;
}


double getAreaRectangulo(Rectangulo rectangulo)
{
    return rectangulo.alto * rectangulo.ancho;
}


double getPerimetroRectangulo(Rectangulo rectangulo)
{
    return (2 * rectangulo.alto) + (2 * rectangulo.ancho);
}