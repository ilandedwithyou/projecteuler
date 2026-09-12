a = []

for i in range(100):
    if i == 0:
        a.append(2)
    elif i % 3 == 2:
        a.append(2 * ((i + 1) // 3))
    else:
        a.append(1)

p = 0
q = 1

for i in range(100):
    r = a[i] * q + p
    p = q
    q = r

print(q)

answer = 0
for i in str(q):
    answer += int(i)

print(answer)