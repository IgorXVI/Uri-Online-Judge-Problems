#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,aux,x,y,z;
    cin>>a>>b>>c;
    x=a;
    y=b;
    z=c;
    if(a>b){
        aux=a;
        a=b;
        b=aux;
    }
    if(b>c){
        aux=b;
        b=c;
        c=aux;
    }
    if(a>b){
        aux=a;
        a=b;
        b=aux;
    }
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    cout<<"\n"<<x<<"\n"<<y<<"\n"<<z<<"\n";
    return 0;
}