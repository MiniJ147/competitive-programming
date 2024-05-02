n, l, ps, mn = int(input()), list(map(int,input().split())), [0], 0
for a in l: ps.append(ps[-1]+a)
print(max(a-mn+(mn:=min(mn, a))-mn for a in ps[1:]))