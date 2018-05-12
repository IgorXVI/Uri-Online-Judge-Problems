#include <bits/stdc++.h>

using namespace std;

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
    int n, o;
    cin>>o;
    for(int i=0; i<o; i++)
    {
        cin>>n;
        if(ehprimo(n))
        {
            cout<<"Prime\n";
        }
        else
        {
            cout<<"Not Prime\n";
        }
    }
    return 0;
}