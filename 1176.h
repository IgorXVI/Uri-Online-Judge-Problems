#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y;
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>y;
            long long int M[y+1];
            for(int j=0;j<=y;j++){
                if(j==0 or j==1){
                    M[j]=j;
                }
                else{
                    M[j]=M[j-1]+M[j-2];
                }
            }
            cout<<"Fib("<<y<<") = "<<M[y]<<"\n";
    }
    return 0;
}