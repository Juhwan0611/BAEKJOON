import sys
input = sys.stdin.readline

n = int(input())
arr = list(map(int,input().split()))

a, b = map(int,input().split())


cnt = 0
for i in arr:
    cnt += (i + a - 1) // a
    
print(cnt)
print(n // b, n % b)
