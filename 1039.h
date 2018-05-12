#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r1,r2,x1,x2,y1,y2;
    double dc;
    while(cin>>r1>>x1>>y1>>r2>>x2>>y2){
    dc=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    if(r1>=dc+r2){
        cout<<"RICO\n";
    }
    else{
        cout<<"MORTO\n";
    }
    }
    return 0;
}