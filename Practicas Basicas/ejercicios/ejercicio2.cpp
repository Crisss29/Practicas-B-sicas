#include <iostream>
using namespace std;

int main(){
    int numero;
    cout<<"Ingrese un numero entero: ";
    cin>>numero;
    if (numero < 10 || numero > 50){
        cout<<"Numero Fuera de Rango."<<endl;
    }
}
