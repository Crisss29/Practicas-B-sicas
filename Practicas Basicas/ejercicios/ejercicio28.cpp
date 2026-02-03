#include <iostream>
using namespace std;

int main(){
    int opcion;
    int numeros[10];
    int ingresado = 0;

    do{
        cout<<"MENU"<<endl;
        cout<<"1. Ingresar 10 numeros"<<endl;
        cout<<"2. Mostrar el promedio"<<endl;
        cout<<"3. Mostrar el mayor y el menor"<<endl;
        cout<<"4. Contar numeros positivos y negativos"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opcion;

        if(opcion == 1){
            for(int i = 0; i < 10; i++){
                cout<<"Ingrese el numero "<<i+1<<": ";
                cin>>numeros[i];
            }
            ingresado = 1;
        }else if(opcion == 2 && ingresado){
            int suma = 0;
            for(int i = 0; i < 10; i++){
                suma += numeros[i];
            }
            cout<<"Promedio: "<<suma / 10.0<<endl;
        }else if(opcion == 3 && ingresado){
            int mayor = numeros[0], menor = numeros[0];
            for(int i = 1; i < 10; i++){
                if(numeros[i] > mayor) mayor = numeros[i];
                if(numeros[i] < menor) menor = numeros[i];
            }
            cout<<"Mayor: "<<mayor<<endl;
            cout<<"Menor: "<<menor<<endl;
        }else if(opcion == 4 && ingresado){
            int positivos = 0, negativos = 0;
            for(int i = 0; i < 10; i++){
                if(numeros[i] > 0) positivos++;
                else if(numeros[i] < 0) negativos++;
            }
            cout<<"Positivos: "<<positivos<<endl;
            cout<<"Negativos: "<<negativos<<endl;
        }
    }while(opcion != 5);
}