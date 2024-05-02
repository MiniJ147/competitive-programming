from collections import Counter

n = int(input())
arr = list(map(int,input().split()))
print(len(Counter(arr)))