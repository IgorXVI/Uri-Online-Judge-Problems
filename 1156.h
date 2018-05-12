#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n=1,d=1,som=0;
    while(n<=39){
        som+=n/d;
        n+=2;
        d*=2;
    }
    cout<<fixed<<setprecision(2)<<som<<"\n";
    return 0;
}