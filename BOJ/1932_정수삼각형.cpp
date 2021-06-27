#include <bits/stdc++.h>

int main()
{
	int n;
	int arr[501][501];
	int dp[501][501];
	int t;

	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++)
			scanf("%d",&arr[i][j]);
	}
	dp[0][0] = arr[0][0];
	for(int i=1;i<n;i++){
		for(int j=0;j<=i;j++){
			if (j == 0)
				dp[i][j] = dp[i-1][j] + arr[i][j];
			else if (j == i)
				dp[i][j] = dp[i-1][j-1] + arr[i][j];
			else
			{
				t = (dp[i-1][j] > dp[i-1][j-1]) ? dp[i-1][j] : dp[i-1][j-1];
				dp[i][j] = t + arr[i][j];
			}
		}
	}
	t = -1;
	for(int i=0;i<n;i++)
		t = (dp[n-1][i] > t) ? dp[n-1][i] : t;
	printf("%d",t);
}
