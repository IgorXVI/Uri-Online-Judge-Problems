#include <bits/stdc++.h>

using namespace std;

int ano(int n1)
{
    return n1/365;
}

int mes(int n1)
{
    return (n1%365)/30;
}

int dia(int n1)
{
    return (n1%365)%30;
}

int main()
{
    int x;
    cin>>x;
    cout<<ano(x)<<" ano(s)\n";
    cout<<mes(x)<<" mes(es)\n";
    cout<<dia(x)<<" dia(s)\n";
    return 0;
}