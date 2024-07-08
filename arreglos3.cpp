//arreglos3.cpp
//Nina Estuco, William André
#include <iostream>
using namespace std;

int main(){
    int x; float TM, min=30;
    cout<<"LA TEMPERATURA DE LOS DIAS DE UNA SEMANA"<<endl;
    x=7;
    int Max[x], Min[x];
    for(int i=0; i<x; i++){
        switch(i){
            case 0:
                cout<<endl<<"Lunes"<<endl;
                break;
            case 1:
                cout<<endl<<"Martes"<<endl;
                break;
            case 2:
                cout<<endl<<"Miercoles"<<endl;
                break;
            case 3:
                cout<<endl<<"Jueves"<<endl;
                break;
            case 4:
                cout<<endl<<"Viernes"<<endl;
                break;
            case 5:
                cout<<endl<<"Sabado"<<endl;
                break;
            case 6:
                cout<<endl<<"Domingo"<<endl;
                break;
        }
        cout<<"Temperatura minima: "; 
        cin>>Min[i]; cout<<"°C";
        cout<<"Temperatura maxima: "; 
        cin>>Max[i]; cout<<"°C";
        TM=(Min[i]+Max[i])/2;
        cout<<"La temperatura media es "; 
        cout<<TM<<"°C";
        if(Min[i]<min){
            min=Min[i];
        }
    }
    system("pause");
    cout<<"El dia con menor temperatura es:";
    for(int j=0; j<x; j++){
        if(min==Min[j]){
            switch(j){
                case 0:
                    cout<<"\nLunes";
                    break;
                case 1:
                    cout<<"\nMartes";
                    break;
                case 2:
                    cout<<"\nMiercoles";
                    break;
                case 3:
                    cout<<"\nJueves";
                    break;
                case 4:
                    cout<<"\nViernes";
                    break;
                case 5:
                    cout<<"\nSabado";
                    break;
                case 6:
                    cout<<"\nDomingo";
                    break;
            }
        }
    }
    system("pause");
    int y, a=0;
    cout<<endl<<"Ingrese una temperatura: "; cin>>y;
    cout<<"°C";
    for(int k=0; k<x; k++){
        if(y==Max[k]){
            cout<<"Coincide con la temperatura maxima del dia ";
            switch(k){
                case 0:
                    cout<<"lunes. ";
                    break;
                case 1:
                    cout<<"martes. ";
                    break;
                case 2:
                    cout<<"miercoles. ";
                    break;
                case 3:
                    cout<<"jueves. ";
                    break;
                case 4:
                    cout<<"viernes. ";
                    break;
                case 5:
                    cout<<"sabado. ";
                    break;
                case 6:
                    cout<<"domingo. ";
                    break;
            }
        a++;
        }
    }
    if(a==0){
        cout<<"No coincide con ninguna temperatura maxima."<<endl;
    }
    return 0;
}