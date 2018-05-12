#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, som=0;
    string s;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s;
        stringstream ss1(s.substr(2,2));
        ss1 >> x;
        som += x;
        stringstream ss2(s.substr(5,3));
        ss2 >> x;
        som += x;
        stringstream ss3(s.substr(11,2));
        ss3 >> x;
        som += x;
        cout<<som<<"\n";
        som = 0;
    }
    return 0;
}