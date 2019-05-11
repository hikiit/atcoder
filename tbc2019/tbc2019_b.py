n = input()
N = int(n)

s = input()
S = list(s)

k = input()
K = int(k)

tmp = S[K-1]

ans = []
for s in S:
    if s == tmp:
        ans.append(s)
    else:
        ans.append("*")
for a in ans:
    print(a, end='')
print("")