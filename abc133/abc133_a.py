x, y, z = input().split()
N = int(x)
A = int(y)
B = int(z)

if A * N < B:
    print(A * N)
else:
    print(B)
