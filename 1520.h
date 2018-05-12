#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("entrada.txt","r",stdin);
    int n, x, y, z, quant, pos1, pos2;
    vector<int> v;
    vector<int>::iterator it;
    while(cin>>n)
    {
        for(int i = 0; i < n; i++)
        {
            cin>>x>>y;
            for(int j = x; j <= y; j++)
            {
                v.push_back(j);
            }
        }
        cin>>z;
        sort(v.begin(), v.end());
        it = find(v.begin(), v.end(), z);
        if(it != v.end())
        {
            quant = count(v.begin(), v.end(), z);
            pos1 = distance(v.begin(), it);
            pos2 = pos1 + quant - 1;
            cout<<z<<" found from "<<pos1<<" to "<<pos2<<"\n";
        }
        else
        {
            cout<<z<<" not found\n";
        }
        v.clear();
    }
    return 0;
}