#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,aux,som=0;
    cin>>x>>y;
    if(y>x){
        aux=y;
        y=x;
        x=aux;
    }
    for(int i=y+1;i<x;i++){
        if(i%2!=0){
            som+=i;
        }
    }
    cout<<som<<"\n";
    return 0;
}