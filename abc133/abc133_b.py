import math

x, y = input().split()
N = int(x)
D = int(y)

X = []
for i in range(N):
    X.append(list(map(int, input().strip().split(' '))))

answer = 0
for i in range(N):
    for j in range(N - i):
        res = 0.0
        tmpj = N - j - 1
        if i == tmpj:
            continue
        for d in range(D):
            res += (X[i][d] - X[tmpj][d]) ** 2
        res = math.sqrt(res)
        if res.is_integer():
            answer += 1
print(answer)
