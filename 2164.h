#include <cstdio>
#include <cmath>
 
int main(){
    int n;
 
    scanf("%d", &n);
 
    printf("%.1f\n", (pow((1+sqrt(5.0))/2.0, n) - pow((1-sqrt(5.0))/2.0, n)) / sqrt(5.0));
 
    return 0;
}