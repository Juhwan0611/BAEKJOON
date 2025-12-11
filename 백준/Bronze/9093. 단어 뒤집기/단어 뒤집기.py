import sys

input = sys.stdin.readline

n = int(input())

for _ in range(n):
    s = input().split()

    for x in s:
        print(x[::-1], end = " ")
