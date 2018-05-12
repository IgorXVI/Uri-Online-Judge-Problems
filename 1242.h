#include <bits/stdc++.h>

using namespace std;

char oposto(char c)
{
    if(c == 'S')
    {
        return 'B';
    }
    if(c == 'B')
    {
        return 'S';
    }
    if(c == 'F')
    {
        return 'C';
    }
    if(c == 'C')
    {
        return 'F';
    }
    return '0';
}

int main()
{
    //freopen("entrada.txt", "r", stdin);
    int q, tam;
    string s;
    while(cin>>s)
    {
        q = 0;
        tam = s.size();
        for(int i = 0; i < tam; i++)
        {
            if( s[i] == oposto( s[i + 1] ) )
            {
                s.erase(i, 2);
                q++;
                tam -= 2;
                i = -1;
            }
        }
        cout<<q<<"\n";
    }
    return 0;
}