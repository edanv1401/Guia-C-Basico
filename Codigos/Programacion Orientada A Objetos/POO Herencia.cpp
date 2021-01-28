#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
class ArtesdeControl{
    public:
    void view(string nacion){
        cout<<"Arte de control de "<<nacion<<endl;
    }
};
class Nacion:public ArtesdeControl{
    public:
    string nacion;
    Nacion(){};
    Nacion(string nacion){
        nacion=nacion;
    }
};
int main(){
    Nacion fuego;
    fuego.nacion="Fuego";
    fuego.view(fuego.nacion);
}