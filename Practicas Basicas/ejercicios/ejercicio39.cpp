#include <iostream>
#include <vector>
using namespace std;

int calcularSuma(vector<int> v){
    int suma = 0;
    for(int i = 0; i < v.size(); i++){
        suma += v[i];
    }
    return suma;
}

float calcularPromedio(vector<int> v){
    int suma = calcularSuma(v);
    return suma / (float)v.size();
}

void contarParesImpares(vector<int> v, int &pares, int &impares){
    pares = 0;
    impares = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i] % 2 == 0){
            pares++;
        }else{
            impares++;
        }
    }
}

int main(){
    vector<int> numeros(10);
    int pares, impares;
    int suma;
    float promedio;

    for(int i = 0; i < 10; i++){
        cout<<"Ingrese el numero "<<i+1<<": ";
        cin>>numeros[i];
    }

    suma = calcularSuma(numeros);
    promedio = calcularPromedio(numeros);
    contarParesImpares(numeros, pares, impares);

    cout<<"Suma: "<<suma<<endl;
    cout<<"Promedio: "<<promedio<<endl;
    cout<<"Pares: "<<pares<<endl;
    cout<<"Impares: "<<impares<<endl;
}
