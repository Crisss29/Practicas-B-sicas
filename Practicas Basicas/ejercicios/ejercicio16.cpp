#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros(10);
    int suma = 0;
    float promedio;
    int contadorEncimaPromedio = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    promedio = suma / 10.0;

    for (int i = 0; i < 10; i++) {
        if (numeros[i] > promedio) {
            contadorEncimaPromedio++;
        }
    }

    cout << "\nLa suma total de los numeros es: " << suma << endl;
    cout << "El promedio de los numeros es: " << promedio << endl;
    cout << "Cantidad de numeros por encima del promedio: " << contadorEncimaPromedio << endl;

    return 0;
}
