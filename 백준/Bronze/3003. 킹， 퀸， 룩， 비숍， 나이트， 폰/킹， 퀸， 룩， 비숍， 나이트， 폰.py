chess = [1, 1, 2, 2, 2, 8]

nums = list(map(int,input().split()))
arr = [0] * 6

for i in range(6):
    if chess[i] != nums[i]:
        arr[i] += chess[i] - nums[i]

for i in arr:
    print(i, end = ' ')
