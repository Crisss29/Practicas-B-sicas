#include <iostream>
using namespace std;

int main(){
    int numeroPositivo, multiplicacion;
    int sumatoria = 0;
    cout<<"Ingrese un numero entero positivo: ";
    cin>>numeroPositivo;
    for (int i=1; i < 10;i++){
        multiplicacion = numeroPositivo * i;
        cout<<numeroPositivo<<" x "<<i<<" = "<<multiplicacion<<endl;
        sumatoria += multiplicacion;
    }
    cout<<"\nLa sumatoria de los resultados obtenidos es: "<<sumatoria<<endl;
}
