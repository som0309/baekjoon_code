N, S = map(int, input().split())
array = list(map(int, input().split()))

def subset(list1, n, sum):
    if n == 0:
        if sum == 0:
            return 1
        else:
            return 0
    include = subset(list1, n-1, sum - list1[n-1])
    exclude = subset(list1, n-1, sum)
    return include + exclude

num = subset(array, len(array), S)

if S == 0:
    print(num-1)
else:
    print(num)