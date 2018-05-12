#include <bits/stdc++.h>

using namespace std;

struct igor
{
    int posicao = 0, tamanho = 0;
};

int main()
{
    //freopen("entrada.txt", "r", stdin);
    map<string, igor> mapa;
    map<string, igor>::iterator it;
    string nome, sn, amigo = "";
    long long int q = 0, maior = -1;
    cin>>nome;
    while(nome != "FIM")
    {
        cin>>sn;
        if(mapa[nome].tamanho == 0 && sn == "YES")
        {
            mapa[nome].posicao = q;
            mapa[nome].tamanho = nome.size();
            if(nome.size() > maior)
            {
                maior = nome.size();
                amigo = nome;
            }
            q++;
        }
        cin>>nome;
    }
    for(it = mapa.begin(); it != mapa.end(); it++)
    {
        if(it->second.tamanho != 0)
        {
            cout<<it->first<<"\n";
        }
    }
    for(it = mapa.begin(); it != mapa.end(); it++)
    {
        if(it->second.tamanho == 0)
        {
            cout<<it->first<<"\n";
        }
    }
    cout<<"\nAmigo do Habay:\n"<<amigo<<"\n";
    return 0;
}