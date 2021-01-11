///struct
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
