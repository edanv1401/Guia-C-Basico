#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
class Vehiculo{
    public:
    string model;
    string marca;
    Vehiculo(string n,string m){
        model=n;
        marca=m;
    }
    Vehiculo(){};
    void view(){
        cout<<marca<<": "<<model;
    }
    
};
class Auto:public Vehiculo{
    public:
    int ruedas;
    int puertas;
    Auto(){};
    Auto(int r,int p){
        ruedas=r;
        puertas=p;
    }
    void viewA(){
        view();
        cout<<"\n\truedas: "<<ruedas<<"\n\tpuertas: "<<puertas<<endl;
    }
};
class Moto:public Vehiculo{
    public:
    int ruedas;
    string cilindraje;
    Moto(){};
    Moto(int r,string c){
        ruedas=r;
        cilindraje=c;
    }
    void viewM(){
        view();
        cout<<"\n\truedas: "<<ruedas<<"\n\tcilindraje: "<<cilindraje<<endl;
    }
};
int main(){
    Auto carro{4,2};
    carro.marca="AUDI";
    carro.model=" SEDAN A4";
    carro.viewA();
    Moto moto{2,"999CC"};
    moto.marca="HONDA";
    moto.model="CBR 1000 SP1";
    moto.viewM();
}