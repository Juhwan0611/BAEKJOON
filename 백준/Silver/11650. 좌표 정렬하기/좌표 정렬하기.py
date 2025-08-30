import sys
input = sys.stdin.readline

n = int(input())

point = [tuple(map(int,input().split())) for _ in range(n)]

point.sort()

for x, y in point:
    print(x, y)
