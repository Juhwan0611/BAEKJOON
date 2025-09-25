t = int(input())
for _ in range(t):
    c = int(input())

    arr1 = c // 25

    c %= 25

    arr2 = c // 10

    c %= 10

    arr3 = c // 5

    c %= 5

    arr4 = c // 1
    print(arr1, arr2, arr3, arr4)
   