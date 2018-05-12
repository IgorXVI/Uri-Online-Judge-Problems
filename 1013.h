#include <bits/stdc++.h>

using namespace std;

int maior(int n1, int n2, int n3)
{
    int q=(n1+n2+abs(n1-n2))/2;
    return (q+n3+abs(q-n3))/2;
}

int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    cout<<maior(A,B,C)<<" eh o maior\n";
    return 0;
}