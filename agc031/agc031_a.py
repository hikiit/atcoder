import itertools
n = input()
st = input()
S = list(st)

count = 0
for i, _ in enumerate(S, 1):     
    for j in itertools.combinations(S, r=i):
        if len(j) == len(set(j)):
            count += 1
print(count)
