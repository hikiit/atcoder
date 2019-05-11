n, q = input().split()
Q = int(q)
s = input()
S = list(s)

array = []
count = 0
ff = False
for i in range(len(S)):
    if len(S) < i+1:
        break
    if S[i] == 'A':
        flag = True
    elif flag == True and S[i] == 'C':
        count += 1
        array.append(-1)
        array.append(count)
        ff = True
    elif flag == True:
        array.append(0)
        array.append(0)
        flag = False
    else:
        array.append(0)

array_q = []
for q in range(Q):
    l, r = input().split()
    array_q.append([int(l), int(r)])

for arr in array_q:
    try:
        if ff != True:
            print(0)
            continue

        if len(array[arr[0]-1:arr[1]-1]) < 2:
            print(0)
            continue

        for a in array[arr[0]-1:]:
            if a == -1:
                flag = True
            elif flag == True:
                minv = a
                break

        for b in reversed(array[:arr[1]]):
            if b != 0 and b != -1:
                maxv = b
                break

        if minv == maxv and maxv != 0:
            print(1)
            
        elif maxv == 0:
            print(0)

        else:
            print(maxv - minv + 1)
            maxv = 0
            minv = 0
    except:
        print(0)
        maxv = 0
        minv = 0
        