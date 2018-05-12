#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,q1,q2,p1,p2,mdl1[]{10,11,12,13,14,15};
    char aux,mdl2[]{'A','B','C','D','E','F'},mdl21[]{'a','b','c','d','e','f'};
    bool bhex;
    string s,shex;
    cin>>s;
    while(s[0]!='-'){
        if((s[1]=='x')||(s[1]=='X')){
            bhex=false;
            n=0;
            q1=s.size();
            q2=0;
            for(int i=q1-1;i>=2;i--){
                if((s[i]>=48)&&(s[i]<=57)){
                    p1=0;
                    for(int i1=48;i1<=57;i1++){
                        if(s[i]==i1){
                            n+=(p1*pow(16,q2));
                            break;
                        }
                        p1++;
                    }
                }
                else{
                    for(int i1=0;i1<6;i1++){
                        if((s[i]==mdl2[i1])||(s[i]==mdl21[i1])){
                            n+=(mdl1[i1]*pow(16,q2));
                            break;
                        }
                    }
                }
                q2++;
            }
        }
        else{
            bhex=true;
            stringstream convert(s);
            convert>>n;
            q1=0;
            if(n==0){
                shex[0]='0';
                q1=1;
            }
            else{
                while(n!=0){
                    if(n%16>=10){
                        for(int i=0;i<6;i++){
                            if(n%16==mdl1[i]){
                                shex[q1]=mdl2[i];
                                break;
                            }
                        }
                    }
                    else{
                        q2=0;
                        for(int i=48;i<=57;i++){
                            if(q2==n%16){
                                shex[q1]=i;
                                break;
                            }
                            q2++;
                        }
                    }
                    n/=16;
                    q1++;
                }
            }
        }
        if(bhex==true){
            p1=0;
            p2=q1-1;
            while(p2>p1){
                aux=shex[p2];
                shex[p2]=shex[p1];
                shex[p1]=aux;
                p2--;
                p1++;
            }
            for(int i=0;i<q1;i++){
                if(i==0){
                    cout<<"0x";
                }
                cout<<shex[i];
                if(i==q1-1){
                    cout<<"\n";
                }
            }
        }
        if(bhex==false){
            cout<<n<<"\n";
        }
        cin>>s;
    }
    return 0;
}