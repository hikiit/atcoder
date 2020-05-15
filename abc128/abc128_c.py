import itertools

n, m = input().split()
N = int(n)
M = int(m)

K = []
for i in range(M):
    K.append(list(map(int, input().strip().split(' '))))

P = list(map(int, input().strip().split(' ')))

SW = {0, 1}
SWlist = list(itertools.product(SW, repeat=N))

result = 0
fflag = False

for i in range(len(SWlist)):
    for j in range(len(K)):
        count = 0
        for k in range(K[j][0]):
            if SWlist[i][k] == 1:
                count += 1
        if count % 2 != P[j]:
            fflag = True
            break
    if not fflag:
        result += 1
    else:
        fflag = False
print(result)
