#include <iostream>
using namespace std;

int main(){
    int rango = 0;
    int noRango = 0;
    int numero;
    for (int i = 1;i<=15; i++){
        cout<<"Ingresa el numero "<<i<<": ";
        cin>>numero;
        if (numero >=20 && numero <= 80){
            rango += 1;
        }
        else{
            noRango += 1;
        }
    }
    cout<<"Numeros Dentro de Rango (20-80): "<<rango<<endl;
    cout<<"Numeros Fuera de Rango (20-80): "<<noRango<<endl;
}