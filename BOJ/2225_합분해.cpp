#include <bits/stdc++.h>
#define mod 1000000000

int main()
{
	int arr[201][201];
	int n,k;
	scanf("%d %d",&n,&k);
	for(int i=0;i<=n;i++)
		arr[i][0] = 1;
	for(int i=0;i<=k;i++)
		arr[0][i] = 1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<k;j++)
			arr[i][j] = (arr[i-1][j] % mod + arr[i][j-1] % mod) % mod;
	}
	printf("%d",arr[n][k - 1]);
}
