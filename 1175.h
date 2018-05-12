#include <bits/stdc++.h>

using namespace std;


void q(int arr[10], int a, int b)
{
    arr[a]=b;
}

int main()
{
    int n,N[20];
    for(int i=19;i>=0;i--){
        cin>>n;
        q(N,i,n);
    }
    for(int i=0;i<20;i++){
        cout<<"N["<<i<<"] = ";
        cout<<N[i]<<"\n";
    }
    return 0;
}