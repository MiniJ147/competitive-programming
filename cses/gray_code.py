n = int(input())
w = []
def dfs(i,s):
    if i >= n:
        #print(s)
        w.append(s)#int(s,2))
        return
    dfs(i+1,s+"0")
    dfs(i+1, s+"1")
dfs(0,"")
l = 2 ** n
i = 0
cnt = 0
print(w)
'''while i < l:
    if cnt % 2 == 0:
        for wo in w[i:i+2]:
            print(wo)
    else:
        for wo in reversed(w[i:i+2]):
            print(wo)
    cnt+=1
    i+=2'''