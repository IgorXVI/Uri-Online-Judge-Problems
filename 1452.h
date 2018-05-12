#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("entrada.txt", "r", stdin);
    int n, m, x, q;
    string s;
    vector<string> apps;
    vector< vector<string> > servidores, servidores_temp;
    vector< vector<string> > clientes;
    cin>>n>>m;
    while(n != 0 || m != 0)
    {
        q = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>x;
            for(int j = 0; j < x; j++)
            {
                cin>>s;
                apps.push_back(s);
            }
            servidores.push_back(apps);
            apps.clear();
        }
        for(int a = 0; a < m; a++)
        {
            cin>>x;
            servidores_temp = servidores;
            for(int o = 0; o < x; o++)
            {
                cin>>s;
                for(int i = 0; i < servidores_temp.size(); i++)
                {
                    for(int j = 0; j < servidores_temp[i].size(); j++)
                    {
                        if(servidores_temp[i][j] == s){
                            q++;
                            servidores_temp.erase(servidores_temp.begin() + i);
                            i--;
                            break;
                        }
                    }
                }
            }
        }
        cout<<q<<"\n";
        servidores.clear();
        cin>>n>>m;
    }
    return 0;
}