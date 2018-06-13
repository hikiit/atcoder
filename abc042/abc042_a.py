n = input().split()

count = 0
for i in n:
    if int(i) == 5:
        count += 5
    elif int(i) == 7:
        count += 7

if count == 17:
    print("YES")
else:
    print("NO")

