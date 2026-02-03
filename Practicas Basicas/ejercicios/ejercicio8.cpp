#include <iostream>
using namespace std;

int main(){
    int numero;
    int numPositivo = 0;
    int numNegativo = 0;
    int cero = 0;
    for (int i = 1; i <=10; i++){
        cout<<"Ingrese el numero "<<i<<": ";
        cin>>numero;
        if (numero > 0){
            numPositivo += 1;
        }
        else if (numero < 0){
            numNegativo +=1;
        }
        else if (numero == 0){
            cero += 1;
        }
    }
    cout<<"\nNumeros Positivos: "<<numPositivo<<endl;
    cout<<"Numeros Negativos: "<<numNegativo<<endl;
    cout<<"Igual a Cero: "<<cero<<endl;
}
