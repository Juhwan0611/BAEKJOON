m = int(input())
n = int(input())

li_sosu = []

for i in range(m, n + 1):
    li_sosu.append(i)

res = 0
li_res = []
for x in li_sosu:
    if x == 1:
        continue
    c = True
    for k in range(2, x):
        if (x % k == 0):
            c = False
            break
    if c:
       res += x
       li_res.append(x)

if not li_res:
    print(-1)
else:
    print(res)
    print(min(li_res))
