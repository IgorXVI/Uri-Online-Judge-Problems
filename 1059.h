#include <bits/stdc++.h>

using namespace std;

string DDD(int n1)
{
    int arr1[8]{61,71,11,21,32,19,27,31};
    string arr2[9]{"Brasilia","Salvador","Sao Paulo","Rio de Janeiro",
    "Juiz de Fora","Campinas","Vitoria","Belo Horizonte","DDD nao cadastrado"};
    for(int i=0; i<8; i++){
        if(arr1[i]==n1){
            return arr2[i];
            break;
        }
    }
    return arr2[8];
}

int main()
{
    int x;
    cin>>x;
    cout<<DDD(x)<<"\n";
    return 0;
}