#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    while(cin>>n)
    {
        long long int m[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                m[i][j]=0;
                if(i==j)
                {
                    m[i][j]=2;
                }
                if(i+j==n-1)
                {
                    m[i][j]=3;
                }
                if(i>=n/3 and i<n-n/3 and j>=n/3 and j<n-n/3)
                {
                    m[i][j]=1;
                }
                if(n%2!=0 and i==(n-1)/2 and j==(n-1)/2)
                {
                    m[i][j]=4;
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<m[i][j];
                if(j==n-1)
                {
                    cout<<"\n";
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}