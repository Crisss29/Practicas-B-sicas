#include <iostream>
using namespace std;

int calcularMayor(int v[], int n){
    int mayor = v[0];
    for(int i = 1; i < n; i++){
        if(v[i] > mayor){
            mayor = v[i];
        }
    }
    return mayor;
}

int calcularMenor(int v[], int n){
    int menor = v[0];
    for(int i = 1; i < n; i++){
        if(v[i] < menor){
            menor = v[i];
        }
    }
    return menor;
}

void contarValores(int v[], int n, int &positivos, int &negativos, int &ceros){
    positivos = 0;
    negativos = 0;
    ceros = 0;

    for(int i = 0; i < n; i++){
        if(v[i] > 0){
            positivos++;
        }else if(v[i] < 0){
            negativos++;
        }else{
            ceros++;
        }
    }
}

int main(){
    int numeros[10];
    int mayor, menor;
    int positivos, negativos, ceros;

    for(int i = 0; i < 10; i++){
        cout<<"Ingrese el numero "<<i+1<<": ";
        cin>>numeros[i];
    }

    mayor = calcularMayor(numeros, 10);
    menor = calcularMenor(numeros, 10);
    contarValores(numeros, 10, positivos, negativos, ceros);

    cout<<"Mayor: "<<mayor<<endl;
    cout<<"Menor: "<<menor<<endl;
    cout<<"Positivos: "<<positivos<<endl;
    cout<<"Negativos: "<<negativos<<endl;
    cout<<"Ceros: "<<ceros<<endl;
}
