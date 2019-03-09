n, m = input().split()
N = int(n)
M = int(m)

AB = []
for i in range(N):
    AB.append(list(map(int, input().strip().split(' '))))
AB.sort()

M_tmp = M
price = 0
for i in range(N):
    if M_tmp == 0:
        break
    
    elif AB[i][1] <= M_tmp:
        price += AB[i][0] * AB[i][1]
        M_tmp -= AB[i][1]
    
    else:
        price += AB[i][0] * M_tmp
        M_tmp = 0
print(price)
