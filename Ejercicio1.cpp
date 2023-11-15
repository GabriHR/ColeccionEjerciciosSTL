#include "iostream"
using namespace std;

namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }
    int resta(int a, int b) {
        return a - b;
    }
    int multiplicacion(int a, int b) {
        return a*b;
    }
    int division(int a, int b) {
        return a/b;
    }
    int cuadrado(int a) {
        return a*a;
    }

}

int main() {
    cout << "Suma: " << Matematicas::suma(7, 6) <<endl;
    cout << "Resta: " << Matematicas::resta(8, 4) <<endl;
    cout << "Multiplicacion: " << Matematicas::multiplicacion(3, 2) <<endl;
    cout << "Division: " << Matematicas::division(10, 5) <<endl;
    return 0;
}