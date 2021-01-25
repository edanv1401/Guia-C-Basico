#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int autoincrement(int x){
    return x++;
}
int main (){
    valarray<int>varr{2,3,4,4,3,2,34,5,4};
    int total=varr.sum();
    varr.apply(autoincrement);
    cout<<total<<endl;
    int menor=varr.min();
    int mayor=varr.max();
    int n=varr.size();
    for(int i:varr){
        cout<<i<<" ";
    }
    cout<<endl;
}
