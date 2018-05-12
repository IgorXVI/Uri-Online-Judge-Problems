#include <bits/stdc++.h>

using namespace std;

int q(int n1)
{
    if(n1==1){return n1;}
    return q(n1-1)+1;
}

int main()
{
    int x,y;
    cin>>x>>y;
    for(int i=1;i<=y;i++){
        cout<<q(i);
        if(i%x!=0){
            cout<<" ";
        }
        else{
            cout<<"\n";
        }
    }
    return 0;
}