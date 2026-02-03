#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;

int main() {
    vector<int> numeros(12);  
    int sumaPositivos = 0;
    int sumaNegativos = 0;
    int sumaAbsoluta = 0;

    for (int i = 0; i < 12; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];

        if (numeros[i] > 0) {
            sumaPositivos += numeros[i];
        } else if (numeros[i] < 0) {
            sumaNegativos += numeros[i];
        }

        sumaAbsoluta += abs(numeros[i]); 
    }

    cout << "\nLa suma de los valores positivos es: " << sumaPositivos << endl;
    cout << "La suma de los valores negativos es: " << sumaNegativos << endl;
    cout << "El valor absoluto total acumulado es: " << sumaAbsoluta << endl;

    return 0;
}
