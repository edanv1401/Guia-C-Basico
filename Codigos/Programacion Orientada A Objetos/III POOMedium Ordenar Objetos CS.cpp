#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
///struct
struct person{
    string nombre;
    int edad;
};

///class
class Cpersona{
public:
    string nombre;
    int edad;
    Cpersona(){};
    Cpersona(string,int);
};
Cpersona::Cpersona(string name,int old){
    nombre=name;
    edad=old;
}

bool order(person a,person b){
    return a.edad<b.edad;
}
vector<person>personas;
int main (){
    personas.push_back({"Edwin",18});
    personas.push_back({"Daniel",18});
    personas.push_back({"Julian",19});
    personas.push_back({"Diego",23});
    sort(personas.begin(),personas.end(),order);
    for(int i=0;i<personas.size();i++){
        cout<<personas[i].nombre<<" "<<personas[i].edad<<endl;
    }
}
