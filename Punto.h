//
//  Punto.h
//  CalculoPerimetroAreas
//



/*  A header file may included twice other include files include it, or an included file includes it and the source file includes it again.
    To prevent bad effects from a double include.
*/
#ifndef PUNTO_H
#define PUNTO_H

struct Punto{
    double x;
    double y;
};

#endif /* PUNTO_H */


Punto getReadPunto();