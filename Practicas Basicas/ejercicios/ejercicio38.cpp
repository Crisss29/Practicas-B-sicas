#include <iostream>
using namespace std;

void llenarArreglo(float ventas[], int n){
    for(int i = 0; i < n; i++){
        cout<<"Ingrese la venta "<<i+1<<": ";
        cin>>ventas[i];
    }
}

void calcular(float ventas[], int n, float &total, float &promedio, int &mayores){
    total = 0;
    mayores = 0;

    for(int i = 0; i < n; i++){
        total += ventas[i];
    }

    promedio = total / n;

    for(int i = 0; i < n; i++){
        if(ventas[i] > promedio){
            mayores++;
        }
    }
}

int main(){
    float ventas[10];
    float total, promedio;
    int mayores;

    llenarArreglo(ventas, 10);
    calcular(ventas, 10, total, promedio, mayores);

    cout<<"Total de ventas: "<<total<<endl;
    cout<<"Promedio de ventas: "<<promedio<<endl;
    cout<<"Ventas mayores al promedio: "<<mayores<<endl;
}
