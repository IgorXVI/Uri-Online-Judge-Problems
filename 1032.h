#include <bits/stdc++.h>

using namespace std;

int f(int n, int mn, int arr[])
{
    int k = arr[mn - n];
    if (n == 1){
        return 1;
    }
    return ( (f(n - 1, mn, arr) + k - 1) % n ) + 1;
}

bool ehprimo(int x)
{
    int y=sqrt(x);
    for(int i=2; i<=y; i++)
    {
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    //freopen("entrada.txt","r",stdin);
    int primo, divisores, vitimas, q, primos[3502];
    q = 0;
    primo = 2;
    while(q < 3502){
        if(ehprimo(primo)){
            primos[q] = primo;
            q++;
        }
        primo++;
    }
    cin>>vitimas;
    while(vitimas != 0){
        cout<<f(vitimas, vitimas, primos)<<"\n";
        cin>>vitimas;
    }
    return 0;
}