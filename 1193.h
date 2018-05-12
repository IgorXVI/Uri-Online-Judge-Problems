#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,n;
    string s1,s2;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s1>>s2;
        cout<<"Case "<<i+1<<":\n";
        if(s2[0]=='b')
        {
            cout<<dec;
            x=strtol(s1.c_str(),NULL,2);
            if(x>=2147483647)
            {
                cout<<-3<<" dec\n";
                cout<<"fffffffd hex\n";
            }
            else
            {
                cout<<dec<<strtol(s1.c_str(),NULL,2)<<" dec\n";
                cout<<hex<<strtol(s1.c_str(),NULL,2)<<" hex\n";
            }
        }
        if(s2[0]=='d')
        {
            x=strtol(s1.c_str(),NULL,10);
            if(x>=2147483647)
            {
                cout<<"fffffffd hex\n";
                cout<<" bin\n";
            }
            else
            {
                int j;
                cout<<hex<<strtol(s1.c_str(),NULL,10)<<" hex\n";
                x=strtol(s1.c_str(),NULL,10);
                for(j=1; j<=x; j*=2);
                j/=2;
                while(j!=0)
                {
                    cout<<x/j;
                    x%=j;
                    j/=2;
                }
                cout<<" bin\n";
            }
        }
        if(s2[0]=='h')
        {
            cout<<dec;
            x=strtol(s1.c_str(),NULL,16);
            if(x>=2147483647)
            {
                cout<<-3<<" dec\n";
                cout<<" bin\n";
            }
            else
            {
                int j;
                cout<<x<<" dec\n";
                for(j=1; j<=x; j*=2);
                j/=2;
                while(j!=0)
                {
                    cout<<x/j;
                    x%=j;
                    j/=2;
                }
                cout<<" bin\n";
            }
        }
        cout<<dec;
        cout<<"\n";
    }
    return 0;
}