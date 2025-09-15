import sys
input = sys.stdin.readline

from collections import deque

t = int(input())

for _ in range(t):
    n, m = map(int,input().split())
    queue = deque(list(map(int,input().split())))
    count = 0

    while queue:
        import_a = max(queue)
        front_num = queue.popleft() #제일 앞 문서 꺼내서 확인

        m -= 1

        if front_num == import_a:
            count += 1

            if m < 0:
                print(count)
                break
        else:
            queue.append(front_num) #중요도가 낮으면 다시 뒤로 보냄
            if m < 0:
                m = len(queue) - 1
