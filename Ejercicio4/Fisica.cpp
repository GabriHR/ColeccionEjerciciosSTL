#include <iostream>
using namespace std;
namespace Ciencia {
    namespace Fisica {
        const double c = 299792458;

        double calcularEnergia(double masa) {
            return masa * c * c;
        }

        double calcularFuerza(double masa, double aceleracion) {
            return masa * aceleracion;
        }


        double calcularVelocidadFinal(double velocidadInicial, double aceleracion, double tiempo) {
            return velocidadInicial + (aceleracion * tiempo);
        }
    }
}

int main() {
    cout << "Energia: " << Ciencia::Fisica::calcularEnergia(3) <<endl;
    cout << "Fuerza: " << Ciencia::Fisica::calcularFuerza(3, 9) <<endl;
    cout << "Velocidad final: " << Ciencia::Fisica::calcularVelocidadFinal(10, 9, 3) <<endl;

    return 0;
}
