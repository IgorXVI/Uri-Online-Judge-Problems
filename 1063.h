#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("entrada.txt", "r", stdin);
    int n;
    char aux;
    bool impossible;
    vector<char> a, b, estacao;
    string resposta;
    cin>>n;
    while(n != 0)
    {
        for(int i = 0; i < n; i++)
        {
            cin>>aux;
            a.push_back(aux);
        }
        for(int i = 0; i < n; i++)
        {
            cin>>aux;
            b.push_back(aux);
        }
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        resposta = "";
        while(!a.empty())
        {
            if(b.back() != a.back())
            {
                while(!estacao.empty() && estacao.back() == b.back())
                {
                    estacao.pop_back();
                    b.pop_back();
                    resposta += "R";
                }
                estacao.push_back(a.back());
                resposta += "I";
            }
            else
            {
                resposta += "IR";
                b.pop_back();
            }
            a.pop_back();
        }
        impossible = false;
        while(!b.empty()){
            if(b.back() == estacao.back()){
                resposta += "R";
                b.pop_back();
                estacao.pop_back();
            }
            else{
                impossible = true;
                break;
            }
        }
        cout<<resposta;
        if(impossible)
        {
            cout<<" Impossible";
        }
        cout<<"\n";
        a.clear();
        b.clear();
        estacao.clear();
        cin>>n;
    }
    return 0;
}