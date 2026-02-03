#include <iostream>
using namespace std;

int main(){
    float sueldos[10];
    float suma = 0, promedio;
    int arriba = 0, abajo = 0;

    for(int i = 0; i < 10; i++){
        cout<<"Ingrese el sueldo "<<i+1<<": ";
        cin>>sueldos[i];
        suma += sueldos[i];
    }

    promedio = suma / 10;

    for(int i = 0; i < 10; i++){
        if(sueldos[i] > promedio){
            arriba++;
        }else if(sueldos[i] < promedio){
            abajo++;
        }
    }

    cout<<"Sueldo promedio: "<<promedio<<endl;
    cout<<"Sueldos por encima del promedio: "<<arriba<<endl;
    cout<<"Sueldos por debajo del promedio: "<<abajo<<endl;
}
