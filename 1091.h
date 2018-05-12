#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x0,y0,x,y;
    cin>>n;
    while(n!=0){
        cin>>x0>>y0;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            if((x==x0)||(y==y0)){
                cout<<"divisa\n";
            }
            else{
                if((x>x0)&&(y>y0)){
                    cout<<"NE\n";
                }
                if((x<x0)&&(y<y0)){
                    cout<<"SO\n";
                }
                if((x<x0)&&(y>y0)){
                    cout<<"NO\n";
                }
                if((x>x0)&&(y<y0)){
                    cout<<"SE\n";
                }
            }
        }
        cin>>n;
    }
    return 0;
}