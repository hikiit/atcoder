st = input()
list_s = list(st)

delcount = 0
count_0 = list_s.count('0')
count_1 = list_s.count('1')
if count_0 < count_1:
    print(count_0 * 2)
else:
    print(count_1 * 2)
