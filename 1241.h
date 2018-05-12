#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, len, len1;
    string s1, s2, ss1, ss;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s1>>s2;
        if(s1 == s2)
        {
            cout<<"encaixa\n";
        }
        else
        {
            if(s1.length() < s2.length())
            {
                cout<<"nao encaixa\n";
            }
            else
            {
                len = s1.length();
                len1 = s2.length();
                ss = s2;
                ss1 = s1.substr(len - len1, len1);

                if(ss1 == ss)
                {
                    cout<<"encaixa\n";
                }
                else
                {
                    cout<<"nao encaixa\n";
                }
            }
        }
    }
    return 0;
}