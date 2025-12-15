a, b, c, m = map(int, input().split())

t = 0 # 피로도
dw = 0 # 최대 작업량

for i in range(24): # 하루는 24시간이기 때문에 24번만 반복
    if t > m: # 피로도가 m을 넘어가면 번아웃
        print(0)
    else:
        if t + a <= m: #일을 할 수 있다면
            t += a # a만큼 피로도+, b만큼 작업
            dw += b
        else:  # 일을 할 수 없다면
            if t - c >= 0:
                t -= c
            else:
                t = 0 # 피로도가 음수면 0
print(dw)
