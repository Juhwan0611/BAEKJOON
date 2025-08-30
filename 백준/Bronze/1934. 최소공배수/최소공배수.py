import sys
input = sys.stdin.readline

t = int(input())

def gcd(a, b):
    while b:
        a, b = b, a % b

    return a

for i in range(t):
    a, b = map(int,input().split())
    lcm = (a * b) // gcd(a, b)
    print(lcm)
