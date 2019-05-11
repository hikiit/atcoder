import numpy

N = int(input())
A = list(map(int, input().strip().split(' ')))

sorted_index = sorted(range(len(A)), key=lambda k: abs(A[k]))
sorted_index = sorted_index[::-1]

for i in range(N):
    if sorted_index[i] == N - 1:
        continue

    if A[sorted_index[i]] < 0:
        if 0 < A[sorted_index[i]+1] and abs(A[sorted_index[i]]) < A[sorted_index[i]+1]:
            continue
        A[sorted_index[i]] = A[sorted_index[i]] * -1
        A[sorted_index[i]+1] = A[sorted_index[i]+1] * -1

ans = numpy.sum(A)
print(ans)
