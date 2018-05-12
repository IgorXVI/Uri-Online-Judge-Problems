#include <bits/stdc++.h>

using namespace std;

int f(int n, int k)
{
    if (n == 1){
        return 1;
    }
    return ( (f(n - 1, k) + k - 1) % n ) + 1;
}

int main()
{
    //freopen("entrada.txt","r",stdin);
    int regioes, q;
    cin>>regioes;
    while(regioes != 0){
        q = 1;
        while(f(regioes - 1, q) + 1 != 13){
            q++;
        }
        cout<<q<<"\n";
        cin>>regioes;
    }
    return 0;
}