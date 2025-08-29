import sys
input = sys.stdin.readline

m, n = map(int,input().split())

li_prime = [True] * (n + 1)
li_prime[0] = li_prime[1] = False # 0과 1은 소수가 아니니 False로

limit = int(n**0.5)
for i in range(2, limit + 1):
    if li_prime[i]:
        for k in range(i * i, n + 1, i):
            li_prime[k] = False

for x in range(m, n + 1):
    if li_prime[x]:
        print(x)

