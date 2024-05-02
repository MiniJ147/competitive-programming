def solve():
    f = ""
    n, m = list(map(int,input().split()))
    a = list(map(int,input().split()))
    c = input()
    rightPre = 1
    leftPre = 1
    for i in range(n):rightPre *= a[i]
    l, r = 0, n-1
    for com in c:
        f += str(((rightPre//leftPre)%m))+" " 
        if com == "L": 
            leftPre *= a[l]
            l+=1
        else:
            rightPre = rightPre//a[r] 
            r-=1
    print(f)

t = int(input())
for _ in range(t):
    solve()