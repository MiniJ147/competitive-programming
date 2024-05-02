n = int(input())
nums = list(map(int,input().split(" ")))
mp = [0] * (n+1)
for i in range(n): mp[nums[i]] = i 
print(1+sum(a>b for a,b in zip(mp[1:],mp[2:])))