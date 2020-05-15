x, y = input().split()
L = int(x)
R = int(y)

list673 = []
for i in range(5000000):
    list673.append(673 * i)

answer = (L * (L + 1)) % 2019

for l673 in list673:
    if L <= l673 and l673 <= R:
        for i in [1, 2, 3]:
            if L <= l673 - i and (l673 - i) % 3 == 0:
                answer = 0
                break
            elif l673 - i <= R and (l673 + i) % 3 == 0:
                answer = 0
                break
    if answer == 0:
        break

print(answer)

'''
if 2019 <= R - L:
    print(0)

else:
    tmp = (L * (L + 1)) % 2019
    print(tmp)
    if 2019 - tmp <= R - L:
        print(0)
    else:
        print(tmp)
   
    res = 2*10**9
    for i in range(R-L):
        tmp = (L * (L + i + 1)) % 2019
        
        print(L)
        print(L+i+1)
        print((L * (L + i + 1)))
        
        if tmp < res:
            res = tmp
    print(res)
    '''
