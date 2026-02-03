#include <iostream>
using namespace std;

int main(){
    int numPares = 0, numImpares = 0;
    for (int i = 1;i<=100; i++){
        cout<<i<<" ";
        if (i % 2 == 0){
            numPares += i;
        }
        else {
            numImpares += i;
        }
    }
    cout<<"\nSuma de Pares: "<<numPares<<endl;
    cout<<"Suma de Impares: "<<numImpares<<endl;
}