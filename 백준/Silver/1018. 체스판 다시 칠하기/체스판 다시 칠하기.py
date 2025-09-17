import sys
input = sys.stdin.readline

n, m = map(int,input().split())
chess = [input().rstrip() for _ in range(n)]

w_board = [
    'WBWBWBWB',
    'BWBWBWBW',
    'WBWBWBWB',
    'BWBWBWBW',
    'WBWBWBWB',
    'BWBWBWBW',
    'WBWBWBWB',
    'BWBWBWBW',
]

b_board = [
    'BWBWBWBW',
    'WBWBWBWB',
    'BWBWBWBW',
    'WBWBWBWB',
    'BWBWBWBW',
    'WBWBWBWB',
    'BWBWBWBW',
    'WBWBWBWB',
]

def check(i, j):
    res_w = 0
    res_b = 0

    for di in range(8):
        for dj in range(8):
            ni, nj = i + di , j + dj
            if chess[ni][nj] != w_board[di][dj]:
                res_w += 1
            if chess[ni][nj] != b_board[di][dj]:
                res_b += 1

    return min(res_w, res_b)

res = 10000000
for i in range(n - 7):
    for j in range(m - 7):
        res = min(res, check(i, j))

print(res)
                



                
