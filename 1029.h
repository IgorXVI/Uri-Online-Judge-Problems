#include <bits/stdc++.h>

using namespace std;

int cham(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return cham(n-1) + cham(n-2) + 1;
}

int call(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return call(n-1) + call(n-2);
}

int main()
{
    int x, y, c;
    cin>>x;
    for(int i = 0; i < x; i++){
        cin>>y;
        c = cham(y) - 1;
        cout<<"fib("<<y<<") = "<<c<<" ";
        cout<<"calls = "<<call(y)<<"\n";
    }
    return 0;
}