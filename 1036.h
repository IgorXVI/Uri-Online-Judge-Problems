#include <bits/stdc++.h>

using namespace std;

double BskrPos(double n1, double n2, double n3)
{
    double d = pow(n2,2)-4*n1*n3;
    if((d>=0)&&(n1!=0))
    {
        return (-n2+sqrt(d))/(2*n1);
    }
    else
    {
        return sqrt(n1);
    }
}

double BskrNeg(double n1, double n2, double n3)
{
    double d = pow(n2,2)-4*n1*n3;
    if((d>=0)&&(n1!=0))
    {
        return (-n2-sqrt(d))/(2*n1);
    }
    else
    {
        return sqrt(n1);
    }
}

int main()
{
    double a,b,c, r1, r2;
    cin>>a>>b>>c;
    r1=BskrPos(a,b,c);
    r2=BskrNeg(a,b,c);
    cout<<fixed<<setprecision(5);
    if(r1!=sqrt(a) && r2!=sqrt(a))
    {
        cout<<"R1 = "<<r1<<"\n";
        cout<<"R2 = "<<r2<<"\n";
    }
    else
    {
        cout<<"Impossivel calcular\n";
    }
    return 0;
}