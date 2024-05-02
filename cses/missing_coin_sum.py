from collections import Counter

def calc(n): return n*(n+1)//2

def solve():
    n = int(input())
    nums = sorted(list(map(int, input().split(" "))))
    pre = 0
    for i in range(n):
        if pre+nums[i] > calc(i+1): return pre+1
        pre+=nums[i]
    return (pre+1)
print(solve())