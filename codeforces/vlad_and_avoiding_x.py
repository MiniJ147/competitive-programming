def solve():
    matrix = []
    for _ in range(7):
        l = list(input())
        for c in l: matrix.append(0 if c == 'W' else 1) 


t = int(input())
while t > 0:
    print(solve())
    t-=1