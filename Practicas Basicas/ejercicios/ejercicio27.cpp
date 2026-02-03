#include <iostream>
using namespace std;

int main(){
    int opcion;
    int numero = 0;

    do{
        cout<<"MENU"<<endl;
        cout<<"1. Ingresar un numero"<<endl;
        cout<<"2. Verificar si el numero esta en el rango de 1 a 100"<<endl;
        cout<<"3. Verificar si el numero es par o impar"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opcion;

        if(opcion == 1){
            cout<<"Ingrese un numero: ";
            cin>>numero;
        }else if(opcion == 2){
            if(numero >= 1 && numero <= 100){
                cout<<"El numero esta en el rango"<<endl;
            }else{
                cout<<"El numero esta fuera del rango"<<endl;
            }
        }else if(opcion == 3){
            if(numero % 2 == 0){
                cout<<"El numero es par"<<endl;
            }else{
                cout<<"El numero es impar"<<endl;
            }
        }
    }while(opcion != 4);
}
