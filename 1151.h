#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int y[x];
    for(int i=0;i<x;i++){
        if((i==0)||(i==1)){
            cout<<i;
            y[i]=i;
        }
        else{
            y[i]=y[i-1]+y[i-2];
            cout<<y[i];
        }
        if(i!=x-1){
            cout<<" ";
        }
        else{
            cout<<"\n";
        }
    }
    return 0;
}