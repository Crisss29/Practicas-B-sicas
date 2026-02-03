#include <iostream>
using namespace std;

int main(){
    int contador = 0;
    for (int i=2;i<=20;i+=2){
        cout<<i<<" ";
        contador += i;
    }
    cout<<"\nLa suma de la serie de numero es "<<contador<<endl;
}