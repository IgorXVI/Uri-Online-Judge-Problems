#include <bits/stdc++.h>

using namespace std;


int main()
{
    //freopen("entrada.txt", "r", stdin);
    double a, som, high, low, meio, a1;
    int n, ar, a1r;
    cin>>n>>a;
    while(a != 0.0 || n != 0)
    {
        double arr[n];
        som = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
            som += arr[i];
        }
        if(som == a)
        {
            cout<<":D\n";
        }
        else if(som < a)
        {
            cout<<"-.-\n";
        }
        else
        {
            sort(arr, arr + n);
            low = 0;
            high = arr[n - 1];
            ar = round(a) * 10000;
            while(low < high)
            {
                a1 = 0;
                meio = low + ( (high - low) / 2 );
                for(int i = 0; i < n; i++)
                {
                    if(arr[i] > meio)
                    {
                        a1 += arr[i] - meio;
                    }
                }
                a1r = round(a1) * 10000;
                if(a1 > a)
                {
                    low = meio + 0.0000001;
                }
                else
                {
                    high = meio - 0.0000001;
                }
            }
            //cout<<"a1r "<<a1r<<"\n";
            //cout<<"ar "<<ar<<"\n";
            if(a1r != ar){
                cout<<"-.-\n";
            }
            else{
                cout<<fixed<<setprecision(4)<<meio<<"\n";
            }
            /*a1 = 0;
            for(int i = 0; i < n; i++)
            {
                if(arr[i] > meio)
                {
                    a1 += arr[i] - meio;
                }
            }
            cout<<a1<<"\n";*/
        }
        //cout<<"\n\n";
        cin>>n>>a;
    }
    return 0;
}