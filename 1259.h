#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,odd=0,even=0;
    cin>>i;
    int arr[i],arro[i],arre[i];
    for(int o=0;o<i;o++){
        cin>>arr[o];
        if(arr[o]%2==0){
            arre[o-odd]=arr[o];
            even++;
        }
        else{
            arro[o-even]=arr[o];
            odd++;
        }
    }
    sort(arre,arre+even);
    for(int p=0;p<even;p++){
        cout<<arre[p]<<"\n";
    }
    sort(arro,arro+odd);
    for(int q=odd-1;q>=0;q--){
        cout<<arro[q]<<"\n";
    }
    return 0;
}