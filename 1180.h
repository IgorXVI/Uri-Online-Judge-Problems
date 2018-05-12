#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,m,q;
    cin>>x;
    int n[x];
    for(int i=0;i<x;i++){
        cin>>n[i];
        if(i==0){
            m=n[i];
        }
        if(n[i]<m){
            m=n[i];
        }
    }
    q=0;
    while(m!=n[q]){
        q++;
    }
    cout<<"Menor valor: "<<m<<"\n";
    cout<<"Posicao: "<<q<<"\n";
    return 0;
}