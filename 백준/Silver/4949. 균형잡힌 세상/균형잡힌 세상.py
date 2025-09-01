import sys
input = sys.stdin.readline

while True:
    s = input().rstrip()
    stack = []
    v = True
    
    if s == ".":
        break

    for x in s:
        if x in "(":
            stack.append(x)

        elif x in "[":
            stack.append(x)
            
        elif x == ")":
            if not stack or stack[-1] != "(":
               v = False
               break
            stack.pop()

        elif x == "]":
            if not stack or stack [-1] != "[":
                v = False
                break
            stack.pop()
            
    print("yes" if v and not stack else "no")
