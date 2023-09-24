N = int(input())

s = []
n = []
for i in range(N):
    x = input()
    s.append(x)
    
setset = set(s)
s = list(setset)
s.sort(key=len)
l = len(s)

for i in range(l):
    n.append(0)

for i in range(0, l-1):
    for j in range(i+1, l):
        id = s[j].find(s[i])
        if id == 0:
            n[i] += 1

num = 0
for i in range(l):
    if n[i] == 0:
        num += 1
        
if num == 0:
    print(1)
else:
    print(num)