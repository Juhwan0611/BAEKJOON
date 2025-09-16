import sys
input = sys.stdin.readline

M = 1234567891
r = 31

l = int(input())
s = input().rstrip()

has = 0
for i in range(l):
    res = ord(s[i]) - 96
    has += res * (r ** i)

print(has % M)
