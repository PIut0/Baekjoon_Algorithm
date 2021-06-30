#include <bits/stdc++.h>

int get_min(int a, int b, int c){
	if (a <= b && a <= c)	return (a);
	else if (b <= a && b <= c)	return (b);
	else	return (c);
}

int main()
{
	int map[1001][1001];
	int dp[1001][1001];
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%1d",&map[i][j]);
		}
	}
	int max = 0;
	for(int i=0;i<n;i++){
		dp[i][0] = map[i][0];
		max = (max < dp[i][0]) ? dp[i][0] : max;
	}
	for(int j=0;j<m;j++){
		dp[0][j] = map[0][j];
		max = (max < dp[0][j]) ? dp[0][j] : max;
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++){
			if (map[i][j] == 0){
				dp[i][j] = 0;
				continue ;
			}
			dp[i][j] = get_min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1]) + 1;
			max = (max < dp[i][j]) ? dp[i][j] : max;
		}
	}
	printf("%d",max * max);
}
