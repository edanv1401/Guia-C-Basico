#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
struct Pokemon{
    string nombre;
    string tipo;
    string color;
    vector<string>kitHabilidades;
    void viewP(){
        cout<<tipo<<": "<<nombre<<" - "<<color<<"\n\t";
    }
};
int main (){
    vector<string>KGPikachu{"Elec. Estática","Para Rayos","Hierba Lazo"};
    Pokemon pikachu{"Pikachu","Electrico","Amarillo",KGPikachu};
    pikachu.viewP();
    for_each(pikachu.kitHabilidades.begin(),pikachu.kitHabilidades.end(),[](string h){
        cout<<h<<" ";
    });
    cout<<endl;
    vector<string>KGDitto{"Flexibilidad","Impostor"};
    Pokemon ditto{"Ditto","Transform","Morado",KGDitto};
    ditto.viewP();
    for_each(ditto.kitHabilidades.begin(),ditto.kitHabilidades.end(),[](string h){
        cout<<h<<" ";
    });
    cout<<endl;
}