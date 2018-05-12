#include <bits/stdc++.h>

using namespace std;

int main()
{
    int I=1,J=7,q=0;
    while(I<=9){
        cout<<"I="<<I<<" ";
        cout<<"J="<<J<<"\n";
        J-=1;
        q++;
        if(q==3){
            I+=2;
            J=7+I-1;
            q=0;
        }
    }
    return 0;
}