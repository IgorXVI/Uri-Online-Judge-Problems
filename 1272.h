#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    string s, ss;
    cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++)
    {
        getline(cin, s);
        q = s.size()/2;
        char c[q];
        q = 0;
        for(int i=0; i<s.size(); i++)
        {
            if((i==0 || s[i-1]==' ')&&(isalpha(s[i])))
            {
                c[q] = s[i];
                cout<<c[q];
                q++;
            }
        }
        s.resize(q+1);
        for(int i=0; i<q+1; i++){
            ss[i]=c[q];
        }
        ss[q]='\0';
        cout<<ss<<"\n";
    }
    return 0;
}