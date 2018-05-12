#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n[100],n1[100],q=99;
    for(int i=0;i<100;i++){
        cin>>n[i];
        n1[i]=n[i];
    }
    sort(n,n+100);
    while(n[99]!=n1[q]){
        q--;
    }
    cout<<n[99]<<"\n"<<q+1<<"\n";
    return 0;
}