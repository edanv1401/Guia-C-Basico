#include<bits/stdc++.h>
#include <cstdlib>
using namespace std;
struct person{
    string nombre;
    int edad;
};
bool order(person a,person b){
    return a.edad<b.edad;
}

int main(){
    vector<person>personas;
    personas.push_back({"Juan",25});
    personas.push_back({"Andrea",19});
    personas.push_back({"Julian",20});
    sort(personas.begin(),personas.end(),order);
    for(person persona:personas){
        cout<<persona.nombre<<" : "<<persona.edad<<endl;
    }
}