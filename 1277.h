#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    bool b;
    double p, q;
    string s, ss;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>m;
        vector<string> a;
        double arr[m], arr1[m];
        for(int j=0; j<m; j++)
        {
            cin>>s;
            a.push_back(s);
        }
        for(int j = 0; j < m; j++)
        {
            cin>>ss;
            p = 0;
            q = 0;
            for(int k=0; k<ss.size(); k++)
            {
                if(ss[k]=='P')
                {
                    p++;
                    q++;
                }
                if(ss[k]=='A')
                {
                    q++;
                }
            }
            arr[j] = p*100/q;
        }
        b = false;
        for(int j = 0; j < m; j++)
        {
            if(arr[j] < 75){
                if(b) cout << " ";
                b = true;
                cout << a[j];
            }
        }
        cout<<"\n";
    }
    return 0;
}