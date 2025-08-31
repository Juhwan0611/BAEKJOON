import sys
input = sys.stdin.readline

stack = []
n = int(input())

for _ in range(n):
    s = input().split()

    if s[0] == "push":
        stack.append(s[1])

    elif s[0] == "pop":
        if not stack:
            print(-1)
        else:
            print(stack.pop())
            
    elif s[0] == "size":
        print(len(stack))

    elif s[0] == "empty":
        if not stack:
            print(1)
        else:
            print(0)

    else:
        if not stack:
            print(-1)
        else:
            print(stack[-1])
