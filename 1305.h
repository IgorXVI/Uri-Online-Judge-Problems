#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x, y, z;
    int f, len;
    string s, ss, s1, ss1;
    while(cin>>x>>y){
        f = (long long) x;
        if(x-f > y){
            cout<<f + 1LL<<"\n";
        }
        else{
            cout<<f<<"\n";
        }
    }
    return 0;
}