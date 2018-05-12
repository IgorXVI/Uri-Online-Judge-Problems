#include <bits/stdc++.h>

using namespace std;

int prioridade(char c)
{
    if(c == '^')
    {
        return 6;
    }
    if(c == '*' || c == '/')
    {
        return 5;
    }
    if(c == '+' || c == '-')
    {
        return 4;
    }
    if(c == '<' || c == '>' || c == '=' || c == '#')
    {
        return 3;
    }
    if(c == '.')
    {
        return 2;
    }
    if(c == '|')
    {
        return 1;
    }
    return 0;
}

bool isparentesis(char c)
{
    if(c == ')' || c == '(')
    {
        return true;
    }
    return false;
}

int main()
{
    //freopen("entrada.txt", "r", stdin);
    string s, resposta;
    vector<char> pilha, saida;
    bool se, le;
    while(cin>>s)
    {
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
            else if( prioridade(s[i]) > 0 )
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
        resposta = "";
        le = false;
        se = false;
        for(int i = 0; i < s.size(); i++)
        {
            if(i > 0 && i < s.size() - 1)
            {
                if(isalpha(s[i]) && ( isalpha(s[i-1]) || isalpha(s[i+1]) ) )
                {
                    se = true;
                    break;
                }
                if(isdigit(s[i]) && ( isdigit(s[i-1]) || isdigit(s[i+1]) ) )
                {
                    se = true;
                    break;
                }
                if(prioridade(s[i]) != 0 && ( prioridade(s[i-1]) != 0 || prioridade(s[i+1]) != 0 ) )
                {
                    se = true;
                    break;
                }
            }
        }
        for(int i = 0; i < saida.size(); i++)
        {
            if( prioridade(saida[i]) == 0 && !( isparentesis(saida[i]) || isalpha(saida[i]) || isdigit(saida[i]) ) )
            {
                le = true;
                break;
            }
            else if( isparentesis(saida[i]) )
            {
                se = true;
                break;
            }
            else
            {
                resposta += saida[i];
            }
        }
        if(le)
        {
            cout<<"Lexical Error!\n";
        }
        else if(se)
        {
            cout<<"Syntax Error!\n";
        }
        else
        {
            cout<<resposta<<"\n";
        }
        pilha.clear();
        saida.clear();
    }
    return 0;
}