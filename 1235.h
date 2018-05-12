#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s, ss1, ss2;
    cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++){
        getline(cin, s);
        reverse(s.begin(), s.end());
        ss1 = s.substr(0, s.length()/2);
        ss2 = s.substr(s.length()/2, s.length()/2);
        s = ss2 + ss1;
        cout<<s<<"\n";
    }
    return 0;
}