h = input()
S = list(h)

atc = ['A', 'T', 'C', 'G']

flag = False
count = 0
maxt = 0
for i in range(len(S)):
    for s in range(len(S)):
        s = s + i
        if len(S) <= s:
            if maxt <= count:
                maxt = count
            break
        if flag == False and (S[s] in atc):
            flag = True
            count += 1
        elif flag == True and (S[s] in atc):
            count += 1
        elif flag == True:
            break
        if maxt < count:
            maxt = count
    count = 0
    flag = False
print(maxt)