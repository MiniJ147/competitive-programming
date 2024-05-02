from collections import Counter

n = int(input())
ans = 0
while n>0:
    n = n//5
    ans+=n
print(ans)