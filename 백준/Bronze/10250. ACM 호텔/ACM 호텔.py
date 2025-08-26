import sys
input = sys.stdin.readline

n = int(input())
for _ in range(n):
    h, w, n = map(int,input().split())

    chng = n % h #층
    hosoo = n // h + 1 #호수
    if (chng == 0): 
        chng = h
        hosoo -= 1
        
    print(chng * 100 + hosoo)

    

    
