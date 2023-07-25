from itertools import combinations

N = int(input())

number = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
l = []
for i in range(1, 11):
    x = list(combinations(number, i))
    l.append(x)

for i in range(10):
    for j in range(len(l[i])):
        m = 1
        num = 0
        for k in range(len(l[i][j])):
            num += l[i][j][k] * m
            m *= 10
        l[i][j] = num
    l[i].sort()

f = []
for i in range(10):
    for j in range(len(l[i])):
        f.append(l[i][j])

if N > len(f):
    print(-1)
else:
    print(f[N-1])