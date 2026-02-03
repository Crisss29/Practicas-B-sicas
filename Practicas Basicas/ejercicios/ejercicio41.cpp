#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

// Función para ingresar calificaciones
void ingresarCalificaciones(vector<float> &calif, int n) {
    float nota;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese calificacion " << i + 1 << ": ";
        cin >> nota;
        calif.push_back(nota);
    }
}

// Guardar en archivo
void guardarArchivo(const vector<float> &calif) {
    ofstream archivo("calificaciones.txt");
    for (float c : calif) {
        archivo << c << endl;
    }
    archivo.close();
}

// Leer desde archivo
void leerArchivo(vector<float> &calif) {
    ifstream archivo("calificaciones.txt");
    float nota;
    calif.clear();
    while (archivo >> nota) {
        calif.push_back(nota);
    }
    archivo.close();
}

// Calcular total
float calcularTotal(const vector<float> &calif) {
    float total = 0;
    for (float c : calif) {
        total += c;
    }
    return total;
}

// Contar mayores y menores al promedio
void contarRespectoPromedio(const vector<float> &calif, float promedio,
                            int &mayores, int &menores) {
    mayores = menores = 0;
    for (float c : calif) {
        if (c > promedio)
            mayores++;
        else if (c < promedio)
            menores++;
    }
}

int main() {
    vector<float> calificaciones;
    int n;
    int mayores, menores;

    cout << "Ingrese el numero de calificaciones: ";
    cin >> n;

    ingresarCalificaciones(calificaciones, n);
    guardarArchivo(calificaciones);

    // Leer nuevamente desde el archivo
    leerArchivo(calificaciones);

    float total = calcularTotal(calificaciones);
    float promedio = total / calificaciones.size();

    contarRespectoPromedio(calificaciones, promedio, mayores, menores);

    cout << "\nTotal de calificaciones: " << total << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Calificaciones sobre el promedio: " << mayores << endl;
    cout << "Calificaciones bajo el promedio: " << menores << endl;

    return 0;
}
