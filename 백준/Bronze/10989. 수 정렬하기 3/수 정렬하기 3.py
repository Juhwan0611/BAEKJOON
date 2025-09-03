import sys
input = sys.stdin.readline
print = sys.stdout.write

n = int(input())
count = [0] * 10001

for i in range(n):
    count[int(input())] += 1

for i in range(1, 10001):
    for j in range(count[i]):
        print(str(i) + "\n")

#계수정렬 이용