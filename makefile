UNAME_S := $(shell uname -s)

# Compilacion
ifeq ($(UNAME_S),Darwin)
  CC := clang++ -arch x86_64
else
  CC := g++
endif

# Archivos binarios a borrar
binaries := Rectangulo Circulo Triangulo CalculoAreayPerimetro Punto

# Archivo ejecutable
target := calculofiguras


calculofiguras: Rectangulo.o Circulo.o Triangulo.o CalculoAreayPerimetro.o Punto.o
	$(CC) -o calculofiguras  Rectangulo.o Circulo.o Triangulo.o CalculoAreayPerimetro.o Punto.o

CalculoAreayPerimetro.o: CalculoAreayPerimetro.cpp
	$(CC) -c CalculoAreayPerimetro.cpp

Triangulo.o: Triangulo.cpp
	$(CC) -c Triangulo.cpp

Circulo.o: Circulo.cpp
	$(CC) -c Circulo.cpp

Rectangulo.o: Rectangulo.cpp
	$(CC) -c Rectangulo.cpp 

Punto.o: Punto.cpp
	$(CC) -c Punto.cpp

clean:
	-rm -f $(binaries) *.o $(target)