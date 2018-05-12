#include <bits/stdc++.h>

using namespace std;

int main() {
    int X[10],n;
    cin>>n;
    for(int i=0;i<10;i++){
        X[i]=n;
        n*=2;
    }
    for(int i=0;i<10;i++){
        cout<<"N["<<i<<"] = "<<X[i]<<"\n";
    }
    return 0;
}