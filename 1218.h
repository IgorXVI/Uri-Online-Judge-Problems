#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c=1,x=0;
    char n[2];
    while(cin>>n[0]>>n[1]){
        cin.ignore();
        if(x!=0){
            cout<<"\n";
        }
        int ss,m=0,f=0,pi=0;
        string s;
        getline(cin,s);
        ss=s.size();
        for(int i=0;i<ss;i++){
           if((s[i]==n[0])&&(s[i+1]==n[1])){
                pi++;
                if(s[i+3]=='F'){
                f++;
                }
                else if(s[i+3]=='M'){
                m++;
                }
            }
        }
        cout<<"Caso "<<c<<":\nPares Iguais: "<<pi<<"\nF: "<<f<<"\nM: "<<m<<"\n";
        c++;
        x++;
    }
    return 0;
}