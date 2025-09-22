n, k = map(int,input().split())

res = []

for i in range(1, n + 1):
    if n % i == 0:
        res.append(n // i)
    
res.sort()
if len(res) < k:
    print(0)
else:
    print(res[k - 1])
