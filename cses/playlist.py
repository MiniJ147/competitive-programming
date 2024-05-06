# Source: https://usaco.guide/general/io

n = int(input())
k = list(map(int,input().split()))

w = set()
l = r = ans = 0
while r<n:
    if k[r] in w:
        w.remove(k[l])
        l+=1
    else:
        ans = max(ans,r-l+1)
        w.add(k[r])
        r+=1
print(ans)