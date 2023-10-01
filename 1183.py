N = int(input())

A = []
B = []
s = []

for i in range(N):
    a, b= map(int, input().split())
    A.append(a)
    B.append(b)
    s.append(b-a)
    
s.sort()

if N%2 == 1:
    print(1)
else:
    i2 = int(N / 2)
    i1 = i2 - 1
    print(s[i2] - s[i1] + 1)