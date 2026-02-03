#include <iostream>
using namespace std;

int main(){
    int contador = 0;
    for (int i=1;i<=10;i++){
        cout<<i<<" ";
        contador += 1;
    }
    cout<<"\nSe mostraron "<<contador<<" numeros."<<endl;
}