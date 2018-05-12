#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,x;
    cin>>x;
    for(int y=0; x>y; y++)
    {
        int r=1;
        cin>>a>>b;
        while(r!=0)
        {
            r=b%a;
            b=a;
            a=r;
        }
        cout<<b<<"\n";
    }
    return 0;
}