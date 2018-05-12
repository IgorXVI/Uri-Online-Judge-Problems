#include <bits/stdc++.h>

using namespace std;

double area(double n1, double n2){
    double q=(n1*3.5+n2*7.5)/11.0;
    return q;
}
int main()
{
    double x,y;
    cin>>x>>y;
    cout<<fixed<<setprecision(5);
    cout<<"MEDIA = "<<area(x,y)<<"\n";
    return 0;
}