a, b, c = input().split()
a = int(a)
b = int(b)
c = int(c)
result = b // a
if c < result:
    result = c
print(str(result))