#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros(10);
    vector<int> cuadrados(10);
    int sumaCuadrados = 0;
    float promedioCuadrados;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];

        cuadrados[i] = numeros[i] * numeros[i];
        sumaCuadrados += cuadrados[i];
    }

    promedioCuadrados = sumaCuadrados / 10;

    cout << "\nCuadrado de cada numero:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Numero: " << numeros[i]
             << "Cuadrado: " << cuadrados[i] << endl;
    }

    cout << "\nLa suma de los cuadrados es: " << sumaCuadrados << endl;
    cout << "El promedio de los cuadrados es: " << promedioCuadrados << endl;

    return 0;
}
