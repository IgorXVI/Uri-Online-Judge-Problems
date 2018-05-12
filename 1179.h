#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int v[15],pr[5],im[5],q1=0,q2=0;
    for(int i=0;i<15;i++){
        cin>>v[i];
        if(q2==5){
            for(int i1=0;i1<5;i1++){
                cout<<"impar["<<i1<<"] = "<<im[i1]<<"\n";
            }
            q2=0;
        }
        if(q1==5){
            for(int i1=0;i1<5;i1++){
                cout<<"par["<<i1<<"] = "<<pr[i1]<<"\n";
            }
            q1=0;
        }
        if(v[i]%2==0){
            pr[q1]=v[i];
            q1++;
        }
        else{
            im[q2]=v[i];
            q2++;
        }
    }
    if(q2!=0){
        for(int i1=0;i1<q2;i1++){
            cout<<"impar["<<i1<<"] = "<<im[i1]<<"\n";
        }
    }
    if(q1!=0){
        for(int i1=0;i1<q1;i1++){
            cout<<"par["<<i1<<"] = "<<pr[i1]<<"\n";
        }
    }
    return 0;
}