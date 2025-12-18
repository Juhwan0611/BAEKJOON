import sys
from collections import deque

input = sys.stdin.readline

n = int(input())
q = deque(range(1, n + 1))
a = []

while len(q) > 1:
    a.append(q.popleft())   # 맨 앞 제거
    q.append(q.popleft())   # 다음 카드 뒤로

print(*a, q[0])

