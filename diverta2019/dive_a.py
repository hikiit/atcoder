n, m = input().split()
N = int(n)
K = int(m)

result = N - K
if K == 1:
    result = 0
print(result)
