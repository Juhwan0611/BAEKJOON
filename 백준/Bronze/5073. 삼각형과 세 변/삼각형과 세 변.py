import sys
input = sys.stdin.readline

while True:
    a, b, c = map(int,input().split())
    if (a == 0 and b == 0 and c == 0):
        break
    elif (max(a, b, c)*2 >= a + b + c):
        print("Invalid")
    elif (a == b and b == c and c == a):
        print("Equilateral")
    elif ((a == b and b != c and c != a) or (a != b and b == c and c != a) or (a != b and b != c and c == a)):
          print("Isosceles")
    else:
        print("Scalene")
