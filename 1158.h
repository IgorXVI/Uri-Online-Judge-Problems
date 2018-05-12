#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,a,b,som;
    cin>>x;
    for(int i=0;i<x;i++){
        som=0;
        cin>>a>>b;
        while(b>0){
            if(a%2!=0){
                som+=a;
                b--;
            }
            a++;
        }
        cout<<som<<"\n";
    }
    return 0;
}