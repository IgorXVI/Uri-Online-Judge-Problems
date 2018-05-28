#include <bits/stdc++.h>

using namespace std;

struct fila
{
    int elementos[1000], tamanho = 0, nao_apagados = 0;
};

int proximo(int pos, fila f)
{
    if(f.nao_apagados == 0)
    {
        return -1;
    }
    pos++;
    if(pos == f.tamanho)
    {
        pos = 0;
    }
    if(f.elementos[pos] == -1)
    {
        pos = proximo(pos, f);
    }
    return pos;
}

int anterior(int pos, fila f)
{
    if(f.nao_apagados == 0)
    {
        return -1;
    }
    pos--;
    if(pos == -1)
    {
        pos = f.tamanho - 1;
    }
    if(f.elementos[pos] == -1)
    {
        pos = anterior(pos, f);
    }
    return pos;
}

void apagar(int pos, fila &f)
{
    if(pos > f.tamanho - 1)
    {
        cout<<"void apagar(int pos, fila f): array overflow\n";
    }
    else
    {
        f.elementos[pos] = -1;
        f.nao_apagados--;
    }
}

void adicionar(int x, fila &f)
{
    f.elementos[f.tamanho] = x;
    f.tamanho++;
    f.nao_apagados++;
}

string espacos(int n)
{
    string s;
    if(n >= 100){
        s = "";
    }
    if(n >= 10 && n < 100)
    {
        s = " ";
    }
    if(n < 10)
    {
        s = "  ";
    }
    return s;
}

int main()
{
    //freopen("entrada.txt", "r", stdin);
    bool inicio;
    int n, k, m, ek, em;
    while(cin>>n>>k>>m && !(n == 0 && k == 0 && m == 0))
    {
        inicio = true;
        fila f;
        for(int i = 0; i < n; i++)
        {
            adicionar(i, f);
        }
        ek = 0;
        em = n - 1;
        while(f.nao_apagados > 1)
        {
            if(!inicio && f.nao_apagados >= 2)
            {
                cout<<",";
            }
            else
            {
                inicio = false;
            }
            for(int j = 1; j < k; j++)
            {
                ek = proximo(ek, f);
            }
            for(int j = 1; j < m; j++)
            {
                em = anterior(em, f);
            }
            cout<<espacos(ek+1)<<ek+1;
            apagar(ek, f);
            if(ek != em)
            {
                cout<<espacos(em+1)<<em+1;
                apagar(em, f);
            }
            ek = proximo(ek, f);
            em = anterior(em, f);
        }
        if(f.nao_apagados != 0)
        {
            if(f.tamanho > 1){
                cout<<",";
            }
            for(int i = 0; i < f.tamanho; i++)
            {
                if(f.elementos[i] != -1)
                {
                    cout<<espacos(i+1)<<i+1;
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}