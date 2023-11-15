#include <iostream>
#include "ClaseCirculo.cpp"
#include "ClaseCuadrado.cpp"
#include "ClaseTriangulo.cpp"
using namespace std;

int main() {
    Geometria::Circulo circulo(5);
    Geometria::Cuadrado cuadrado(8);
    Geometria::Triangulo triangulo(6, 4);

    cout << "Area del circulo: " << circulo.calcularArea() <<endl;
    cout << "Perimetro del circulo: " << circulo.calcularPerimetro() <<endl;

    cout << "Area del cuadrado: " << cuadrado.calcularArea() <<endl;
    cout << "Perimetro del cuadrado: " << cuadrado.calcularPerimetro() <<endl;

    cout << "Area del triangulo: " << triangulo.calcularArea() <<endl;
    cout << "Perimetro del triangulo (rectangulo): " << triangulo.calcularPerimetro() <<endl;
    return 0;
}