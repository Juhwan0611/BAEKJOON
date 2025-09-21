import sys
input = sys.stdin.readline

from collections import deque

n, m, v = map(int,input().split())
graph = [[] for _ in range(n + 1)]

for _ in range(m):
    a, b = map(int,input().split())
    graph[a].append(b)
    graph[b].append(a)


for i in range(1, n + 1):
    graph[i].sort()
    

def dfs(v):
    visited[v] = True
    print(v, end = ' ')
    for x in graph[v]:
        if not visited[x]:
            dfs(x)

            
def bfs(vs):
    q = deque([vs])
    visited[vs] = True

    while q:
        vs = q.popleft()
        print(vs, end = ' ')
        for x in graph[vs]:
            if not visited[x]:
                visited[x] = True
                q.append(x)

visited = [False] * (n + 1)
dfs(v)

print()

visited = [False] * (n + 1)
bfs(v)
