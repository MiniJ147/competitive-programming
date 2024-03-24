from collections import Counter

t = int(input())
while t > 0:
    print(Counter(input()).most_common()[0][0])
    t-=1