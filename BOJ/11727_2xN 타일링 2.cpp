#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int dp[1001];
    int n;
    scanf("%d",&n);

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 3;
    for(int i=3;i<=n;i++){
        dp[i] = (dp[i-1]%10007 + dp[i-2]%10007 + dp[i-2]%10007)%10007;
    }
    printf("%lld",dp[n]);
}