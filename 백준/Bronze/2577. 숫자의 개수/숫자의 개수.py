a = [int(input()) for _ in range(3)]
n = a[0] * a[1] * a[2]

count = [0] * 10
while n:
    d = n % 10
    n //= 10

    count[d] += 1

for x in count:
    print(x)
