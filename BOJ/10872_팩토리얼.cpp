#include<stdio.h>

int main(){
    int f[13];
    f[0] = 1;
    for(int i=1;i<13;i++){
        f[i] = f[i-1]*i;
    }
    int n;
    scanf("%d",&n);
    printf("%d",f[n]);
}