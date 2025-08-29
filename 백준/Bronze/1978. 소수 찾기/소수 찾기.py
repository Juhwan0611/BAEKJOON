n = int(input())

num = list(map(int,input().split()))

count = 0
for x in num:
    c = True
    for i in range(2, x):
        if (x % i == 0):
            c = False
            break
    if (x != 1 and c == True):
        count += 1
            
print(count)
