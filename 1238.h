#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q, len, len1;
    string s1, s2, ss1;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s1>>s2;
        if(s1.length() > s2.length())
        {
            len = s1.length();
            len1 = s2.length();
            ss1 = s1.substr(len1, len - len1);
        }
        else
        {
            len = s2.length();
            len1 = s1.length();
            ss1 = s2.substr(len1, len - len1);
        }
        char ss[len + len1];
        q=0;
        for(int i=0; i<len1; i++)
        {
            ss[q]=s1[i];
            ss[q+1]=s2[i];
            q+=2;
        }
        if(len1 != len)
        {
            q=0;
            for(int i=len1*2; i<len + len1; i++)
            {
                ss[i] = ss1[q];
                q++;
            }
        }
        for(int i=0; i<len + len1; i++)
        {
            cout<<ss[i];
        }
        cout<<"\n";
    }
    return 0;
}