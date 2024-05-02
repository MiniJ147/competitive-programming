t = int(input())

def solve():
    n = int(input())
    x = list(map(int,input().split()))
    ans = [max(x)+1]
    for i in range(n-1):
        ans.append(ans[i]+x[i])
    for i in range(n):
        print(ans[i],end=" ")
    print("")
for i in range(t):
    solve()