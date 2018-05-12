#include <bits/stdc++.h>

using namespace std;

int prioridade(char c)
{
    if(c == '^')
    {
        return 4;
    }
    if(c == '*' || c == '/')
    {
        return 3;
    }
    if(c == '+' || c == '-')
    {
        return 2;
    }
    return 1;
}

int main()
{
    //freopen("entrada.txt", "r", stdin);
    string s;
    vector<char> pilha, saida;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>s;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
            {
                pilha.push_back('(');
            }
            else if(s[i] == ')')
            {
                while(!pilha.empty() && pilha.back() != '(')
                {
                    saida.push_back(pilha.back());
                    pilha.pop_back();
                }
                pilha.pop_back();
            }
            else if( prioridade(s[i]) > 1 )
            {
                if( pilha.empty() || pilha.back() == '(' || prioridade(pilha.back()) < prioridade(s[i]) )
                {
                    pilha.push_back(s[i]);
                }
                else
                {
                    while( !pilha.empty() && prioridade(pilha.back()) >= prioridade(s[i]) )
                    {
                        saida.push_back( pilha.back() );
                        pilha.pop_back();
                    }
                    pilha.push_back(s[i]);
                }
            }
            else
            {
                saida.push_back(s[i]);
            }
        }
        while(!pilha.empty())
        {
            saida.push_back(pilha.back());
            pilha.pop_back();
        }
        for(int i = 0; i < saida.size(); i++)
        {
            cout<<saida[i];
        }
        cout<<"\n";
        pilha.clear();
        saida.clear();
    }
    return 0;
}