#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("entrada.txt", "r", stdin);
    int n, q;
    string s;
    while(cin>>n)
    {
        cin.ignore();
        for(int j = 0; j < n; j++)
        {
            q = 0;
            stack<char> p1;
            getline(cin, s);
            for(int i = 0; i < s.size(); i++)
            {
                if(s[i] == '<')
                {
                    p1.push('<');
                }
                if(s[i] == '>' && not p1.empty())
                {
                    q++;
                    p1.pop();
                }
            }
            cout<<q<<"\n";
        }
    }
    return 0;
}