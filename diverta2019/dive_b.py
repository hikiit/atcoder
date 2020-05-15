import collections

n = input()
N = int(n)

XY = []
for i in range(N):
    x, y = input().split()
    X = int(x)
    Y = int(y)
    XY.append((X, Y))

diff = []
for xy in XY:
    for xy2 in XY:
        dx = xy[0] - xy2[0]
        dy = xy[1] - xy2[1]
        # d = dx * 10 + dy
        d = (dx, dy)
        if d[0] == 0 and d[1] == 0:
            continue
        diff.append(d)

clist = collections.Counter(diff)
count = clist.most_common()[0][1]
result = N - count
print(result)
