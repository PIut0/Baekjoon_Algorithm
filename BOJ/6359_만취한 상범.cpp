#include<bits/stdc++.h>

int main()
{
	int T;
	scanf("%d", &T);
	int arr[101];
	for(int i=0;i<101;i++)
		arr[i] = 0;
	for(int i=1;i<=100;i++)
		for(int j=i;j<=100;j+=i)
			arr[j-1] = (arr[j-1]) ? 0 : 1;
	while (T--)
	{
		int n;
		int count = 0;
		scanf("%d", &n);
		for(int i=0;i<n;i++)
			count+=arr[i];
		printf("%d\n",count);
	}
}
