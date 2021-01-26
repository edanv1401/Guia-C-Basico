#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main(){
    string nombre;
    int edad;
    /*
        leer un string y luego un numero
        esto hace que se pierda el segundo dato
        cin>>nombre>>edad;
        ------------------
        Manuel 18
        nombre :manuel
        edad : ??
        -----------------
        esto se soluciona despues de leer el string
        usamos cin.ignore()
                ------------------
        Manuel 18
        nombre :manuel
        edad : 18
        -----------------
    */
    cin>>nombre;
    cin.ignore();
    cin>>edad;
    cout<<nombre<<" : "<<edad<<endl;

}