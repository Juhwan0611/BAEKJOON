import sys
input = sys.stdin.readline

from collections import deque

n = int(input())

q = deque(range(1, n + 1))

while True:
    if len(q) <= 1:
        break
    else:
        q.popleft()
        q.append(q.popleft())

print(q[0])
