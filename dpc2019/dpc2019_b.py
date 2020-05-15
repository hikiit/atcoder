A = list(map(int, input().strip().split(' ')))
R = A[0]
G = A[1]
B = A[2]
N = A[3]


r = [0]
m = 1
while True:
    tmp = R * m
    if N < tmp:
        break
    r.append(tmp)
    m += 1

g = [0]
m = 1
while True:
    tmp = G * m
    if N < tmp:
        break
    g.append(tmp)
    m += 1

b = [0]
m = 1
while True:
    tmp = B * m
    if N < tmp:
        break
    b.append(tmp)
    m += 1

count = 0
for rt in r:
    if N < rt:
        break
    for gt in g:
        if N < rt + gt:
            break
        for bt in b:
            if N < rt + gt + bt:
                break
            if N == (rt + gt + bt):
                count += 1

'''
count = 0
for rt in r[::-1]:
    for gt in g[::-1]:
        for bt in b[::-1]:
            if N < rt + gt:
                break
            if N == (rt + gt + bt):
                count += 1
'''

print(count)
