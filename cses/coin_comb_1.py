n, x = map(int,input().split())
c = list(map(int, input().split()))
ans = 0
dp = [-1] * (n+1)

def dfs(curr,s):
    global ans
    if s > x: return
    if s == x: ans+=1; return
    for i in range(n):
        curr.append(c[i])
        dfs(curr,s+c[i])
        curr.pop()
dfs([],0)
print(ans)