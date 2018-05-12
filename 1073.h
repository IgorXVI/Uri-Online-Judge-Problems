#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;
    for(int i=2;i<=x;i++){
        if(i%2==0){
            cout<<i<<"^2 = "<<fixed<<setprecision(0)<<pow(i,2)<<"\n";
        }
    }
    return 0;
}