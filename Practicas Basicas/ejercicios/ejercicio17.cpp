#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros(8);
    int maximo, minimo, rango;

    for (int i = 0; i < 8; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];

        if (i == 0) {
            maximo = numeros[i];
            minimo = numeros[i];
        } else {
            if (numeros[i] > maximo) maximo = numeros[i];
            if (numeros[i] < minimo) minimo = numeros[i];
        }
    }

    rango = maximo - minimo;

    cout << "\nEl valor máximo es: " << maximo << endl;
    cout << "El valor mínimo es: " << minimo << endl;
    cout << "El rango (maximo - minimo) es: " << rango << endl;

    return 0;
}
