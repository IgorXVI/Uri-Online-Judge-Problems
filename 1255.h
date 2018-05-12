#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    char c;
    string s;
    cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++)
    {
        getline(cin, s);
        int arr[26], arr1[26];
        c = 'a';
        for(int j=0; j<26; j++)
        {
            arr[j]=0;
            for(int k = 0; k<s.length(); k++)
            {
                if(s[k]==c || s[k]==toupper(c))
                {
                    arr[j]++;
                }
            }
            c++;
        }
        for(int j=0; j<26; j++)
        {
            arr1[j] = arr[j];
        }
        sort(arr, arr + 26);
        q = 0;
        while(arr1[q]!=arr[25])
        {
            q++;
        }
        arr1[q] = 0;
        c = q + 97;
        cout<<c;
        for(int j = 1; j<25; j++)
        {
            if(arr[j] == arr[25] && arr[j]!=0)
            {
                q = 0;
                while(arr1[q]!=arr[25])
                {
                    q++;
                }
                arr1[q] = 0;
                c = q + 97;
                cout<<c;
            }
        }
        cout<<"\n";
    }
    return 0;
}