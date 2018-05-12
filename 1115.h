#include <bits/stdc++.h>

using namespace std;

string quadrante(int n1, int n2)
{
    if(n1>0 && n2>0){
        return "primeiro";
    }
    if(n1>0 && n2<0){
        return "quarto";
    }
    if(n1<0 && n2>0){
        return "segundo";
    }
    if(n1<0 && n2<0){
        return "terceiro";
    }
}

int main()
{
    int x,y;
    cin>>x>>y;
    while(x!=0 && y!=0){
       cout<<quadrante(x,y)<<"\n";
       cin>>x>>y;
    }
    return 0;
}