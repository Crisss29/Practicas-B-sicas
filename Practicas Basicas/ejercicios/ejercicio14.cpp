#include <iostream>
using namespace std;

int main(){
    float calificaciones[10];
    float promedio;
    int aprobados = 0, reprobados = 0;
    for (int i = 1; i <= 10; i++){
        
        cout<<"Ingrese la calificacion "<<i<<" (0-10): ";
        cin>>calificaciones[i];
        promedio += calificaciones[i]/4;
        if (calificaciones[i] >= 7){
            aprobados+=1;
        }
        else{
            reprobados+=1;
        }
    }
    cout<<"\nLos estudiantes aprobados son: "<<aprobados<<endl;
    cout<<"El numero a estudiantes reprobados son: "<<reprobados<<endl;
}
