t = int(input())
l = ['A','B']
for i in range(t):
    s = ""
    n = int(input())
    if n % 2 != 0:
        print("NO")
        continue
    j = 0
    while j < n//2:
        s += l[j%2] * 2
        j+=1
    print("YES")
    print(s)
