import statistics
 
n = int(input())
v = list(map(int,input().split()))
v.sort()
 
m = int(round(statistics.median(v)))
c = 0
 
for num in v: c += abs(num-m)
 
print(c)