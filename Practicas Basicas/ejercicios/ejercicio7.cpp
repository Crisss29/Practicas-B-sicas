#include <iostream>
using namespace std;

int main(){
    int contadorMultiplos = 0;
    int contadorNoMultiplos = 0;
    for (int i = 1;i<=50;i++){
        if (i % 3 == 0){
            contadorMultiplos += 1;
        }
        else{
            contadorNoMultiplos += 1;
        }
    }
    cout<<"Numeros Multiplos (1-50): "<<contadorMultiplos<<endl;
    cout<<"Numero No Multiplos (1-50): "<<contadorNoMultiplos<<endl;
}
