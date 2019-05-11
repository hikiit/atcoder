n, m = input().split()
n = int(n)
m = int(m)
i_b = [[0]*n]*n

am = []
bm = []

for i in range(m):
    a, b = input().split()
    a = int(a) - 1
    b = int(b) - 1
    am.append(a)
    bm.append(b)
    i_b[a][b] = 1
    i_b[b][a] = 1

    island = [[0]*n]*n
    for i in range(n):
        for j in range(n):
            if i_b[i][j] == 1:
                island[i][j] = 1
                count = 0
                for k in i_b[j]:
                    if k == 1 and count != i:
                        island[i][count] = 1
                    count += 1
            
    sum = 0
    for i in range(n):
        sum += island[i].count(1)
    print(sum)

'''
ai = 0
bi = 0
while True:
    amt = am[ai]
    bmt = bm[ai]
    i_b[amt][bmt] = 0
    i_b[bmt][amt] = 0

    island = [[0]*n]*n
    for i in range(n):
        for j in range(n):
            if i_b[i][j] == 1:
                island[i][j] = 1
                count = 0
                for k in i_b[j]:
                    if k == 1 and count != i:
                        island[i][count] = 1
                    count += 1
            else:
                island[i][j] = 0

    sumt = 0
    for i in range(n):
        sumt += island[i].count(1)
    if sum - sumt == 0:
        break
    print(sum - sumt)
    ai += 1
    bi += 1
'''