from collections import Counter

n = int(input())
nums = list(map(int,input().split(" ")))
ans = 0
s = []
while len(nums) > 1:
    s = []
    idx = 1
    n = len(nums)
    while idx < n:
        if nums[idx-1] > nums[idx]: 
            s.append(nums[idx-1])
        else: 
            while idx < n and nums[idx-1] < nums[idx]: idx+=1
            if idx < n:
                s.append(nums[idx])
        idx += 1
    nums = s
    ans+=1

ans += len(nums)
print(ans)