#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("entradassssss.txt", "r", stdin);
    map <string, double> mapa;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s;
        int n1;
        double x, preco = 0;
        cin>>n1;
        for(int j = 0; j<n1; j++){
            cin>>s>>x;
            mapa[s] = x;
        }
        cin>>n1;
        for(int j = 0; j<n1; j++){
            cin>>s>>x;
            preco += mapa[s]*x;
        }
        cout<<fixed<<setprecision(2);
        cout<<"R$ "<<preco<<"\n";
    }
    return(0);
}