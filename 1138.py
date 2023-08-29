N = int(input())

list1 = list(map(int, input().split()))
result = []

for i in range(N):
    result.append(0)
    
for i in range(N):
    n = 0
    for j in range(N):
        if result[j] > i or result[j] == 0:
            n += 1
        if n == list1[i] + 1:
            result[j] = i + 1
            break
        else:
            continue

for i in range(N):
    print(str(result[i]), end = " ")