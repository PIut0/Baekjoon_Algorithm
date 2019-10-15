#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int fibo[80];
    fibo[0] = 1;
    fibo[1] = 2;
    for(int i=2;i<80;i++){
        fibo[i] = fibo[i-1]+fibo[i-2];
    }
    long long int n;
    scanf("%lld",&n);
    int k=0;
    for(;fibo[k]<=n;k++);
    while(n != fibo[k] && n!= fibo[k-1]){
        k-=1;
        n = n - fibo[k];
        for(k=0;fibo[k]<n;k++);
    }
    printf("%lld",n);
}