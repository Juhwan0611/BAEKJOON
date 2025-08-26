t = int(input())
for _ in range(t):
    a, b = input().split()
    a = int(a)

    for i in b:
        print(i * a, end = "")
    print()
