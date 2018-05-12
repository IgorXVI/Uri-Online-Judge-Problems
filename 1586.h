#include <bits/stdc++.h>

using namespace std;

int bs(vector<int> v)
{
    long long int low, high, meio, len1, len2, forca1, forca2, q;
    low = 0;
    high = v.size() - 1;
    while(low <= high)
    {
        meio = (high + low) / 2 ;
        len1 = v.size();
        len2 = meio + 1;
        forca1 = 0;
        forca2 = 0;
        for(int i = 0; i < len2; i++)
        {
            forca1 += v[i] * (len2 - i);
        }
        q = 1;
        for(int i = meio + 1; i < len1; i++)
        {
            forca2 += v[i] * (q);
            q++;
        }
        if(forca1 == forca2)
        {
            return meio;
        }
        if(forca1 > forca2)
        {
            high = meio - 1;
        }
        else
        {
            low = meio + 1;
        }
    }
    return -1;
}

int main()
{
    //freopen("entrada.txt","r",stdin);
    long long int n, result;
    string s;
    vector<int> v;
    cin>>n;
    while(n != 0)
    {
        string arr[n];
        for(int i = 0; i < n; i++)
        {
            cin>>s;
            v.push_back(0);
            for(int j = 0; j < s.size(); j++)
            {
                v[i] += s[j];
            }
            arr[i] = s;
        }
        result = bs(v);
        if(result == -1)
        {
            cout<<"Impossibilidade de empate.\n";
        }
        else
        {
            cout<<arr[result]<<"\n";
        }
        v.clear();
        cin>>n;
    }
    return 0;
}