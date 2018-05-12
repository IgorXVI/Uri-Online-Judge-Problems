#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    cin>>i;
    cin.ignore();
    while(i--){
        int e=0,a=0,l[50],l1[50],n;
        char arr[50][50],s[2550];
        cin.getline(s,2550);
        int slen=strlen(s);
        for(int i1=0;i1<slen;i1++){
            if(s[i1]==32){
                l[e]=a;
                l1[e]=a;
                e++;
                a=0;
            }
            else{
                arr[e][a]=s[i1];
                a++;
            }
        }
        l[e]=a;
        l1[e]=a;
        sort(l,l+(e+1));
        for(int i2=e;i2>=0;i2--){
            if((l[i2]!=l[i2+1])||(i2==e)){
                n=0;
            }
            else{
                n++;
            }
            while(l[i2]!=l1[n]){
                n++;
            }
            for(int i3=0;i3<l[i2];i3++){
                cout<<arr[n][i3];
            }
            if(i2==0){
                cout<<"\n";
            }
            else {
                cout<<" ";
            }
        }
    }
    return 0;
}