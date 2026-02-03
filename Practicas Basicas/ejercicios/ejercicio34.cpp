#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct Cliente{
    string nombre;
    int edad;
};

int main(){
    vector<Cliente> clientes;
    Cliente c;
    int n;
    string buscar;
    bool encontrado = false;

    cout<<"Ingrese la cantidad de clientes: ";
    cin>>n;

    for(int i = 0; i < n; i++){
        cout<<"Ingrese el nombre del cliente "<<i+1<<": ";
        cin>>c.nombre;
        cout<<"Ingrese la edad del cliente "<<i+1<<": ";
        cin>>c.edad;
        clientes.push_back(c);
    }

    ofstream archivo("clientes.txt");
    for(int i = 0; i < clientes.size(); i++){
        archivo<<clientes[i].nombre<<" "<<clientes[i].edad<<endl;
    }
    archivo.close();

    cout<<"Ingrese el nombre a buscar: ";
    cin>>buscar;

    for(int i = 0; i < clientes.size(); i++){
        if(clientes[i].nombre == buscar){
            cout<<"Edad: "<<clientes[i].edad<<endl;
            encontrado = true;
        }
    }

    if(!encontrado){
        cout<<"Cliente no registrado"<<endl;
    }
}
