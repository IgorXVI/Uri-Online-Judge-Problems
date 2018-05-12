#include <bits/stdc++.h>

using namespace std;

double dist(double n1, double n2, double n3, double n4)
{
    return sqrt(pow(n1-n2,2)+pow(n3-n4,2));
}

int main()
{
    double x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    cout<<fixed<<setprecision(4);
    cout<<dist(x1,x2,y1,y2)<<"\n";
    return 0;
}