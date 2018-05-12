#include <bits/stdc++.h>

using namespace std;

int main() {
    double X[100];
    for(int i=0;i<100;i++){
        cin>>X[i];
    }
    for(int i=0;i<100;i++){
        if(X[i]<=10){
            cout<<"A["<<i<<"] = ";
            cout<<fixed<<setprecision(1)<<X[i]<<"\n";
        }
    }
    return 0;
}