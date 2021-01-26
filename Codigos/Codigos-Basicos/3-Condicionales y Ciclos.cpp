#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main() {
    int a=3,b=4;
    ///condicional if y else
    if(b>a){
        cout<<"3 es menor que 4"<<endl;
    }
    else if(a==b){
        //falso
        cout<<"3 es igual que 4"<<endl;
    }
    else{
        //falso
        cout<<"3 es mayor que 4"<<endl;
    }
    ///operacion ternaria
    cout<<(a>b?"3 es mayor que 4":"4 es mayor que 3")<<endl;
    ///ciclo for
    int fin = 5;//condicion de disparo
    for(int inicial = 0 ; inicial < fin ; inicial++){
        cout<<inicial<<" ";
    }
    cout<<endl;
    //for al reves
    for(int inicial = fin ; inicial > 0 ; inicial--){
        cout<<inicial<<" ";
    }
    cout<<endl;
    ///ciclo while
    while(fin--){
        cout<<fin<<" ";
    }
}
