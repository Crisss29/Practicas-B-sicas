#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> edades(10);
    int suma = 0;
    float promedio;
    int mayores = 0;
    int menoresOIguales = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese la edad " << i + 1 << ": ";
        cin >> edades[i];
        suma += edades[i];
    }

    promedio = suma / 10.0;

    for (int i = 0; i < 10; i++) {
        if (edades[i] > promedio) {
            mayores++;
        } else {
            menoresOIguales++;
        }
    }

    cout << "\nEl promedio de edades es: " << promedio << endl;
    cout << "Cantidad de edades mayores al promedio: " << mayores << endl;
    cout << "Cantidad de edades menores o iguales al promedio: " << menoresOIguales << endl;

    return 0;
}
