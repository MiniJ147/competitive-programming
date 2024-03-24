def calc(n):
    return (n*(n+1))//2
def solve():
    n = int(input())
    s = calc(n)
    if s % 2 != 0: 
        print("NO")
        return
    
    t = s//2
    l, r = [], []
    l_sum = r_sum = 0
    l_size = r_size = 0
    while n > 0 and l_sum < t and r_sum < t:
        if l_sum < r_sum:
            l.append(n)
            l_sum+=n 
            l_size+=1
            n-=1
        elif l_sum > r_sum:
            r.append(n)
            r_sum+=n
            r_size+=1
            n-=1
        else:
            l.append(n)
            l_sum+=n
            r.append(n-1)
            r_sum+=(n-1)
            l_size+=1
            r_size+=1
            n-=2
    while n>0 and l_sum < t:
        l.append(n)
        l_sum+=n
        l_size+=1
        n-=1
    while n>0 and r_sum < t:
        r.append(n)
        r_sum+=n
        n-=1
        r_size+=1
    print("YES")
    print(l_size)
    for i in range(l_size-1,-1,-1):
        print(l[i],end=" ")
    print("\n"+str(r_size))
    for i in range(r_size-1,-1,-1):
        print(r[i],end=" ")
    
    #print(l,r, l_sum, r_sum)


solve() 
