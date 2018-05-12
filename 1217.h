#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ss,n[365];
    double d,v[365],m1=0,m2=0;
    string s;
    cin>>d;
    for(int i=0;i<d;i++){
        cin>>v[i];
        m2+=v[i];
        cin.ignore();
        getline(cin,s);
        ss=s.size();
        n[i]=1;
        for(int i1=0;i1<ss;i1++){
            if(s[i1]==32){
                n[i]++;
            }
        }
        m1+=n[i];
        cout<<"day "<<i+1<<": "<<n[i]<<" kg\n";
    }
    cout<<fixed<<setprecision(2)<<m1/d<<" kg by day\n"<<"R$ "<<m2/d<<" by day\n";
    return 0;
}