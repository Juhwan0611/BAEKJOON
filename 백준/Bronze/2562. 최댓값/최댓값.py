import sys
input = sys.stdin.readline

max = 0
num = 0
for i in range(9):
    n = int(input())

    if (n > max):
        max = n
        num = i + 1

print(max)
print(num)
