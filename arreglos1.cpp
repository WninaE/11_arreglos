//arreglos1.cpp
//Nina Estuco, William André
#include <iostream>
using namespace std;

int main(){
    int n, S, c, P; int arreglo[n];
    cout<<"Cantidad de elementos del arreglo: ";
    cin>>n;
    S=0;
    c=0;
    for(int i=0; i<=n; i++){
        cout<<"Ingrese el elemento "<<i<<" : ";        
        cin>>arreglo[i];
        S=S+arreglo[i];
        if (arreglo[i]==0){
            c=c+1;
        }
    }
    P=c*100/n;
    cout<<"La sumatoria de los elementos es "<<S<<endl;
    cout<<"El porcentaje de elementos cero es el "<<P<<"%"<<endl;
    return 0;
}
