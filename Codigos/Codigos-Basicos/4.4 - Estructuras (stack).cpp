#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main (){
    stack<string>pila;
    pila.push("Camisa");
    pila.push("Pantalon");
    pila.push("Bufanda");
    pila.push("Gorra");
    pila.push("Saco");
    /*
    Saco Gorra Bufanda Pantalon Camisa
    Gorra Bufanda Pantalon Camisa
    Bufanda Pantalon Camisa
    Pantalon Camisa
    Camisa
    */
    ///mientras la pila no este vacia
    while(!pila.empty()){
        ///dato que este de ultimas
        cout<<pila.top()<<endl;
        ///elimina el dato que esta de ultimas
        pila.pop();
    }
}
