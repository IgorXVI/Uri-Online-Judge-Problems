#include <bits/stdc++.h>

using namespace std;

int main()
{
    double I=0,J=1,q=0;
    while(I<=2){
        cout<<"I="<<I<<" ";
        cout<<"J="<<J<<"\n";
        J++;
        q++;
        if(q==3){
            I+=0.2;
            J=1+I;
            q=0;
        }
    }
    return 0;
}