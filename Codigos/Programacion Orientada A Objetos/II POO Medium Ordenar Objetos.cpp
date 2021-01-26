#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
///struct
struct person{
    string nombre;
    int edad;
    bool operator <(person &o){
        return edad<o.edad;
    }
};
vector<person>personas;
int main (){
    personas.push_back({"Edwin",18});
    personas.push_back({"Daniel",18});
    personas.push_back({"Julian",19});
    personas.push_back({"Diego",23});
    sort(personas.begin(),personas.end());
    for(int i=0;i<personas.size();i++){
        cout<<personas[i].nombre<<" "<<personas[i].edad<<endl;
    }
}
