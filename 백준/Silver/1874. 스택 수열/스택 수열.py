import sys
input = sys.stdin.readline

n = int(input())
num = [int(input()) for _ in range(n)]

stack = []
res = []
cur = 1

for i in num:

    while cur <= i:
        stack.append(cur)
        res.append('+')
        cur += 1

    if stack[-1] == i:
        stack.pop()
        res.append('-')

    else:
        print("NO")
        exit(0)
        
print('\n'.join(res))
