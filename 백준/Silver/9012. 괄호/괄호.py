import sys
input = sys.stdin.readline

n = int(input())

for _ in range(n):
    s = input().rstrip()
    stack = []
    v = True

    for i in s:
        if i == "(":
            stack.append("(")
            
        elif i == ")":
            if stack:
                stack.pop()

            else:
                v = False
                break

    if v and not stack: # (v = True) and not stack
        print("YES")
    else:
        print("NO")
