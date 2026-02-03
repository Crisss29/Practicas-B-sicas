#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct Cliente{
    string nombre;
    int edad;
    float consumoMensual;
};

int main(){
    vector<Cliente> clientes;
    Cliente c;
    int n;
    float consumoTotal = 0, consumoPromedio;
    Cliente mayorConsumo;

    cout<<"Ingrese la cantidad de clientes: ";
    cin>>n;

    for(int i = 0; i < n; i++){
        cout<<"Ingrese el nombre del cliente "<<i+1<<": ";
        cin>>c.nombre;
        cout<<"Ingrese la edad del cliente "<<i+1<<": ";
        cin>>c.edad;
        cout<<"Ingrese el consumo mensual del cliente "<<i+1<<": ";
        cin>>c.consumoMensual;
        clientes.push_back(c);
    }

    ofstream archivo("clientes_consumo.txt");
    for(int i = 0; i < clientes.size(); i++){
        archivo<<clientes[i].nombre<<" "
               <<clientes[i].edad<<" "
               <<clientes[i].consumoMensual<<endl;
    }
    archivo.close();

    clientes.clear();

    ifstream leer("clientes_consumo.txt");
    while(leer>>c.nombre>>c.edad>>c.consumoMensual){
        clientes.push_back(c);
    }
    leer.close();

    mayorConsumo = clientes[0];

    for(int i = 0; i < clientes.size(); i++){
        consumoTotal += clientes[i].consumoMensual;
        if(clientes[i].consumoMensual > mayorConsumo.consumoMensual){
            mayorConsumo = clientes[i];
        }
    }

    consumoPromedio = consumoTotal / clientes.size();

    cout<<"Consumo total: "<<consumoTotal<<endl;
    cout<<"Consumo promedio: "<<consumoPromedio<<endl;
    cout<<"Cliente con mayor consumo: "<<mayorConsumo.nombre<<endl;
    cout<<"Consumo: "<<mayorConsumo.consumoMensual<<endl;
}
