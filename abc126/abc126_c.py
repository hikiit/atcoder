import math

n, m = input().split()
N = int(n)
K = int(m)

NN = (N / 2) * (N + 1)

NN = NN / N

result = 0.0
for i in range(N):
    X = K / (i + 1)
    X = math.log(X, 2)
    if X == int(X):
        pass
    else:
        X = math.floor(X) + 1
    if X < 0:
        result += (1 / N)
    else:
        result += (1 / N) * ((1/2) ** X)

print(result)

'''
print(X)
if X.is_integer():
    result = (1/2) ** X
else:
    result = (1/2) ** X
print(result)
'''