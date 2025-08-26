import sys
input = sys.stdin.readline

n = int(input())
cnt = 0 # 증가 값
for _ in range(n):
    res = 0 # 결과 값
    s = input()
    for x in s:
        if (x == 'O'):
            cnt += 1
            res += cnt
        else:
            res += 0
            cnt = 0
    print(res)
