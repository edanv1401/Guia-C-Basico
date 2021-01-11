#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main (){
    queue<string>cola;
    cola.push("Juan");
    cola.push("Daniel");
    cola.push("Miguel");
    cola.push("Geraldine");
    cola.push("Laura");
    cola.push("Diego");
    /*
    Juan Daniel Miguel Geraldine Laura Diego
    Daniel Miguel Geraldine Laura Diego
    Miguel Geraldine Laura Diego
    Geraldine Laura Diego
    Laura Diego
    Diego
    */
    ///mientras la cola no este vacia
    while(!cola.empty()){
        ///dato que este de primeras
        cout<<cola.front()<<endl;
        ///elimina el dato que esta de primeras
        cola.pop();
    }
}
