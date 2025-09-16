import sys
input = sys.stdin.readline

n = int(input())
if n == 0:
    print(0)
else:
    num = [int(input()) for _ in range(n)]

    num.sort()
    cnt = int((n * 0.15) + 0.5)

    num = num[cnt:n - cnt]
    avg = int(sum(num) / len(num) + 0.5)
    print(avg)
