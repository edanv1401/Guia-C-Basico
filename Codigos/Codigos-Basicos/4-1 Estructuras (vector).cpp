#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main (){
    vector<int>myvec{7,5,9,453,1,8};
    ///insertar un dato al vector
    myvec.push_back(23);
    ///primer y ultimo dato del vector
    int primero=*myvec.begin();
    int ultimo=*myvec.end();
    cout<<primero<<" "<<ultimo<<endl;
    ///iterator
    vector<int>::iterator it=myvec.begin();
    for(it=myvec.begin();it!=myvec.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    ///ordenamiento de menor a mayor
    sort(myvec.begin(),myvec.end());
    ///recorrer el vector normal
    for(int i=0;i<myvec.size();i++){
        cout<<myvec[i]<<" ";
    }
    ///borrar todos los datos del vector
    myvec.clear();
}
