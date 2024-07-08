//arreglos4.cpp
//Nina Estuco, William André
#include <iostream>
using namespace std;

void multiplos(int a, int b);

int main(){
    int x, y;
    cout<<"Cantidad de elementos del arreglo: ";
    cin>>x;
    cout<<"Ingrese el multiplo: ";
    cin>>y;
    cout<<"Los elementos de arreglo son: "<<endl;
    multiplos(x, y);
    return 0;
}

void multiplos(int a, int b){
    int A[a];
    for(int i=0; i<a; i++){
        A[i]=b*(i+1);
        cout<<"El elemento "<<i+1<<" es "<<A[i]<<endl;
    }
}