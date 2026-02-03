#include <iostream>
using namespace std;

int main(){
    float notas[10];
    float suma = 0, promedio;
    float mayor, menor;
    int aprobados = 0, reprobados = 0;
    float pAprobados, pReprobados;

    for(int i = 0; i < 10; i++){
        cout<<"Ingrese la nota "<<i+1<<": ";
        cin>>notas[i];
        suma += notas[i];

        if(i == 0){
            mayor = notas[i];
            menor = notas[i];
        }else{
            if(notas[i] > mayor) mayor = notas[i];
            if(notas[i] < menor) menor = notas[i];
        }

        if(notas[i] >= 7){
            aprobados++;
        }else{
            reprobados++;
        }
    }

    promedio = suma / 10;
    pAprobados = aprobados * 100/ 10;
    pReprobados = reprobados * 100/ 10;

    cout<<"Promedio general: "<<promedio<<endl;
    cout<<"Nota mas alta: "<<mayor<<endl;
    cout<<"Nota mas baja: "<<menor<<endl;
    cout<<"Porcentaje de aprobados: "<<pAprobados<<"%"<<endl;
    cout<<"Porcentaje de reprobados: "<<pReprobados<<"%"<<endl;
}
