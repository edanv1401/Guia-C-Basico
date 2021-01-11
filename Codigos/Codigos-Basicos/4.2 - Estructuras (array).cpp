#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main (){
    array<int,5>myarr{5,4,3,2,1};
    ///acceder a los datos por []
    for(int i=0;i<myarr.size();i++){
        cout<<myarr[i]<<" ";
    }
    cout<<endl;
    ///acceder al primer y ultimo dato
    int primero=myarr.front();
    int ultimo=myarr.back();
    cout<<primero<<" "<<ultimo<<endl;
    ///ordenamiento
    sort(myarr.begin(),myarr.end());
    for(int i:myarr){
        cout<<i<<" ";
    }
}
