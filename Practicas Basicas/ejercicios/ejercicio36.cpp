#include <iostream>
#include <fstream>
using namespace std;

struct Estudiante{
    string nombre;
    float nota1, nota2, nota3;
};

int main(){
    Estudiante e;
    int n;
    string buscar;
    bool encontrado = false;

    cout<<"Ingrese la cantidad de estudiantes: ";
    cin>>n;

    ofstream archivo("estudiantes.txt");
    for(int i = 0; i < n; i++){
        cout<<"Ingrese el nombre del estudiante "<<i+1<<": ";
        cin>>e.nombre;
        cout<<"Ingrese la nota 1: ";
        cin>>e.nota1;
        cout<<"Ingrese la nota 2: ";
        cin>>e.nota2;
        cout<<"Ingrese la nota 3: ";
        cin>>e.nota3;
        archivo<<e.nombre<<" "<<e.nota1<<" "<<e.nota2<<" "<<e.nota3<<endl;
    }
    archivo.close();

    cout<<"Ingrese el nombre a buscar: ";
    cin>>buscar;

    ifstream leer("estudiantes.txt");
    while(leer>>e.nombre>>e.nota1>>e.nota2>>e.nota3){
        if(e.nombre == buscar){
            float promedio = (e.nota1 + e.nota2 + e.nota3) / 3;
            cout<<"Nota 1: "<<e.nota1<<endl;
            cout<<"Nota 2: "<<e.nota2<<endl;
            cout<<"Nota 3: "<<e.nota3<<endl;
            cout<<"Promedio: "<<promedio<<endl;
            if(promedio >= 7){
                cout<<"Aprueba"<<endl;
            }else{
                cout<<"Reprueba"<<endl;
            }
            encontrado = true;
        }
    }
    leer.close();

    if(!encontrado){
        cout<<"Estudiante no encontrado"<<endl;
    }
}
