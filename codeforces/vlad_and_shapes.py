from collections import Counter
def solve():
    n = int(input())
    grid = []
    mi, mx = n+1, -1
    for _ in range(n):
        freq = list(input()).count('1')
        mi = min(mi, freq if freq != 0 else 1e9)
        mx = max(mx, freq if freq != 0 else -1)
    if mi == mx: return "SQUARE"
    return "TRIANGLE"
t = int(input())
while t > 0:    
    print(solve())
    t-=1