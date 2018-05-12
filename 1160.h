#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,a,b,anos=0;
    float ca,cb;
    cin>>x;
    for(int i=0;i<x;i++){
        anos=0;
        cin>>a>>b>>ca>>cb;
        while((b>=a)&&(anos<=100)){
            b+=b*cb/100;
            a+=a*ca/100;
            anos++;
        }
        if(anos>100){
            cout<<"Mais de 1 seculo.\n";
        }
        else{
            cout<<anos<<" anos.\n";
        }
    }
    return 0;
}