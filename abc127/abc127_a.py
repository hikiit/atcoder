n, m = input().split()
A = int(n)
B = int(m)

result = 0
if 13 <= A:
    result = B
elif 6 <= A and A <= 12:
    result = B // 2
else:
    result = 0
print(result)
