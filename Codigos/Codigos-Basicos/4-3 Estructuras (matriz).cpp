#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
const int n=3;
int main(){
    int matriz[n][n];
    int cont=0;
    vector<vector<int>>matriz_V(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matriz[i][j]=cont++;
            matriz_V[i].push_back(cont-1);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"------------"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matriz_V[i][j]<<" ";
        }
        cout<<endl;
    }
}