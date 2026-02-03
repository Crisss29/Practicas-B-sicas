#include <iostream>
using namespace std;

struct Cliente{
    string nombre;
    int edad;
};

int main(){
    Cliente clientes[3];

    for(int i = 0; i < 3; i++){
        cout<<"Ingrese el nombre del cliente "<<i+1<<": ";
        cin>>clientes[i].nombre;
        cout<<"Ingrese la edad del cliente "<<i+1<<": ";
        cin>>clientes[i].edad;
    }

    cout<<"Clientes mayores de edad"<<endl;
    for(int i = 0; i < 3; i++){
        if(clientes[i].edad >= 18){
            cout<<"Nombre: "<<clientes[i].nombre<<endl;
            cout<<"Edad: "<<clientes[i].edad<<endl;
        }
    }
}