t = int(input())

def solve():
    n = int(input())
    v = set()
    ans = []
    for i in range(1,n+1):
        hc = i-1
        if  not  hc in v: 
            v.add(hc)
            ans.append((i,1))
        vc = 2*(i-1)
        if not vc in v:
            v.add(vc)
            ans.append((i,i))
    print(v,ans)

for i in range(3):
    solve()