#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main (){
    list<int>lista;
    for(int i=0;i<10;i++){
        ///los numeros pares a la derecha
        if((i+1)%2==0){
            lista.emplace_back((i+1));
        }
        ///los numeros impares a la izquierda
        else{
            lista.emplace_front((i+1));
        }
    }
    int primero=lista.front();
    int ultimo=lista.back();
    cout<<primero<<" "<<ultimo<<endl;
    for(auto a:lista){
        cout<<a<<" ";
    }
    list<int>::iterator it=lista.begin();
    /*
    9 7 5 3 1 2 4 6 8 10
    ^
    */
    it++;
    it++;
    /*
    9 7 5 3 1 2 4 6 8 10
        ^
    */
    it=lista.erase(it);
    /*
    9 7 X 3 1 2 4 6 8 10
        ^
    */
    cout<<endl;
    for(auto a:lista){
        cout<<a<<" ";
    }
    lista.clear();
}
