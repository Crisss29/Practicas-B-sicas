#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

// Función para ingresar las ventas (paso por referencia)
void ingresarVentas(vector<double> &ventas, int n) {
    double valor;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese venta " << i + 1 << ": ";
        cin >> valor;
        ventas.push_back(valor);
    }
}

// Guardar ventas en archivo
void guardarArchivo(const vector<double> &ventas) {
    ofstream archivo("ventas.txt");
    for (double v : ventas) {
        archivo << v << endl;
    }
    archivo.close();
}

// Leer ventas desde archivo
void leerArchivo(vector<double> &ventasArchivo) {
    ifstream archivo("ventas.txt");
    double valor;
    while (archivo >> valor) {
        ventasArchivo.push_back(valor);
    }
    archivo.close();
}

// Calcular total de ventas
double calcularTotal(const vector<double> &ventas) {
    double total = 0;
    for (double v : ventas) {
        total += v;
    }
    return total;
}

// Contar ventas respecto al promedio
void contarRespectoPromedio(const vector<double> &ventas, double promedio,
                            int &mayores, int &menores) {
    mayores = menores = 0;
    for (double v : ventas) {
        if (v > promedio)
            mayores++;
        else if (v < promedio)
            menores++;
    }
}

int main() {
    vector<double> ventas;
    vector<double> ventasArchivo;
    int n;
    int mayores, menores;

    cout << "Ingrese el numero de ventas: ";
    cin >> n;

    ingresarVentas(ventas, n);
    guardarArchivo(ventas);

    // Leer ventas desde el archivo en un nuevo vector
    leerArchivo(ventasArchivo);

    double total = calcularTotal(ventasArchivo);
    double promedio = total / ventasArchivo.size();

    contarRespectoPromedio(ventasArchivo, promedio, mayores, menores);

    cout << "\nTotal de ventas: " << total << endl;
    cout << "Promedio de ventas: " << promedio << endl;
    cout << "Ventas mayores al promedio: " << mayores << endl;
    cout << "Ventas menores al promedio: " << menores << endl;

    return 0;
}
