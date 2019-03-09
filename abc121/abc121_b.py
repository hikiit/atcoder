n, m, c = input().split()
N = int(n)
M = int(m)
C = int(c)

array = list(map(int, input().strip().split(' ')))

A = []
for i in range(N):
    A.append(list(map(int, input().strip().split(' '))))

count = 0
for i in range(N):
    calc = 0
    for j in range(M):
        calc += A[i][j] * array[j]
    if 0 < calc + C:
        count += 1
print(count)
