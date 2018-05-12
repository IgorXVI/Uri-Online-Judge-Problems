#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,a,b,som,aux;
    cin>>x;
    for(int i=0;i<x;i++){
        som=0;
        aux=0;
        cin>>a>>b;
        if(b>a){
            aux=b;
            b=a;
            a=aux;
        }
        for(int i=b+1;i<a;i++){
            if(i%2!=0){
                som+=i;
            }
        }
        cout<<som<<"\n";
    }
    return 0;
}