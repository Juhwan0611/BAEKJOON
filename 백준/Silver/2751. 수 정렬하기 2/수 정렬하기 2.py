import sys
input = sys.stdin.readline

n = int(input())
num = []
for i in range(n):
    nm = int(input())
    num.append(nm)

num.sort()
print("\n".join(map(str, num)))
