#include <bits/stdc++.h>
#define M 70
using namespace std;
 
 
string arr1,arr2;
 
int pd[M][M];
 
 
int LCS(int t1, int t2){ // maior subsequencia comum! subsequencia e que nao precisa estar necessariamente junto
     
    if(t1 == -1 || t2 == -1) return 0;
     
    int & ref = pd[t1][t2];
     
    if(ref != -1) return ref;
     
    if(arr1[t1] == arr2[t2]) return ref = 1 + LCS(t1-1,t2-1);
     
    return ref = max(LCS(t1-1,t2),LCS(t1,t2-1));
}
 
 
 
int main(){
 
    //~ freopen("in","r",stdin);
     
    while((getline(cin,arr1) && getline(cin,arr2))){
         
        int t1 = arr1.size();
        int t2 = arr2.size();
         
        int ans = 0;
         
        for(int i1 = 0 ; i1 < t1 ; ++i1){
            for(int i2 = 0 ; i2 < t2 ; ++i2){
                int k = 0;
                while( t1 > i1+k && t2 > i2+k && arr1[i1+k] == arr2[i2+k]){
                    k++;
                }
                ans = max(k,ans);
            }
        }
         
        cout << ans << endl;
         
    }
    return 0;
}