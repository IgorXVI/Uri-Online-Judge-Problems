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

vector<string> get_words(string s)
{
    vector<string> vec;
    string ss;
    s = erase_es(s);
    int q = 0, flag = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==' ' || i == s.size()-1)
        {
            ss = s.substr(flag, q);
            vec.push_back(ss);
            q = 0;
            flag = i + 1;
        }
        else{
            q++;
        }
        if(i == s.size()-2)
        {
            q++;
        }
    }
    return vec;
}

int main()
{
    //freopen("entradassssss.txt", "r", stdin);
    int len, ms = 0;
    string maior, s;
    vector<int> vi;
    vector<string> vs;
    while(getline(cin, s))
    {
        if(s[0] == '0')
        {
            for(int i=0; i<vi.size(); i++)
            {
                if(vi[i]==0)
                {
                    cout<<"\n";
                }
                else
                {
                    cout<<vi[i];
                    if(vi[i+1] != 0)
                    {
                        cout<<"-";
                    }
                }
            }
            cout<<"\nThe biggest word: "<<maior<<"\n";
            vs.clear();
            vi.clear();
            ms = 0;
        }
        else
        {
            vs = get_words(s);
            for(int i=0; i<vs.size(); i++)
            {
                if(vs[i].size() >= ms)
                {
                    ms = vs[i].size();
                    maior = vs[i];
                }
                len = vs[i].size();
                vi.push_back(len);
            }
            vi.push_back(0);
        }
    }
    return 0;
}