l = int(input())
a = int(input())
b = int(input())
c = int(input())
d = int(input())

if a % c != 0:
    a = a // c + 1
else:
    a = a // c

if b % d != 0:
    b = b // d + 1
else:
    b = b // d


print(l - max(a, b))
