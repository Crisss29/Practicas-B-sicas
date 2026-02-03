#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> numeros(15);
    int multiplos3 = 0, multiplos5 = 0, multiplosAmbos = 0;

    for(int i = 0; i < 15; i++){
        cout<<"Ingrese el numero "<<i+1<<": ";
        cin >> numeros[i];
        if(numeros[i] % 3 == 0 && numeros[i] % 5 == 0){
            multiplosAmbos++;
        }else if(numeros[i] % 3 == 0){
            multiplos3++;
        }else if(numeros[i] % 5 == 0){
            multiplos5++;
        }
    }

    cout<<"Multiplos de 3: "<<multiplos3<<endl;
    cout<<"Multiplos de 5: "<<multiplos5<<endl;
    cout<<"Multiplos de 3 y 5: "<<multiplosAmbos<<endl;
}

