n = input()
N = int(n)

SP = {}
SPset = set()
S = []
P = []
R = []
for i in range(N):
    s, p = input().split()
    SPset.add(s)
    P.append(int(p))
    S.append(s)


SPset = list(SPset)
SPset.sort()

for spset in SPset:
    tmp = [i for i, x in enumerate(S) if x == spset]
    Plist = []
    for t in tmp:
        Plist.append(P[t])
    Plist.sort()
    for p in Plist[::-1]:
        R.append(P.index(p) + 1)
        
for r in R:
    print(r)
