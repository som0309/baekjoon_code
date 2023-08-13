N, K = map(int, input().split())

x = N
list1 = []
while(x!=0):
    list1.append(x%2)
    x = x // 2

n = 0
id = 0
for i in reversed(range(len(list1))):
    if list1[i]==1:
        n += 1
    if n == K:
        id = i
        break

sum = 0
first = True
for i in range(id):
    if list1[i] == 1 and first:
        sum += 2**i
        first = False
    elif list1[i] == 0 and not first:
        sum += 2**i

print(sum)