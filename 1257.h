#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("entradassssss.txt", "r", stdin);
    int n1, n2, x;
    string s;
    while(cin>>n1){
        for(int i=0; i<n1; i++){
            cin>>n2;
            x = 0;
            for(int j=0; j<n2; j++){
                cin>>s;
                for(int k=0; k<s.size(); k++){
                    x += s[k] - 65 + k + j;
                }
            }
            cout<<x<<"\n";
        }
    }
    return 0;
}