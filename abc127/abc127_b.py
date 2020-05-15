n, m, k = input().split()
R = int(n)
D = int(m)
X = int(k)

tmp = X
for i in range(10):
    tmp = R * tmp - D
    print(tmp)
