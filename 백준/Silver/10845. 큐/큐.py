import sys
input = sys.stdin.readline

from collections import deque
q = deque()


n = int(input())

for _ in range(n):
    s = input().split()

    if s[0] == "push":
        q.append(int(s[1]))

    elif s[0] == "pop":
        if not q:
            print(-1)
        else:
            print(q.popleft())
            
    elif s[0] == "size":
        print(len(q))

    elif s[0] == "empty":
        if not q:
            print(1)
        else:
            print(0)

    elif s[0] == "front":
        if not q:
            print(-1)
        else:
            print(q[0])

    else:
        if not q:
            print(-1)
        else:
            print(q[-1])
