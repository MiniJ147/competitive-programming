import collections

import queue

t = int(input())

def solve():
    n, m = list(map(int, input().split( )))
    a = input()
    b = input()
    dic = collections.defaultdict(queue.PriorityQueue)
    for i in range(m): dic[b[i]].put(i)
    idx = ans = 0
    for i in range(n):
        while not dic[a[i]].empty() and idx > dic[a[i]].queue[0]:
            dic[a[i]].get()
        if dic[a[i]].empty(): break
        idx = dic[a[i]].get()
        ans+=1
    print(ans)


for i in range(t):
    solve()