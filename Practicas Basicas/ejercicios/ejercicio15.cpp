#include <iostream>
using namespace std;

int main() {
    int arreglo[15];
    int positivos = 0, negativos = 0;
    int sumaPositivos = 0, sumaNegativos = 0;
    float promedioPositivos = 0, promedioNegativos = 0;

    for (int i = 0; i < 15; i++) {
        cout << "Ingrese el numero " << i+1 << " del arreglo: ";
        cin >> arreglo[i];

        if (arreglo[i] > 0) {
            positivos++;
            sumaPositivos += arreglo[i];
        } else if (arreglo[i] < 0) {
            negativos++;
            sumaNegativos += arreglo[i];
        }
    }


    if (positivos > 0)
        promedioPositivos = (float)sumaPositivos / positivos;

    if (negativos > 0)
        promedioNegativos = (float)sumaNegativos / negativos;

    cout << "\nEl promedio de los numeros positivos es: " << promedioPositivos << endl;
    cout << "El promedio de los numeros negativos es: " << promedioNegativos << endl;

    return 0;
}
