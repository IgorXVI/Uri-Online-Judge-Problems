#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,i=0,o=0;
    cin>>x;
    for(int i1=0;i1<x;i1++){
        cin>>y;
        if((y>=10)&&(y<=20)){
            i++;
        }
        else{
            o++;
        }
    }
    cout<<i<<" in\n"<<o<<" out\n";
    return 0;
}