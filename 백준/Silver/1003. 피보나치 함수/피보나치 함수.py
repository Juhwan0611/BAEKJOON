import sys
input = sys.stdin.readline

a = [0] * 50
b = [0] * 50
a[0] = 1
b[1] = 1
for i in range(2, 41):
    a[i] = a[i - 1] + a[i - 2]
    b[i] = b[i - 1] + b[i - 2]

for _ in range(int(input())):
    n = int(input())
    print(a[n], b[n])
