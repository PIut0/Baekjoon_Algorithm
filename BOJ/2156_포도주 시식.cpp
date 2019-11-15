#include<bits/stdc++.h>
using namespace std;

int main(){
    int podo[10001];
    int dp10[10001];
    int dp20[10001];
    int dp21[10001];
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&podo[i]);
    }

    dp21[0] = podo[0];
    dp20[0] = podo[0];
    dp10[0] = podo[0];
    dp21[1] = podo[0];
    dp20[1] = podo[1];
    dp10[1] = podo[1]+podo[0];
    for(int i=2;i<n;i++){
        dp21[i] = dp10[i-1];
        dp20[i] = max(dp21[i-1] + podo[i],dp21[i-2]+podo[i]);
        dp20[i] = max(dp20[i],dp20[i-2]+podo[i]);
        dp10[i] = dp20[i-1] + podo[i];
    }
    int result;
    result = max(dp21[n-1],dp20[n-1]);
    result = max(result,dp10[n-1]);
    printf("%d",result);
}