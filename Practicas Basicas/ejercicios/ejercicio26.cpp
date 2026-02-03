#include <iostream>
using namespace std;

int main(){
    int opcion;
    float num1 = 0, num2 = 0;

    do{
        cout<<"MENU"<<endl;
        cout<<"1. Ingresar dos numeros"<<endl;
        cout<<"2. Mostrar la suma y la resta"<<endl;
        cout<<"3. Mostrar el mayor de los dos numeros"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opcion;

        if(opcion == 1){
            cout<<"Ingrese el primer numero: ";
            cin>>num1;
            cout<<"Ingrese el segundo numero: ";
            cin>>num2;
        }else if(opcion == 2){
            cout<<"Suma: "<<num1 + num2<<endl;
            cout<<"Resta: "<<num1 - num2<<endl;
        }else if(opcion == 3){
            if(num1 > num2){
                cout<<"El mayor es: "<<num1<<endl;
            }else if(num2 > num1){
                cout<<"El mayor es: "<<num2<<endl;
            }else{
                cout<<"Los numeros son iguales"<<endl;
            }
        }
    }while(opcion != 4);
}
