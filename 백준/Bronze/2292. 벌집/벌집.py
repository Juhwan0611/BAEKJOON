n = int(input().strip())

chng = 1
end = 1

while n > end:
    end += 6 * chng
    chng += 1

print(chng)
