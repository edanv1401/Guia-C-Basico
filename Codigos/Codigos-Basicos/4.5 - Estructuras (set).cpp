#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main (){
    set<string>myset;
    ///insertamos datos al set
    /*
    el set no repite datos
    */
    myset.insert("Moras");
    myset.insert("Banana");
    myset.insert("Fresas");
    myset.insert("Cerezas");
    ///Insertamos un dato ya existente
    myset.insert("Moras");
    ///la fruta esta presente?
    if(myset.count("Fresas")!=0){
        cout<<"Esta presente"<<endl;
    }else{
        cout<<"No esta presente"<<endl;
    }
    ///eliminar una fruta
    myset.erase("Fresas");
    if(myset.count("Fresas")!=0){
        cout<<"Esta presente"<<endl;
    }else{
        cout<<"No esta presente"<<endl;
    }
    ///Verificar si esta el Coco
    if(myset.count("Coco")!=0){
        cout<<"Esta presente"<<endl;
    }else{
        cout<<"No esta presente"<<endl;
    }
    myset.clear();
}
