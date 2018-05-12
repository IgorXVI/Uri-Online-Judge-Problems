#include <bits/stdc++.h>

using namespace std;

int f(int n, int k)
{
    if (n == 1){
        return 1;
    }
    return ( (f(n - 1, k) + k - 1) % n ) + 1;
}

int main()
{
    int casos, N,M;
    cin >> casos;
    for (int h = 1; h <= casos; h++)
    {
        cin >> N >> M;
        printf("Case %d: %d\n", h, f(N,M) );
    }
    return 0;
}