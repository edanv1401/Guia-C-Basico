///struct
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
struct Spersona{
    string nombre;
    int edad;
};

///class
class Cpersona{
public:
    string nombre;
    int edad;
    Cpersona();
    Cpersona(string,int);
};
Cpersona::Cpersona(){

}
Cpersona::Cpersona(string name,int old){
    nombre=name;
    edad=old;
}
int main(){
    Spersona p1{"Carlos Rodriguez",35};
    Cpersona p2{"Ana Perez",26};
}