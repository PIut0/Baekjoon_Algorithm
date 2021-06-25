#include<bits/stdc++.h>

using namespace std;

queue<int>	q;

int main()
{
	int n;
	string	s;
	scanf("%d",&n);
	while (n--)
	{
		cin >> s;
		if (s == "front"){
			if (q.empty())
				printf("-1\n");
			else
				printf("%d\n",q.front());
		}
		else if (s == "back"){
			if (q.empty())
				printf("-1\n");
			else
				printf("%d\n",q.back());
		}
		else if (s == "size"){
			if (q.empty())
				printf("0\n");
			else
				printf("%lu\n",q.size());
		}
		else if (s == "empty"){
			printf("%d\n",q.empty());
		}
		else if (s == "pop"){
			if (q.empty())
				printf("-1\n");
			else{
				printf("%d\n",q.front());
				q.pop();
			}
		}
		else{
			int x;
			scanf("%d",&x);
			q.push(x);
		}
	}
}
