t = int(input())
for _ in range(t):
    a, b = input().split()
    a = int(a)

    s = ''
    for i in b:
        s += i * a
    print(s)
