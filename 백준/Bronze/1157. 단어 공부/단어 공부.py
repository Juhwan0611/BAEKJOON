s = input().upper()  # 받은 알파벳 모두 대문자로
arr = [0] * 26

m_num = 0
m_alp = -1
for x in s:
    o = ord(x) - 65
    arr[o] += 1
    if m_num < arr[o]:
        m_num = arr[o]
        m_alp = x

if arr.count(m_num) != 1:
    print("?")
else:
    print(m_alp)
    
