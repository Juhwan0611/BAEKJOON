import sys
input = sys.stdin.readline

n = int(input())

money = [500, 100, 50, 10, 5, 1]

num = 1000 - n
cnt = 0
for i in money:
    cnt += num // i
    num = num % i

print(cnt)
