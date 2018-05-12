#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,som=0,q=0;
    cin>>x>>y;
    while(y<=x){
        cin>>y;
    }
    for(int i=x;i<x+y;i++){
        som+=i;
        q++;
        if(som>=y){
            break;
        }
    }
    cout<<q<<"\n";
    return 0;
}