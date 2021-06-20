#include <bits/stdc++.h>

int main()
{
	int map[301][301];
	int dp[301][301];
	int n,m,t;

	for(int i=0;i<301;i++)
		for(int j=0;j<301;j++)
		{
			map[i][j] = 0;
			dp[i][j] = 0;
		}

	scanf("%d %d",&n,&m);

	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			scanf("%d",&map[i][j]);

	dp[1][1] = map[1][1];
	for(int i=2;i<=n;i++)
		dp[i][1] = dp[i-1][1] + map[i][1];
	for(int i=2;i<=m;i++)
		dp[1][i] = dp[1][i-1] + map[1][i];
	for(int i=2;i<=n;i++)
		for(int j=2;j<=m;j++)
			dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + map[i][j];

	//for(int i=0;i<=n;i++)
	//{
	//	for(int j=0;j<=m;j++)
	//		printf("|%3d| ",dp[i][j]);
	//	printf("\n");
	//}
	scanf("%d",&t);
	while(t--)
	{
		int x1,y1,x2,y2;
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		printf("%d\n",dp[x2][y2] - dp[x2][y1-1] - dp[x1-1][y2] + dp[x1-1][y1-1]);
	}
}
