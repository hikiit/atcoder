n, m, c = input().split()
N = int(n)
M = int(m)
C = int(c)

if C < M and N < C:
    print("Yes")
    exit()
if C < N and M < C:
    print("Yes")
    exit()
print("No")