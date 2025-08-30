import sys
input = sys.stdin.readline

n = int(input())

arr = []
for _ in range(n):
    s = input().strip() # 개행 제
    arr.append(s)

arr = list(set(arr))

arr.sort(key = lambda x: (len(x), x))

for x in arr:
    print(x)
