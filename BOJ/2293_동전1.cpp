#include<bits/stdc++.h>

int main()
{
	int coin[100];
	int dp[10001];
	int n,k;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&coin[i]);
	}
	for(int i=1;i<=k;i++)
		dp[i] = 0;
	dp[0] = 1;
	for(int i=0;i<n;i++){
		for(int j=1;j<=k;j++){
			if (coin[i] > j)
				continue ;
			dp[j] += dp[j - coin[i]];
		}
	}
	printf("%d",dp[k]);
}
