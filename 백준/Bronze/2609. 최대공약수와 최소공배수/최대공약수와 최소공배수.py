a, b = map(int,input().split())

a, b = max(a, b), min(a, b) 
res = a * b 
while b != 0:
    a, b = b, a % b

LCM = res // a
print(a)
print(LCM)
