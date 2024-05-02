n, w = list(map(int,input().split()))
wi = sorted(map(int,input().split()))
ans = s = l = 0
r = n-1
while l<=r:
    s = wi[l]+wi[r]
    if s > w: r-=1
    else: l+=1; r-=1
    ans+=1
print(ans)