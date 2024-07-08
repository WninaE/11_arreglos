//arreglos5.cpp
//Nina Estuco, William André
#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, b;
    cout<<"FUNDAMENTOS DE PROGRAMACION"<<endl;;
    cout<<"Cantidad de estudiantes en el aula: ";
    cin>>a;
    string FP[999];
    cout<<"Ingrese los nombres de los estudiantes:"<<endl;
    for(int i=0; i<a; i++){
        cout<<i+1<<".- "; cin>>FP[i];
    }
    system("pause");
    cout<<"PROGRAMACION GRAFICA"<<endl;
    cout<<"Cantidad de estudiantes en el aula: ";
    cin>>b;
    string PG[999];
    cout<<"Ingrese los nombres de los estudiantes:"<<endl;
    for(int j=0; j<b; j++){
        cout<<j+1<<".- "; cin>>PG[j];
    }
    int c=0; string AC[999];
    for(int k=0; k<a; k++){
        for(int l=0; l<b; l++){
            if(FP[k]==PG[l]){
                AC[c]=FP[k];
                c++;
            }
        }
    }
    system("pause");
    if(c>0){
        cout<<"ESTUDIANTES COMUNES"<<endl;
        for(int m=0; m<c; m++){
            cout<<m+1<<".- "<<AC[m]<<endl;
        }
        cout<<"Los estudiantes comunes son: ";
        cout<<c;
    }
    else{
        cout<<"No hay estudiantes comunes";
    }
    return 0;
}