import sys
input = sys.stdin.readline

n = int(input())

arr = [list(map(str,input().split())) for _ in range(n)]
arr = [(int(age), name) for age, name in arr]

arr.sort(key = lambda arr: arr[0])
for age, name in arr:
    print(age, name)
