import sys
input = sys.stdin.readline

n = int(input())

arr = [input().strip() for _ in range(n)]
arr = list(set(arr))

arr.sort(key = lambda x: (len(x), x))

for x in arr:
    print(x)

