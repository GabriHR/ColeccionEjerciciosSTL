#include "iostream"
#include "circulo.cpp"
#include "triangulo.cpp"
#include "cuadrado.cpp"
#include "rectangulo.cpp"
#include "rombo.cpp"
using namespace std;
int main(){
    cout<<"Area del triangulo: "<<Geometria::calcularAreaTriangulo(5,3)<<endl;
    cout<<"Area del circulo: "<<Geometria::calcularAreaCirculo(4)<<endl;
    cout<<"Area del cuadrado: "<<Geometria::calcularAreaCuadrado(3)<<endl;
    cout<<"Area del rectangulo: "<<Geometria::calcularAreaRectangulo(4,3)<<endl;
    cout<<"Area del rombo: "<<Geometria::calcularAreaRombo(15,7)<<endl;
    return 0;
}