#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int ev1, ev2;
    long double a, d, n1, n2;
    cin>>ev1>>ev2>>a>>d;
    while(ev1!=0 && ev2!=0 && a!=0 && d!=0){
        n1=ceil(ev1/d);
        n2=ceil(ev2/d);
        if(a==3){
            double r1= (n1/(n1+n2))*100;
            cout<<fixed<<setprecision(1)<<r1<<"\n";
        }
        else{
            double r2= ((1-pow(((6-a)/a),n1))/(1-pow(((6-a)/a),(n1+n2))))*100;
            cout<<fixed<<setprecision(1)<<r2<<"\n";
        }
        cin>>ev1>>ev2>>a>>d;
    }
    return 0;
}