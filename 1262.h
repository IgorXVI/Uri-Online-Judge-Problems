#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    int n, q, c;
    while(cin>>s>>n)
    {
        c = 0;
        q = 0;
        for (int i = 0; i < s.size(); i++)

        {

            if(s[i] == 'R')
            {

                if( q == 0){
                    c++;
                }
                q++;

                if(q == n){
                    q = 0;
                }
            }
            else
            {
                c++;
                q = 0;
            }

        }

        cout<<c<<"\n";
    }
    return 0;
}