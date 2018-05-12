#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool p=false;
    long long int x, maior, resp=NULL;
    cin>>x;
    maior=x;
    while(cin>>x)
    {
        if(x<maior && p==false)
        {
            resp=maior;
            p=true;
            break;
        }
        maior=x;
    }
    if(resp==NULL){
        resp=x;
    }
    cout<<resp+1<<"\n";
    return 0;
}