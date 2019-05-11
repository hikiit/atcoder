import re
n = input()
N = int(n)

S = input()

pattern = r'\#+|\.+'
repatter = re.compile(pattern)
result = repatter.findall(S)
# print(result)

pre = False
count = 0
ans = 0
for r in result:
    if r[0] == '.' and pre == True:
        tmpc = len(r)
        if count < tmpc:
            ans += count
        else:
            ans += tmpc
        pre = False

    if r[0] == '#':
        count = len(r)
        pre = True
print(ans)
