#include <bits/stdc++.h>

using namespace std;

int main()
{
    int lin, n;
    while(cin>>n)
    {
        lin = (n/2)+3;
        char c[lin][n];
        for(int i=lin-1; i>=0; i--)
        {
            for(int j=0; j<n; j++)
            {
                if(i >= lin-2){
                    c[i][j] = ' ';
                }
                else{
                    c[i][j] = '*';
                }
            }
        }
        c[lin-2][n/2] = '*';
        c[lin-1][n/2] = '*';
        c[lin-1][(n/2)+1] = '*';
        c[lin-1][(n/2)-1] = '*';
        for(int i=lin-3; i>=0; i--)
        {
            for(int j=0; j<n; j++)
            {
                if((j < n/2 - i || j > n/2 + i) && j!=lin-3)
                {
                    c[i][j] = ' ';
                }
            }
        }
        for(int i=0; i<lin; i++)
        {
            for(int j=0; j<n; j++)
            {
                if (c[i][j]==' '){
                    if(j<n/2){
                        cout<<c[i][j];
                    }
                }
                else{
                    cout<<c[i][j];
                }
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}