from sys import stdin

n,m,r = [int(x) for x in stdin.readline().rstrip().split()]
arr = []
for i in range(n):
	p = [int(x) for x in stdin.readline().rstrip().split()]
	arr.append(p)

for _ in range(r):
	new_arr = [[0 for _ in range(m)] for _ in range(n)]
	for k in range((int)(min(n,m)/2)):
		for i in range(k, m-k-1):
			new_arr[k][i] = arr[k][i+1]
			new_arr[n-k-1][i+1] = arr[n-k-1][i]
		for i in range(k, n-k-1):
			new_arr[i+1][k] = arr[i][k]
			new_arr[i][m-k-1] = arr[i+1][m-k-1]
	arr = new_arr

for i in range(len(arr)):
	for j in range(len(arr[i])):
		print(arr[i][j], end=' ')
	print()
