#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("entrada.txt", "r", stdin);
    string s;
    bool correct;
    while(getline(cin, s))
    {
        stack<bool> p1;
        correct = true;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
            {
                p1.push(true);
            }
            if(s[i] == ')')
            {
                if(p1.empty())
                {
                    correct = false;
                    break;
                }
                else
                {
                    p1.pop();
                }
            }
        }
        if(correct && p1.empty())
        {
            cout<<"correct\n";
        }
        else{
            cout<<"incorrect\n";
        }
    }
    return 0;
}