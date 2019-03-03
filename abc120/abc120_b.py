a, b, c = input().split()
a = int(a)
b = int(b)
c = int(c)

list_a = []
i = 1
while True:
    tmp1 = a % i
    tmp2 = b % i
    if tmp1 == 0 and tmp2 == 0:
        list_a.append(i)
    i += 1
    if a < i or b < 0:
        break
print(list_a[-1*(c)])