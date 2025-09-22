x4 = 0
y4 = 0
for _ in range(3):
    x, y = map(int,input().split())
    x4 ^= x
    y4 ^= y
print(x4, y4)
