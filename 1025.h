#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("entrada.txt","r",stdin);
    int n1, n2, x, z, pos, contador = 1;
    vector<int> v;
    vector<int>::iterator it;
    cin>>n1>>n2;
    while(n1 != 0 || n2 != 0)
    {
        for(int i = 0; i < n1; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        cout<<"CASE# "<<contador<<":\n";
        sort(v.begin(), v.end());
        for(int i = 0; i < n2; i++)
        {
            cin>>z;
            it = find(v.begin(), v.end(), z);
            if(it != v.end())
            {
                pos = distance(v.begin(), it) + 1;
                cout<<z<<" found at "<<pos<<"\n";
            }
            else
            {
                cout<<z<<" not found\n";
            }
        }
        v.clear();
        contador++;
        cin>>n1>>n2;
    }
    return 0;
}