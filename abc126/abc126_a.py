n, m = input().split()
N = int(n)
K = int(m)

S = input()

string = list(S)

string[K-1] = string[K-1].lower()

print(''.join(string))
