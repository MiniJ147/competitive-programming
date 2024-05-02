def solve():
    n = int(input())
    l = sorted(map(int,input().split()))
    pre = 0
    if l[0] > 1: return 1
    for i in range(n-1):
        pre += l[i]
        if pre+1 < l[i+1]: return (pre+1)
    return pre+l[-1]+1
print(solve())