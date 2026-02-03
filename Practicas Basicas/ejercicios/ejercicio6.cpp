#include <iostream>
using namespace std;

int main(){
    for (size_t i = 1; i<=20;i++){
        if (i % 2 == 0){
            cout<<i<<" | Par"<<endl;
        }
        else{
            cout<<i<<" | Impar"<<endl;
        }
    }
    
}
