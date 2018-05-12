#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, gl, q;
    string s;
    cin>>n;
    while(n!=0)
    {
        char c[n][50];
        for(int i=0; i<n; i++){
            for(int j=0; j<50; j++){
                c[i][j]=' ';
            }
        }
        gl = 0;
        for(int i=0; i<n; i++)
        {
            cin>>s;
            if(s.size() > gl){
                gl = s.size();
            }
            q = 0;
            for(int j=50-s.size(); j<50; j++){
                c[i][j]=s[q];
                q++;
            }
        }
        for(int i=0; i<n; i++){
            for(int j=50-gl; j<50; j++){
                cout<<c[i][j];
            }
            cout<<"\n";
        }
        cin>>n;
        if(n!=0){
            cout<<"\n";
        }
    }
    return 0;
}