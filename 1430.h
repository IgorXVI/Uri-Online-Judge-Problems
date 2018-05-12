#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("entradassssss.txt", "r", stdin);
    map<char, double> mapa;
    mapa['W'] = 1;
    mapa['H'] = 0.5;
    mapa['Q'] = 0.25;
    mapa['E'] = 0.125;
    mapa['S'] = 0.0625;
    mapa['T'] = 0.03125;
    mapa['X'] = 0.015625;
    string s;
    int q, len;
    char c;
    double d;
    cin>>s;
    while(s[0] != '*')
    {
        q = 0;
        d = 0;
        len  = s.size();
        for(int i = 1; i < len; i++)
        {
            if(s[i] != '/'){
                c = s[i];
                d += mapa[c];
            }
            else{
                if(d == 1.0){
                    q++;
                }
                d = 0;
            }
        }
        cout<<q<<"\n";
        cin>>s;
    }
    return 0;
}