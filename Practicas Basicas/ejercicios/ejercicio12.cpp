#include <iostream>
using namespace std;

int main(){
    int numeros[8];
    int mayor;
    int menor;
    int diferencia;

    cout << "Ingrese el numero 1 del arreglo: ";
    cin >> numeros[0];
    mayor = numeros[0];
    menor = numeros[0];

    for (int i = 1; i <= 8; i++){
        cout<<"Ingrese el numero "<<i<<" del arreglo: ";
        cin>>numeros[i];
        
        if (numeros[i] > mayor){
            mayor = numeros[i];
        } if (numeros[i] < menor){
            menor = numeros[i];
        }
    }
    cout<<"\nEL numero mayor es: "<<mayor<<endl;
    cout<<"El numero menor es: "<<menor<<endl;
    diferencia = mayor - menor;
    cout<<"La difercia entre los numeros es: "<<diferencia<<endl;
}
