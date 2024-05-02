t = int(input())

def test(arr, n):
    for i in range(n-1):
        if arr[i] > arr[i+1]:
            l = -1e99 if i-1 < 0 else arr[i-1]
            r = arr[i+1]
            c = list("".join(str(arr[i])))
            c_l = len(c)
            for j in range(c_l-1):
                if int(c[j]) > int(c[j+1]): return "NO"
            if c_l < 2 and l > int(c[0]) or r < int(c[0]):return "NO"
            elif l > int(c[0]) or r < int(c[-1]): return "NO" 
    return "YES"
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    print(test(arr,n))