#include <bits/stdc++.h>

using namespace std;

int main()
{
    double L,m[12][12],d,som;
    char c;
    cin>>L>>c;
    if(c=='M'){
        d=12.0;
    }
    else{
        d=1.0;
    }
    som=0;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>m[i][j];
            if(i==L){
                som+=m[i][j];
            }
        }
    }
    cout<<fixed<<setprecision(1)<<som/d<<"\n";
    return 0;
}