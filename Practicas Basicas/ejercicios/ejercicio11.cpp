#include <iostream>
using namespace std;

int main(){
    int numeros[10];
    int sumatoria = 0;
    float promedio;
    int positivos = 0, negativos = 0;
    for (int i = 0;i<=10; i++){
        cout<<"Ingrese el numero "<<i<<" al arreglo: ";
        cin>>numeros[i];
        sumatoria += numeros[i];
        promedio = sumatoria / 10;
        if (numeros[i] > 0){
            positivos ++;
        } else if (numeros[i] < 0){
            negativos ++;
        }
        
    }
    cout<<"\nLa sumatoria total de los valores es: "<<sumatoria<<endl;
    cout<<"El promedio de los numeros es: "<<promedio<<endl;
    cout<<"Los numeros positivos son: "<<positivos<<endl;
    cout<<"Los numeros negativos son: "<<negativos<<endl;
}
