#include <bits/stdc++.h>

using namespace std;

typedef struct
{
    int num;
    int den;
} racional;

int main()
{
    int n, m;
    double s;
    char c, oper;
    racional x, y, nsimp, simp;
    //freopen("entradassssss.txt", "r", stdin);
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>x.num>>c>>x.den>>oper>>y.num>>c>>y.den;
        if(oper == '+')
        {
            nsimp.num = x.num * y.den + y.num * x.den;
            nsimp.den = x.den * y.den;
        }
        if(oper == '-')
        {
            nsimp.num = x.num * y.den - y.num * x.den;
            nsimp.den = x.den * y.den;
        }
        if(oper == '*')
        {
            nsimp.num = x.num * y.num;
            nsimp.den = x.den * y.den;
        }
        if(oper == '/')
        {
            nsimp.num = x.num * y.den;
            nsimp.den = y.num * x.den;
        }

        s = abs(__gcd(nsimp.num, nsimp.den));

        simp.num = nsimp.num / s;
        simp.den = nsimp.den / s;

        cout<<nsimp.num<<"/"<<nsimp.den<<" = ";
        cout<<simp.num<<"/"<<simp.den<<"\n";
    }
    return 0;
}