n = input()
N = int(n)

count = 0
Acount = 0
AScount = 0
Bcount = 0
BScount = 0
BAcount = 0

for i in range(N):
    s = input()
    if 1 < len(s):
        if 'AB' in s:
            count += s.count('AB')
        if s[0] == 'B' and s[-1] == 'A':
            BAcount += 1
        elif s[0] == 'B':
            Bcount += 1
        elif s[-1] == 'A':
            Acount += 1
    else:
        if s == 'B':
            BScount += 1
        if s == 'A':
            AScount += 1

BAcount += min(BScount, AScount)

if BScount <= AScount:
    Acount += AScount - BScount
else:
    Bcount += BScount - AScount

if 0 < BAcount:
    count += BAcount - 1
    BAcount = 1

if 0 < Acount and 0 < BAcount:
    count += 1
    Acount -= 1

if 0 < Bcount and 0 < BAcount:
    count += 1
    Bcount -= 1

count += min(Bcount, Acount)
print(count)
