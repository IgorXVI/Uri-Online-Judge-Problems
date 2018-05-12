#include <bits/stdc++.h>

using namespace std;

double area(double n1){
    double q=n1*n1*3.14159;
    return q;
}
int main()
{
    double x;
    cin>>x;
    cout<<fixed<<setprecision(4);
    cout<<"A="<<area(x)<<"\n";
    return 0;
}