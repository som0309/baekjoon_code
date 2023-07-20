L, R = input().split()

lL = len(L) 
lR = len(R)

num = 0
if lL == lR:
    for i in range(lL):
        if L[i] == '8' and R[i] == '8':
            if i > 0:
                num1 = int(L[0:i+1])
                num2 = int(R[0:i+1])
                if num2 - num1 == 0:
                    num += 1
            else:
                num += 1
    print(num)
else:
    print(0)