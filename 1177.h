#include <bits/stdc++.h>

using namespace std;


void qq(int arr[1000], int x)
{
    int q=0;
    for(int i=0;i<1000;i++){
        arr[i]=q;
        q++;
        if(q==x){
            q=0;
        }
    }
}

int main()
{
    int M[1000],x;
    cin>>x;
    qq(M,x);
    for(int i=0;i<1000;i++){
        cout<<"N["<<i<<"] = "<<M[i]<<"\n";
    }
    return 0;
}