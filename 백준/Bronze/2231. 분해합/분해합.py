import sys
input = sys.stdin.readline

n = int(input())

start = max(1, n - 9 * len(str(n))) # 음수가 될 수 있으니

res = 0
for i in range(start, n):
    d_sum = sum(map(int, str(i)))

    if i + d_sum == n:
        res = i
        break
print(res)


"""
189 ~ 216

[i + d_sum = n]
189 + 18 = 207 x
190 + 10 = 200 x
191 + 11 = 202 x
192 + 12 = 204 x
193 + 13 = 206 x
194 + 14 = 208 x
195 + 15 = 210 x
196 + 16 = 212 x
197 + 17 = 214 x
198 + 18 = 216 o
.
.
.
"""
