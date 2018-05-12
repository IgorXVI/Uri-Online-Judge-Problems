#include <bits/stdc++.h>

using namespace std;

bool ordena(const int &a, const int &b){
    return a > b;
}

int main()
{
    //freopen("entrada.txt", "r", stdin);
    int n, x, y, q1, q2, maior;
    bool eh_s, eh_vs, eh_v;
    vector<int> v, vs, saida;
    while(cin >> n)
    {
        stack<int> s;
        eh_s = eh_v = eh_vs = true;
        q1 = q2 = 0;
        maior = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>x>>y;
            if(x == 1)
            {
                v.push_back(y);
                vs.push_back(y);
                s.push(y);
                if(maior < y){
                    maior = y;
                    q2 = 0;
                }
            }
            else
            {
                sort(vs.begin(), vs.end(), ordena);
                if(eh_s && y != s.top())
                {
                    eh_s = false;
                }
                if(eh_v && y != v[q1])
                {
                    eh_v = false;
                }
                if(eh_vs && y != vs[q2]){
                    eh_vs = false;
                }
                q1++;
                q2++;
                s.pop();
            }
        }
        if(eh_s && eh_v || eh_s && eh_vs || eh_v && eh_vs)
        {
            cout<<"not sure\n";
        }
        else if(eh_v)
        {
            cout<<"queue\n";
        }
        else if(eh_vs)
        {
            cout<<"priority queue\n";
        }
        else if(eh_s)
        {
            cout<<"stack\n";
        }
        if( !(eh_s || eh_v || eh_vs) )
        {
            cout<<"impossible\n";
        }
        v.clear();
        vs.clear();
        saida.clear();
    }
    return 0;
}