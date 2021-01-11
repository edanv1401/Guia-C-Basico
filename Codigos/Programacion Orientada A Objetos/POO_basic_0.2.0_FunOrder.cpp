struct person{
    string nombre;
    int edad;
};
bool order(person a,person b){
    return a.edad<b.edad;
}
vector<person>personas;
