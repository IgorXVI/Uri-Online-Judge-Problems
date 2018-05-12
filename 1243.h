#include <bits/stdc++.h>

using namespace std;

string erase_es(string s)
{
    int len = s.size();
    for(int j=0; j<len; j++)
    {
        if(s[j]==' ' && (s[j+1]==s[j] || j == len-1 || j==0))
        {
            s.erase(j, 1);
            j--;
            len--;
        }
    }
    return s;
}

int main()
{
    //freopen("entradassssss.txt", "r", stdin);
    bool b;
    int len, flag, q, qs, aux, num_palvr, tam_tot;
    string s, ss;
    while(getline(cin, s)){
        s = erase_es(s);
        s += " ";
        vector<string> vs;
        len = s.size();
        flag = 0;
        q = 0;
        qs = 0;
        for(int i=0; i<len; i++){
            if(s[i]==' '){
                ss = s.substr(flag, q);
                vs.push_back(ss);
                flag = i+1;
                q = 0;
                qs++;
            }
            q++;
        }
        num_palvr = 0;
        tam_tot = 0;
        for(int i=0; i<qs; i++){
            for(int j=0; j<vs[i].size(); j++){
                if(vs[i][j]==' '){
                    vs[i].erase(j, 1);
                }
            }
            b = true;
            aux = 0;
            len = vs[i].size();
            for(int j=0; j<len; j++){
                if(vs[i][j]=='.'){
                    if(j == len-1){
                        aux++;
                    }
                    else{
                        b = false;
                    }
                }
                else if(isalpha(vs[i][j]) == false){
                    b = false;
                }
            }
            if(b == true){
                num_palvr++;
                tam_tot += len - aux;
            }
        }
        if(num_palvr > 0){
            q = tam_tot/num_palvr;
        }
        else{
            q = 0;
        }
        if(q <= 3)
        {
            cout<<"250\n";
        }
        else if(q <= 5)
        {
            cout<<"500\n";
        }
        else
        {
            cout<<"1000\n";
        }
    }
    return 0;
}