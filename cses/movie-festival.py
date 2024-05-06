# Source: https://usaco.guide/general/io

START = 1
END = 0
n = int(input())
m = []
for i in range(n):
	a,b = list(map(int,input().split()))
	m.append((b,a))
m.sort()
ans = endt = 0
for i in range(n):
	if endt<=m[i][START]: 
		endt=m[i][END]
		ans+=1
print(ans)