#include<bits/stdc++.h>

int main()
{
	char str1[1001];
	char str2[1001];
	char res[1001];
	int dp[1001][1001];

	for(int i=0;i<1001;i++){
		str1[i] = 0;
		str2[i] = 0;
		dp[i][0] = 0;
		dp[0][i] = 0;
	}

	scanf("%s",str1);
	scanf("%s",str2);

	int i;
	int j;
	j = -1;
	int max = -1;
	while(str2[++j]){
		i = -1;
		while(str1[++i]){
			if (str2[j] == str1[i])
				dp[j+1][i+1] = dp[j][i] + 1;
			else
				dp[j+1][i+1] = (dp[j][i+1] > dp[j+1][i]) ? dp[j][i+1] : dp[j+1][i] ;
			max = (max < dp[j+1][i+1]) ? dp[j+1][i+1] : max;
		}
	}
	printf("%d\n",max);

	int idx = 0;
	while(i && j){
		if(dp[j][i] == dp[j-1][i]){
			j--;
		}
		else if(dp[j][i] == dp[j][i-1]){
			i--;
		}
		else{
			res[idx] = str1[i-1];
			i--;
			j--;
			idx++;
		}
	}
	while(res[--idx])
		printf("%c",res[idx]);
}
