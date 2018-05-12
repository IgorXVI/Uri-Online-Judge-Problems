#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("entrada.txt", "r", stdin);
    int n, aux;
    vector<int> b, estacao;
    cin>>n;
    while(n != 0)
    {
        cin>>aux;
        while(aux != 0)
        {
            for(int i = 0; i < n; i++){
                b.push_back(aux);
                cin>>aux;
            }
            reverse(b.begin(), b.end());
            for(int i = 1; i <= n; i++){
                if(b.back() != i){
                    while(!estacao.empty() && estacao.back() == b.back()){
                        estacao.pop_back();
                        b.pop_back();
                    }
                    estacao.push_back(i);
                }
                else{
                    b.pop_back();
                }
            }
            if(!estacao.empty() && estacao != b){
                cout<<"No\n";
            }
            else{
                cout<<"Yes\n";
            }
            b.clear();
            estacao.clear();
        }
        cin>>n;
        cout<<"\n";
    }
    return 0;
}