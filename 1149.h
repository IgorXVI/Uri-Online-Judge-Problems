#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,q=0;
    cin>>x>>y;
    while(y<=0){
        cin>>y;
    }
    for(int i=x;i<x+y;i++){
        q+=i;
    }
    cout<<q<<"\n";
    return 0;
}