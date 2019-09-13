#include <bits/stdc++.h>
#include <vector>
#pragma warning(disable:4996)

using namespace std;
#define pb push_back
#define mp make_pair

vector <pair<int, int> > v;
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		v.pb(mp(-a, b));
	}
	sort(v.begin(), v.end());
	int k;
	int count = 0;
	k = v[4].first;
	for (int i = 5; i < n; i++) {
		if (v[i].first == k)
			count++;
	}
	printf("%d", count);
}
