#include <bits/stdc++.h>
using namespace std;

int main()
{
	int dp[301][2];
	int data[301];
	int n;
	int s;

	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&data[i]);
	}

	dp[0][0] = 0;
	dp[0][1] = 0;
	dp[1][0] = data[0];
	dp[1][1] = data[0];
	for (int i=2;i<=n;i++)
	{
		s = (dp[i - 2][0] > dp[i - 2][1]) ? dp[i - 2][0] : dp[i - 2][1];
		dp[i][0] = s + data[i - 1];
		dp[i][1] = dp[i - 1][0] + data[i - 1];
	}
	s = (dp[n][0] > dp[n][1]) ? dp[n][0] : dp[n][1];
	printf("%d\n",s);
}
