import math

t = int(input())

def solve():
    x = int(input())
    mx = -1
    ans = -1
    for y in range(x-1,0,-1):
        if math.gcd(x,y)+y >= mx:
            mx = math.gcd(x,y)+y
            ans = y
    print(ans)

for i in range(t):
    solve()