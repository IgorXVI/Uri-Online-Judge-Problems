#include <bits/stdc++.h>

using namespace std;

int main()
{
    char letra[1000],letra1[1000];
    int compr,n,l,i;
    cin>>i;
    getchar();
    while(i--){
        gets(letra);
        compr=strlen(letra);
        n=0;
        for(int y=0;y<compr;y++){
            if(isalpha(letra[y])){
                letra[y]+=3;
            }
        }
        for(int j=compr-1;j>=0;j--){
            letra1[n]=letra[j];
            n++;
        }
        letra1[n]='\0';
        l=compr/2;
        for(int k=l;k<compr;k++){
            letra1[k]-=1;
        }
        cout<<letra1<<"\n";
    }
    return 0;
}