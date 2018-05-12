#include <bits/stdc++.h>

using namespace std;

double atr(double n1, double n2)
{
    return n1*n2/2;
}

double acr(double n1)
{
    return 3.14159*n1*n1;
}

double atrp(double n1, double n2, double n3)
{
    return (n1+n2)*n3/2.0;
}

double aqdr(double n1){
    return n1*n1;
}

double art(double n1, double n2){
    return n1*n2;
}

int main()
{
    double A,B,C;
    cin>>A>>B>>C;
    cout<<fixed<<setprecision(3);
    cout<<"TRIANGULO: "<<atr(A,C)<<"\n";
    cout<<"CIRCULO: "<<acr(C)<<"\n";
    cout<<"TRAPEZIO: "<<atrp(A,B,C)<<"\n";
    cout<<"QUADRADO: "<<aqdr(B)<<"\n";
    cout<<"RETANGULO: "<<art(A,B)<<"\n";
    return 0;
}