##include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("glob.txt", "r", stdin);
    int o, p, a, b, x, y, mv;
    cin>>a>>b>>x>>y;
    while(a != 0 || b != 0 || x != 0 || y != 0)
    {
        mv = 0;
        if(a == x && b == y){
            cout<<"0\n";
        }
        else if((a == x && b !=y) || (a != x && b == y)){
            cout<<"1\n";
        }
        else{
            o = abs(a -x);
            p = abs(b -y);
            if(o != p){
                cout<<"2\n";
            }
            else{
                cout<<"1\n";
            }
        }
        cin>>a>>b>>x>>y;
    }
    return 0;
}