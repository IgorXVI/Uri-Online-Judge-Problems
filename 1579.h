#include <bits/stdc++.h>

using namespace std;

int getMaxPeso(vector<int> dados, int caminhoes)
{
    int n = dados.size();
    int low = *max_element(dados.begin(), dados.end());
    int high = accumulate(dados.begin(), dados.end(), 0);
    while(low < high)
    {
        int requerido = 1;
        int carregado = 0;
        int x = low + (high - low)/2;
        for(int i = 0; i < n; i++)
        {
            if(carregado + dados[i] <= x)
            {
                carregado += dados[i];
            }
            else
            {
                requerido++;
                carregado = dados[i];
            }
        }
        if(requerido <= caminhoes)
        {
            high = x;
        }
        else
        {
            low = x + 1;
        }
    }
    return low;
}

int main()
{
    //freopen("entrada.txt", "r", stdin);
    int n, p, c, f, buffer, peso;
    vector<int> vi;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>p>>c>>f;
        for(int j = 0; j < p; j++){
            cin>>buffer;
            vi.push_back(buffer);
        }
        peso = getMaxPeso(vi, c);
        cout<<peso<<" $"<<peso*c*f<<"\n";
        vi.clear();
    }
    return 0;
}