n, m = input().split()
N = int(n)
M = int(m)

listL = []
listR = []
card = N
for i in range(M):
    l, r = input().split()
    L = int(l)
    R = int(r)

    listL.append(L)
    listR.append(R)

maxL = max(listL)
minR = min(listR)

if minR < maxL:
    result = 0
else:
    result = minR - maxL + 1
print(result)
