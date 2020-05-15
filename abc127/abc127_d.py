import numpy as np

n, m = input().split()
N = int(n)
M = int(m)

A = list(map(int, input().strip().split(' ')))
npA = np.array(A)

for i in range(M):
    b, c = input().split()
    B = int(b)
    C = int(c)
    npA = np.sort(npA)
    # print(npA)
    miniarr = np.where(npA < C)
    if B < len(miniarr[0]):
        # print(miniarr[0][:B])
        npA[miniarr[0][:B]] = C
    else:
        npA[miniarr[0]] = C

print(npA.sum())
