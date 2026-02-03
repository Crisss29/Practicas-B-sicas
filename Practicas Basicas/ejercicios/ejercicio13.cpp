#include <iostream>
using namespace std;

int main(){
    int numeros[12];
    int sumaPares = 0;
    int sumaImpares = 0;

    for (int i = 1; i <= 12; i++){
        cout<<"Ingrese el numero "<<i<<" del arreglo: ";
        cin>>numeros[i];

        if (numeros[i] % 2 == 0){
            sumaPares += i;
        } else{
            sumaImpares += i;
        }
    }
    cout<<"\nLa suma de los Pares es: "<<sumaPares<<endl;
    cout<<"La suma de los Impares es: "<<sumaImpares<<endl;
    if (sumaImpares > sumaPares){
        cout<<"La suma de los impares es MAYOR a los pares."<<endl;
    } else {
        cout<<"La suma de los pares es MAYOR a los impares."<<endl;
    }
}
