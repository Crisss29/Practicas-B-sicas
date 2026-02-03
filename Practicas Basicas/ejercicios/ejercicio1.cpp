#include <iostream>
using namespace std;

int main(){
    int numero;
    cout<<"Ingrese un numero entero: ";
    cin>>numero;
    if (numero >= 10 && numero <= 50){
        cout<<"El numero pertenece al rango. (10-50)"<<endl;
    } else{
        cout<<"Numero fuera de rango."<<endl;
    }
    
}
