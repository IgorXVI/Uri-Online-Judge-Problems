#include <bits/stdc++.h>

using namespace std;

int main()
{
    int f1, f2;
    string s1, s2, s3, ls1, ls3, ls2;
    while(getline(cin, s1))
    {
        getline(cin, s2);
        getline(cin, s3);
        ls3 = s3;
        ls2 = s2;
        ls1 = s1;
        transform(ls3.begin(), ls3.end(), ls3.begin(), ::tolower);
        transform(ls2.begin(), ls2.end(), ls2.begin(), ::tolower);
        transform(ls1.begin(), ls1.end(), ls1.begin(), ::tolower);
        for(int i=0; i<s3.size(); i++)
        {
            if(ls3[i]=='<')
            {
                f1 = ls3.find(">",i);
                f2 = ls3.find(ls1, i);
                while(f2 != string::npos && f2 < f1)
                {
                    ls3.replace(f2, ls1.size(), ls2);
                    s3.replace(f2, ls1.size(), s2);
                    f1 = ls3.find(">",i);
                    f2 = ls3.find(ls1, i);
                }
            }
        }
        cout<<s3<<"\n";
    }
    return 0;
}