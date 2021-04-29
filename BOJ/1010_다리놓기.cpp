#include <bits/stdc++.h>

int dp[30][30];

int main()
{
	for(int i=0;i<30;i++)
		for(int j=0;j<30;j++)
			dp[i][j] = 0;
	for(int i=0;i<30;i++) {
		dp[i][0] = 1;
		dp[i][i] = 1;
	}
	for(int i=2;i<30;i++)
		for(int j=1;j<i;j++)
			dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
	int t;
	scanf("%d",&t);
	while(t--) {
		int n,m;
		scanf("%d %d",&n,&m);
		printf("%d\n",dp[m][n]);
	}
}
