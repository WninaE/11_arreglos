//arreglos2.cpp
//Nina Estuco, William André
#include <iostream>
using namespace std;

int main(){
    int x, y, z;
    cout<<"ARREGLO PRINCIPAL"<<endl;
    cout<<"Cantidad de elementos del arreglo principal: ";
    cin>>x;
    y=0; z=0;

    int Aprin[x], Apar[x], Aimpar[x];
    for(int i=0; i<x; i++){
        cout<<"Ingrese elemento["<<i+1<<"]:\t"; 
        cin>>Aprin[i];
        if(Aprin[i]%2==0){
            Apar[y]=Aprin[i];
            y++;
        } else{
            Aimpar[z]=Aprin[i];
            z++;
        }
    }
    system("pause");
    cout<<endl<<"ARREGLO SECUNDARIO (PAR)"<<endl;
    for(int j=0; j<y; j++){
        cout<<"Elemento["<<j+1<<"]:\t"<<Apar[j]<<endl;
    }
    system("pause");
    cout<<endl<<"ARREGLO SECUNDARIO (IMPAR)"<<endl;
    for(int k=0; k<z; k++){
        cout<<"Elemento["<<k+1<<"]:\t"<<Aimpar[k]<<endl;
    }
    system("pause");
    return 0;
}