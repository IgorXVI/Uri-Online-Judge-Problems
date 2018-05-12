#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool upper, first;
    string s;
    while(getline(cin, s))
    {
        first = true;
        for(int i=0; i<s.length(); i++)
        {
            if(isalpha(s[i]))
            {
                if(first == true)
                {
                    s[i] = toupper(s[i]);
                    upper = true;
                    first = false;
                }
                else
                {
                    if(upper == true)
                    {
                        s[i] = tolower(s[i]);
                        upper = false;
                    }
                    else
                    {
                        s[i] = toupper(s[i]);
                        upper = true;
                    }
                }
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}