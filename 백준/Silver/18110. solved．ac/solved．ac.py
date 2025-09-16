import sys
input = sys.stdin.readline

from collections import deque

n = int(input())

if n <= 0:
    print(0)
    
else:
    q = [int(input()) for _ in range(n)]
    q = deque(sorted(q))

    cnt = 0 # 없애야 할 사람의
    cnt = int((n * 0.15) + 0.5)

    for _ in range(cnt):
        q.popleft()
    for _ in range(cnt):
        q.pop()

    avg = int((sum(q)) / len(q) + 0.5)
    print(avg)
