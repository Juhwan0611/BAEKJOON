import sys
input = sys.stdin.readline

t = int(input())
for i in range(t):
    k = int(input())
    n = int(input())

    f = [x for x in range(1, n + 1)]
    for _ in range(k):
        for x in range(1, n):
            f[x] += f[x - 1]
    print(f[-1])
