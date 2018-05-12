#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s;
        if( (s.length()==3) && ((s[0]=='U' && s[1]=='R')||(s[0]=='O' && s[1]=='B')) ){
            s[2]='I';
        }
        if(i==n-1){
            cout<<s<<"\n";
        }
        else{
            cout<<s<<" ";
        }
    }
    return 0;
}