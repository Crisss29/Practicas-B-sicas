#include <iostream>
using namespace std;

int main(){
    int matriz[4][4];
    int positivos = 0, negativos = 0, ceros = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout<<"Ingrese el valor ["<<i+1<<"]["<<j+1<<"]: ";
            cin>>matriz[i][j];
            if(matriz[i][j] > 0){
                positivos++;
            }else if(matriz[i][j] < 0){
                negativos++;
            }else{
                ceros++;
            }
        }
    }

    cout<<"Valores positivos: "<<positivos<<endl;
    cout<<"Valores negativos: "<<negativos<<endl;
    cout<<"Valores iguales a cero: "<<ceros<<endl;
}
