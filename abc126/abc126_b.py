S = input()

AA = int(S[:2])
BB = int(S[2:])

if 0 < AA and AA <= 12 and (12 < BB or BB == 0):
    print('MMYY')
elif 0 < BB and BB <= 12 and (12 < AA or AA == 0):
    print('YYMM')
elif 0 < AA and AA <= 12 and 0 < BB and BB <= 12:
    print('AMBIGUOUS')
else:
    print('NA')
