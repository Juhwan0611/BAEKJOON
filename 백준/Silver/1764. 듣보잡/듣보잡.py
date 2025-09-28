import sys
input = sys.stdin.readline

n, m = map(int,input().split())

a = {input() for _ in range(n)}
b = {input() for _ in range(m)}

ans = sorted(a & b)

print(len(ans))
print("".join(ans))
