#include <bits/stdc++.h>

using namespace std;

int main()
{
    double d,n=0,s=0;
    string str;
    while((getline(cin,str))&&(cin>>d)){
        cin.ignore();
        s+=d;
        n++;
    }
    cout<<fixed<<setprecision(1)<<s/n<<"\n";
    return 0;
}