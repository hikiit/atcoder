import copy

n = input()
N = int(n)

b_array = list(map(int, input().strip().split(' ')))

answer = []
count = 0
count_bk = 0
bcount = 1
b_array = b_array[::-1]
for i in b_array:
    if i == 1:
        count += 1
        tmpa = []
        anstmp = []

        l2 = copy.copy(b_array[count_bk:count])

        while True:
            c = 0
            pickflag = False
            print(l2[::-1])

            for b in l2[::-1]:
                if b <= bcount:
                    t = l2.pop(-c-1)
                    print("aaa" + str(t))
                    answer.append(t)

                    bcount += 1
                    pickflag = True
                    break
                c += 1
            if l2 == []:
                break
            elif pickflag == False:
                print(-2)
                exit()

        # print(tmpa[::-1])
        print(b_array[count_bk:count])

        # if tmpa[::-1] == b_array[count_bk:count]:
        answer.extend(anstmp)
        '''
        else:
            print(-2)
            exit()
        '''
        count_bk = count
    else:
        count += 1
for a in answer:
    print(a)
if len(answer) == 0:
    print(-2)