n, f, cnt = int(input()), [], 0
for num in input().split(' '): f.append(int(num))
for i in range(n):
    s = 0
    win = set()
    for j in range(i,n):
        win.add(f[j])
        s+=f[j]
        l = (j-i)+1
        avg = s / l
        if avg in win: cnt+=1
print(cnt)