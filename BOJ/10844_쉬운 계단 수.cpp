#include <bits/stdc++.h>

#define mod 1000000000

int main()
{
	int arr[100][10];
	int n;
	int count = 0;

	scanf("%d", &n);
	arr[0][0] = 0;
	for(int i=1;i<10;i++)
		arr[0][i] = 1;
	for(int i=1;i<n;i++){
		arr[i][0] = arr[i-1][1];
		arr[i][9] = arr[i-1][8];
		for(int j=1;j<9;j++)
			arr[i][j] = ((arr[i-1][j-1] % mod) + (arr[i-1][j+1] % mod)) % mod;
	}
	for(int i=0;i<10;i++)
		count = (count + arr[n-1][i]) % mod;
	printf("%d",count % mod);
}
