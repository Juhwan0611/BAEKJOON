n = int(input())

de = 1
while n > de:
    n -= de
    de += 1

a = 0
b = 0
if de % 2 == 0:
    a = n
    b = de - n + 1
else:
    a = de - n + 1
    b = n

print(f"{a}/{b}")
