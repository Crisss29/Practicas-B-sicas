#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int enRango = 0, fueraRango = 0;
    float porcentajeEnRango, porcentajeFueraRango;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];

        if (numeros[i] >= 20 && numeros[i] <= 80) {
            enRango++;
        } else {
            fueraRango++;
        }
    }

    porcentajeEnRango = enRango * 100/ 10;
    porcentajeFueraRango = fueraRango * 100/ 10;

    cout << "\nCantidad en el rango [20 - 80]: " << enRango << endl;
    cout << "Cantidad fuera del rango: " << fueraRango << endl;
    cout << "Porcentaje en el rango: " << porcentajeEnRango << "%" << endl;
    cout << "Porcentaje fuera del rango: " << porcentajeFueraRango << "%" << endl;

    return 0;
}
