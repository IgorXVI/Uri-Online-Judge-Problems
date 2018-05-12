#include <bits/stdc++.h>

using namespace std;

struct pessoa
{
    vector<string> conexoes;
    int nivel = 0, cluster = NULL;
    bool check = false;
};

vector< vector<string> > getClusters(map<string, pessoa> &mapa)
{
    int q = 0;
    map<string, pessoa>::iterator it;
    vector<string> vs;
    vector< vector<string> > vvs;
    string s;
    list<string> lista;

    for(it = mapa.begin(); it != mapa.end(); it++)
    {
        if( !(it->second.conexoes.empty() || it->second.check) )
        {
            lista.push_back(it->first);
            it->second.check = true;
            it->second.cluster = q;

            while(!lista.empty())
            {
                s = lista.front();
                lista.pop_front();

                vs.push_back(s);
                for (int i = 0; i < mapa[s].conexoes.size(); i++)
                {
                    if (!mapa[ mapa[s].conexoes[i] ].check)
                    {
                        mapa[ mapa[s].conexoes[i] ].check = true;
                        mapa[ mapa[s].conexoes[i] ].cluster = q;
                        lista.push_back(mapa[s].conexoes[i]);
                    }
                }
            }
            vvs.push_back(vs);
            vs.clear();
            q++;
        }
    }
    return vvs;
}

vector<bool> mq5(map<string, pessoa> &mapa)
{
    vector<bool> vb;
    bool b;
    vector< vector<string> > vvs;
    vvs = getClusters(mapa);
    for(int i = 0; i < vvs.size(); i++)
    {
        b = false;
        for(int j = 0; j < vvs[i].size(); j++)
        {
            if(mapa[vvs[i][j]].nivel > 5)
            {
                b = true;
                break;
            }
        }
        vb.push_back(b);
    }
    return vb;
}

int main()
{
    //freopen("entrada.txt", "r", stdin);
    int n, m, q, auxi;
    string auxs, auxs1;
    map<string, pessoa> mapa;
    vector<bool> vmq5;
    cin>>n>>m>>q;
    for(int i = 0; i < n; i++)
    {
        cin>>auxs>>auxi;
        mapa[auxs].nivel = auxi;
    }
    for(int i = 0; i < m; i++)
    {
        cin>>auxs>>auxs1;
        mapa[auxs].conexoes.push_back(auxs1);
        mapa[auxs1].conexoes.push_back(auxs);
    }
    vmq5 = mq5(mapa);
    for(int i = 0; i < q; i++)
    {
        cin>>auxs;
        if(mapa[auxs].conexoes.empty() || mapa[auxs].nivel >= 5 || !vmq5[mapa[auxs].cluster])
        {
            cout<<"S\n";
        }
        else
        {
            cout<<"N\n";
        }
    }
    return 0;
}