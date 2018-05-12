#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y;
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>y;
        if(y==0){
            cout<<"NULL";
        }
        else{
            if(y%2==0){
                cout<<"EVEN ";
            }
            else{
                cout<<"ODD ";
            }
            if(y>0){
                cout<<"POSITIVE";
            }
            else{
                cout<<"NEGATIVE";
            }
        }
        cout<<"\n";
    }
    return 0;
}