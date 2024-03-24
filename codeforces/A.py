t = int(input())
def solve():
    n = int(input())
    path_str = input()
    p = [0] * n
    i = 0
    for c in path_str: 
        if c == ".": p[i] = 0
        elif c == '@': p[i] = 1
        else: p[i] = -1
        i+=1
    #dp = [0] * n
    i = cnt = mx = 0
    while i<n and p[i] != -1:
        j1 = 0 if i+1 >= n else p[i+1]
        j2 = 0 if i+2 >= n else p[i+2]
        if cnt+j1 < cnt+j2: 
            i+=2
            cnt+=j2
        elif cnt+j1 > cnt+j2:
            i+=1
            cnt+=j1
        else:
            i+=1
            cnt+=j1
        mx = max(mx,cnt)
    print(mx)


for _ in range(t):
    solve()