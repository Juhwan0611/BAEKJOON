n, m = map(int,input().split())
arr = [0] * n

for _ in range(m):
    i, j, k = map(int,input().split())
    for i in range(i, j + 1):
        arr[i - 1] = k

for i in arr:
    print(i, end = ' ')
