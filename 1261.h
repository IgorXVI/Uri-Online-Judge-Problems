#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("entradassssss.txt", "r", stdin);
    map<string, double> mapa;
    map<string, double>::iterator it;
    int n1, n2, found, points;
    double x;
    string s, descr;
    cin>>n1>>n2;
    for(int i = 0; i < n1; i++)
    {
        cin>>s>>x;
        mapa[s] = x;
    }
    cin.ignore();
    for(int i = 0; i < n2; i++)
    {
        points = 0;
        descr = ".";
        getline(cin, s);
        while(s[0] != '.' && !s.empty())
        {
            descr += s + ".";
            getline(cin, s);
        }
        for(it = mapa.begin(); it != mapa.end(); it++)
        {
            s = it->first;
            found  = descr.find(s);
            while(found != string::npos)
            {
                points += mapa[s];
                descr.erase(found, s.length());
                found  = descr.find(s);
            }
        }
        cout<<points<<"\n";
    }
    return 0;
}