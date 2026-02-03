#include <iostream>
using namespace std;

int main(){
    int matriz[2][4];
    int mayor;
    int filaMayor = 0, columnaMayor = 0;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cout<<"Ingrese el valor ["<<i+1<<"]["<<j+1<<"]: ";
            cin>>matriz[i][j];

            if(i == 0 && j == 0){
                mayor = matriz[i][j];
                filaMayor = i;
                columnaMayor = j;
            }else{
                if(matriz[i][j] > mayor){
                    mayor = matriz[i][j];
                    filaMayor = i;
                    columnaMayor = j;
                }
            }
        }
    }

    cout<<"Numero mayor: "<<mayor<<endl;
    cout<<"Posicion fila: "<<filaMayor+1<<endl;
    cout<<"Posicion columna: "<<columnaMayor+1<<endl;
}
