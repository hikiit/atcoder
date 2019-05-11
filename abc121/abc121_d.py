binary2 = []
tmp = 1
for i in range(40):
    binary2.append(tmp)
    tmp = tmp * 2

a, b = input().split()
A = int(a) + 1
B = int(b) + 1

xor = []
for i in range(40):
    if i == 0:
        tmp3a = A // 2
        tmp3b = B // 2
    else:
        tmp1a = A / binary2[i]
        tmp2a = A % binary2[i]
        tmp3a = (tmp1a // 2 * (binary2[i] / 2))
        if int(tmp1a) % 2 != 0:
            tmp3a += tmp2a

        tmp1b = B / binary2[i]
        tmp2b = B % binary2[i]
        tmp3b = (tmp1b // 2 * (binary2[i] / 2))
        if int(tmp1b) % 2 != 0:
            tmp3b += tmp2b
        
    if (tmp3b - tmp3a) % 2 == 0:
        xor.append(0)
    else:
        xor.append(1)
xor.reverse()
print(xor)
    
    






'''

xor = A
for i in range(B - A):
    A += 1
    xor = xor ^ A
print(xor)
'''