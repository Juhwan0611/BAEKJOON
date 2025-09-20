import sys
input = sys.stdin.readline

n = int(input())
conect = int(input())
graph = [[] for _ in range(n + 1)]

for _ in range(conect):
    a, b = map(int,input().split())
    graph[a].append(b)
    graph[b].append(a)


visited = [0] * (n + 1)
def dfs(v):
    visited[v] = True
    for x in graph[v]:
        if not visited[x]:
            dfs(x)

dfs(1)
print(visited.count(True) - 1)
