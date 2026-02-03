#include <iostream>
#include <vector>
using namespace std;

struct Cliente{
    string nombre;
    int edad;
};

int main(){
    vector<Cliente> clientes;
    Cliente c;
    int n;

    cout<<"Ingrese la cantidad de clientes: ";
    cin>>n;

    for(int i = 0; i < n; i++){
        cout<<"Ingrese el nombre del cliente "<<i+1<<": ";
        cin>>c.nombre;
        cout<<"Ingrese la edad del cliente "<<i+1<<": ";
        cin>>c.edad;
        clientes.push_back(c);
    }

    cout<<"Listado de clientes"<<endl;
    for(int i = 0; i < clientes.size(); i++){
        cout<<"Nombre: "<<clientes[i].nombre<<endl;
        cout<<"Edad: "<<clientes[i].edad<<endl;
    }
}
