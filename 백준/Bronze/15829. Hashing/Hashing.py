import sys
input = sys.stdin.readline

M = 12345678991
r = 31

n = int(input())
s = input().rstrip()

ans = 0
p = 1
for x in s:
    ans += (ord(x) - 96) * p
    p *= r
print(ans % M)
