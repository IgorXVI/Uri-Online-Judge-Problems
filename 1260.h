#include <bits/stdc++.h>

using namespace std;

typedef struct
{
    double quantidade = 0;
    double precentual;
} arveres;

int main()
{
    //freopen("entradassssss.txt", "r", stdin);
    map<string, arveres> mapa;
    map<string, arveres>::iterator it;
    int n;
    double q;
    string s;
    cin>>n;
    cin.ignore();
    cout<<fixed<<setprecision(4);
    for(int i =0; i<n; i++)
    {
        q = 0;
        getline(cin, s);
        while(s.length() == 0){
            getline(cin,s);
        }
        while(s.length() != 0)
        {
            mapa[s].quantidade++;
            q++;
            getline(cin, s);
        }
        for(it = mapa.begin(); it != mapa.end(); it++)
        {
            it->second.precentual = (it->second.quantidade / q) * 100;
            cout<<it->first<<" "<<it->second.precentual<<"\n";
        }
        mapa.clear();
        if(i != n-1){
            cout<<"\n";
        }
    }
    return 0;
}