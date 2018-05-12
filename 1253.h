#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p;
    string s;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        cin>>p;
        for(int j=0; j<s.length(); j++){
            s[j] = s[j] - p;
            if (s[j] < 65){
                s[j] = 91 - 65 + s[j];
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}