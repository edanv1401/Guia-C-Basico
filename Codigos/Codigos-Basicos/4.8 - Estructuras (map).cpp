#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main (){
    map<char,string>mapa;
    mapa.insert({'b',"Banana"});
    mapa.insert({'c',"Coco"});
    mapa.insert({'d',"Diamond"});
    mapa.insert({'e',"Esmerald"});
    cout<<(mapa.count('a')>0?("El valor de a : "+mapa.find('a')->second):"No existe valor para :a")<<endl;
    cout<<(mapa.count('b')>0?("El valor de b : "+mapa.find('b')->second):"No existe valor para :b")<<endl;
    mapa.erase('b');//eliminar clave y valor
    for(auto it:mapa){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
    int n=mapa.size();
    mapa.clear();
}
