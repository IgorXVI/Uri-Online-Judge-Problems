#include <bits/stdc++.h>

using namespace std;

int potencia(int n1, int n2)
{
    int q=1;
    for(int i=0; i<n2; i++){
        q*=n1;
    }
    return q;
}

int main()
{
    int x;
    cin>>x;
    for(int i=1; i<=x; i++){
       cout<<i<<" "<<potencia(i,2)<<" "<<potencia(i,3)<<"\n";
       cout<<i<<" "<<potencia(i,2)+1<<" "<<potencia(i,3)+1<<"\n";
    }
    return 0;
}