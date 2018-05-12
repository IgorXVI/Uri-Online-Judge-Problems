#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,q;
    cin>>n;
    while(n!=0)
    {
        int m[n][n];
        for(int i=0; i<n; i++)
        {
            q=1;
            for(int j=0; j<n; j++)
            {
                if(j==i-q+1 or i==j-q+1)
                {
                    m[i][j]=q;
                    q=1;
                }
                else
                {
                    j--;
                    q++;
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<setw(3)<<m[i][j];
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