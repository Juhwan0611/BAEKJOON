import sys
input = sys.stdin.readline

from collections import defaultdict

n = int(input())
d = dict()
for x in map(int,input().split()):
    if x in d:
        d[x] += 1
    else:
        d[x] = 1

m = int(input())
for x in map(int,input().split()):
    if x in d:
        print(d[x], end = ' ')
    else:
        print(0, end = ' ')