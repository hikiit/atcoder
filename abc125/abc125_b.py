n = input()
A = int(n)


V = list(map(int, input().strip().split(' ')))
C = list(map(int, input().strip().split(' ')))

ans = 0
for i in range(A):
    if C[i] < V[i]:
        ans += V[i] - C[i]
print(ans)