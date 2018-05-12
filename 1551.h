#include <bits/stdc++.h>

using namespace std;

struct motorista
{
    long long int chegada = -1, saida = -1;
};

int main()
{
    //freopen("entrada.txt", "r", stdin);
    long long int n, k;
    bool todos;
    motorista aux;
    map<int, motorista> tempo;
    map<int, motorista>::iterator it;
    vector<motorista> estacionamento, lista;
    cin>>n>>k;
    while(n != 0 || k != 0)
    {
        todos = true;
        for(int i = 0; i < n; i++)
        {
            cin>>aux.chegada>>aux.saida;
            lista.push_back(aux);
            tempo[aux.chegada].chegada = tempo[aux.saida].saida = i;
        }
        for(it = tempo.begin(); it != tempo.end(); it++)
        {
            if(it == tempo.begin())
            {
                if(it->second.chegada != -1)
                {
                    estacionamento.push_back(lista[it->second.chegada]);
                }
                if(it->second.saida != -1)
                {
                    estacionamento.pop_back();
                }
            }
            else if(it->second.saida != it->second.chegada)
            {
                if(it->second.saida != -1)
                {
                    if(not estacionamento.empty() && lista[it->second.saida].saida == estacionamento.back().saida)
                    {
                        estacionamento.pop_back();
                    }
                    else
                    {
                        todos = false;
                        break;
                    }
                }
                if(it->second.chegada != -1)
                {
                    if(estacionamento.size() < k)
                    {
                        estacionamento.push_back(lista[it->second.chegada]);
                    }
                    else
                    {
                        todos = false;
                        break;
                    }
                }
            }
        }
        if(todos)
        {
            cout<<"Sim\n";
        }
        else
        {
            cout<<"Nao\n";
        }
        estacionamento.clear();
        lista.clear();
        tempo.clear();
        cin>>n>>k;
    }
    return 0;
}