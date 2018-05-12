#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("entrada.txt", "r", stdin);
    int n, aux1, aux2;
    vector<int> cartas, cartas_descartadas;
    cin>>n;
    while(n != 0)
    {
        for(int i = n; i >= 1; i--){
            cartas.push_back(i);
        }
        while(cartas.size() > 1){
            cartas_descartadas.push_back(cartas[cartas.size() - 1]);
            cartas.pop_back();
            aux1 = cartas[cartas.size() - 1];
            aux2;
            for(int i = 0; i < cartas.size(); i++){
                aux2 = cartas[i];
                cartas[i] = aux1;
                aux1 = aux2;
            }
        }
        cout<<"Discarded cards: ";
        for(int i = 0; i < cartas_descartadas.size(); i++){
            cout<<cartas_descartadas[i];
            if(i == cartas_descartadas.size() - 1){
                cout<<"\n";
            }
            else{
                cout<<", ";
            }
        }
        cout<<"Remaining card: "<<cartas[0]<<"\n";
        cartas_descartadas.clear();
        cartas.clear();
        cin>>n;
    }
    return 0;
}