import sys
input = sys.stdin.readline

from collections import deque
dq = deque()


n = int(input())

for _ in range(n):
    s = input().split()

    if s[0] == "push_front":
        dq.appendleft(int(s[1]))

    elif s[0] == "push_back":
        dq.append(int(s[1]))

    elif s[0] == "pop_front":
        print(dq.popleft() if dq else -1)

    elif s[0] == "pop_back":
        print(dq.pop() if dq else -1)
            
    elif s[0] == "size":
        print(len(dq))

    elif s[0] == "empty":
        print(0 if dq else 1)

    elif s[0] == "front":
        print(dq[0] if dq else -1)

    else:
        print(dq[-1] if dq else -1)
