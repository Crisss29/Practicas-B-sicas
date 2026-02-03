#include <iostream>
#include <vector>
using namespace std;

void llenarVector(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        cout<<"Ingrese el numero "<<i+1<<": ";
        cin>>v[i];
    }
}

void calcularResultados(vector<int> &v, int &suma, float &promedio, int &mayor, int &menor){
    suma = 0;
    mayor = v[0];
    menor = v[0];

    for(int i = 0; i < v.size(); i++){
        suma += v[i];
        if(v[i] > mayor) mayor = v[i];
        if(v[i] < menor) menor = v[i];
    }

    promedio = suma / (float)v.size();
}

int main(){
    vector<int> numeros(10);
    int suma, mayor, menor;
    float promedio;

    llenarVector(numeros);
    calcularResultados(numeros, suma, promedio, mayor, menor);

    cout<<"Suma: "<<suma<<endl;
    cout<<"Promedio: "<<promedio<<endl;
    cout<<"Mayor: "<<mayor<<endl;
    cout<<"Menor: "<<menor<<endl;
}
