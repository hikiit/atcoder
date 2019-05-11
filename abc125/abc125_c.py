'''
from fractions import gcd
from functools import reduce
import copy

def gcd_list(numbers):
    return reduce(gcd, numbers)

N = int(input())
A = list(map(int, input().strip().split(' ')))

# Atmp = copy.deepcopy(A)

max = 0
for i in range(N):
    # Atmp = copy.deepcopy(A)
    # Atmp.pop(i)
    tmp = A[i]
    A[i] = 
    g = gcd_list(Atmp)
    if max < g:
        max = g
print(max)
'''

import collections

def make_divisors(n):
    divisors = []
    for i in range(1, int(n**0.5)+1):
        if n % i == 0:
            divisors.append(i)
            if i != n // i:
                divisors.append(n//i)
    return divisors

N = int(input())
A = list(map(int, input().strip().split(' ')))

divisors = []
for i in range(N):
    divisors.extend(make_divisors(A[i]))

clist = collections.Counter(divisors)

anslist = []
for a, b in clist.most_common():
    if N - 1 <= b:
        anslist.append(a)

print(max(anslist))
