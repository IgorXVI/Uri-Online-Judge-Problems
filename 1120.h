#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("entradassssss.txt", "r", stdin);
    char c;
    string s;
    cin>>c>>s;
    while(c != '0' && s[0] != '0'){
        for(int i=0; i<s.size(); i++){
            if(s[i] == c){
                s.erase(i, 1);
                i--;
            }
        }
        while(s[0] == '0' && s.size() > 1){
            s.erase(0, 1);
        }
        if(s == ""){
            s = "0";
        }
        cout<<s<<"\n";
        cin>>c>>s;
    }
    return 0;
}