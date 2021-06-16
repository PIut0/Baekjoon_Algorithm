#include <bits/stdc++.h>
using namespace std;
int dp[4001][4001];

int main()
{
	int max = -1;
	string s1, s2;
	cin >> s1 >> s2;

	int n1 = s1.length();
	int n2 = s2.length();
	memset(dp, 0, sizeof(dp));

	for(int i=0;i<n1;i++){
		if (s1[i] == s2[0])
			dp[i][0] = 1;
	}
	for(int i=0;i<n2;i++){
		if (s1[0] == s2[i])
			dp[0][i] = 1;
	}

	for(int i=1;i<n1;i++){
		for(int j=1;j<n2;j++){
			if(s1[i] == s2[j])
				dp[i][j] = dp[i-1][j-1] + 1;
			max = (max < dp[i][j]) ? dp[i][j] : max;
		}
	}

	printf("%d",max);
}
