#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("entradassssss.txt", "r", stdin);
    map <string, string> mapa;
    int n;
    string s1, s2;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s1;
        cin.ignore();
        getline(cin, s2);
        mapa[s1] = s2;
    }
    cin>>n;
    for(int i=0; i<n; i++){
        cin.ignore();
        getline(cin, s1);
        cin>>s2;
        cout<<s1<<"\n";
        cout<<mapa[s2]<<"\n";
        cout<<"\n";
    }
    return(0);
}