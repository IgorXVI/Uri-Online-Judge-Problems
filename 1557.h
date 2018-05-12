#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,q,p;
    cin>>n;
    while(n!=0)
    {
        long long int m[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                m[i][j]=pow(2,(i+j));
            }
        }
        q=10;
        p=1;
        while(m[n-1][n-1]/q!=0)
        {
            q*=10;
            p++;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<setw(p)<<m[i][j];
                if(j==n-1)
                {
                    cout<<"\n";
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout<<"\n";
        cin>>n;
    }
    return 0;
}