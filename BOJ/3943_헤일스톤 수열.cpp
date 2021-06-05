#include <bits/stdc++.h>

int main()
{
	int t;
	scanf("%d",&t);
	int arr[100001];
	for(int i=0;i<=100000;i++)
		arr[i] = 0;
	for(int i=1;i<=100000;i++)
	{
		int x;
		int max;
		max = x = i;
		while (x > 1)
		{
			if (x % 2 == 1)
				x = x * 3 + 1;
			else
				x = x / 2;
			if (x <= 100000 && arr[x])
			{
				max = (max < arr[x]) ? arr[x] : max;
				break;
			}
			max = (max < x) ? x : max;
		}
		//printf("%d : %d\n",i,max);
		arr[i] = max;
		if (max <= 100000)
			arr[max] = max;
	}
	while(t--)
	{
		int n;
		scanf("%d",&n);
		printf("%d\n",arr[n]);
	}
}
