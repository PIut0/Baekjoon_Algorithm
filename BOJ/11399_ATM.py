from sys import stdin

n = int(stdin.readline().rstrip())
arr = [int(x) for x in stdin.readline().rstrip().split()]
arr.sort()
sum = 0
for i in range(len(arr)):
	sum += (arr[i] * (len(arr) - i))
print (sum)
