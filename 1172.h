#include <bits/stdc++.h>

using namespace std;


void q(int arr[10])
{
    for(int i=0; i<10; i++)
    if(arr[i]<=0){
        arr[i]=1;
    }
}

int main()
{
    int X[10];
    for(int i=0;i<10;i++){
        cin>>X[i];
    }
    q(X);
    for(int i=0;i<10;i++){
        cout<<"X["<<i<<"] = "<<X[i]<<"\n";
    }
    return 0;
}