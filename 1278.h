#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, gl, q, len;
    string s;
    cin>>n;
    while(n!=0)
    {
        cin.ignore();
        char c[n][50];
        for(int i=0; i<n; i++){
            for(int j=0; j<50; j++){
                c[i][j]=' ';
            }
        }
        gl = 0;
        for(int i=0; i<n; i++)
        {
            getline(cin, s);
            len = s.size();
            for(int j=0; j<len; j++){
                if(s[j]==' ' && (s[j+1]==s[j] || j == len-1 || j==0)){
                    s.erase(j, 1);
                    j--;
                    len--;
                }
            }
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