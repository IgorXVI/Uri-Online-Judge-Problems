#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, num1, num2, g;
    string str1, str2, result;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>str1>>str2;
        num1 = stoi(str1, nullptr, 2);
        num2 = stoi(str2, nullptr, 2);
        g = __gcd(num1, num2);

        if (g > 1)
        {
            result = "All you need is love!";
        }
        else
        {

            result = "Love is not all you need!";
        }
        cout<<"Pair #"<<i+1<<": "<<result<<"\n";
    }
    return 0;
}