import sys
input = sys.stdin.readline
sys.setrecursionlimit(100000)

n = int(input())
A = set(map(int,input().split()))
m = int(input())
num = list(map(int,input().split()))

for k in num:
    if k in A:
        print(1)
    else:
        print(0)
