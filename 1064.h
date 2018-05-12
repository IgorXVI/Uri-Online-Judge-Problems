#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n,q=0,som=0;
    for(int i=0;i<6;i++){
        cin>>n;
        if(n>0){
            q++;
            som+=n;
        }
    }
    cout<<q<<" valores positivos\n"<<fixed<<setprecision(1)<<som/q<<"\n";
    return 0;
}