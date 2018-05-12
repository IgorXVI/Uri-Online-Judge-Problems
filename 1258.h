#include <bits/stdc++.h>

using namespace std;

typedef struct
{
    string nome;
    string cor;
    int tamanho;
    char tamanho_c;
} jubileu;

bool ordem(jubileu x, jubileu y){
    if(x.cor == y.cor){
        if(x.tamanho == y.tamanho){
            return x.nome < y.nome;
        }
        return x.tamanho < y.tamanho;
    }
    return x.cor < y.cor;
}

int main()
{
    //freopen("entradassssss.txt", "r", stdin);
    int n;
    string nome, cor;
    char tamanho;
    bool first = true;
    cin>>n;
    while(n != 0)
    {
        if(first == false){
            cout<<"\n";
        }
        jubileu dados[n+1];
        for(int i=0; i<n; i++)
        {
            cin.ignore();
            getline(cin, nome);
            cin>>cor>>tamanho;
            dados[i].nome = nome;
            dados[i].cor = cor;
            dados[i].tamanho_c = tamanho;
            if(tamanho == 'P'){
                dados[i].tamanho = 0;
            }
            else if (tamanho == 'M'){
                dados[i].tamanho = 1;
            }
            else{
                dados[i].tamanho = 2;
            }
        }
        sort(dados, dados+n, ordem);
        for(int i=0; i<n; i++){
            cout<<dados[i].cor<<" "<<dados[i].tamanho_c<<" "<<dados[i].nome<<"\n";
        }
        if(first == true){
            first = false;
        }
        cin>>n;
    }
    return 0;
}