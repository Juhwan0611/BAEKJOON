import sys
input = sys.stdin.readline

n, k = map(int,input().split())

n_p = 1
for i in range(1, n + 1):
    n_p *= i

k_p = 1
for i in range(1, k + 1):
    k_p *= i

ans = n - k
nmk = 1

for i in range(1 , ans + 1):
    nmk *= i

print(n_p // (k_p * nmk))
