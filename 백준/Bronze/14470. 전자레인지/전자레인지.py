now = int(input())
end = int(input())
c = int(input())
d = int(input())
e = int(input())

result1 = 0

if now < 0 :
    while now < 0 :
        result1 += c
        now += 1
    result1 += d
    while now < end:
        result1 += e
        now += 1

if now == 0 :
    result1 += d
    while now < end:
        result1 += e
        now += 1

if now > 0 :
    while now < end :
        result1 += e
        now +=1

print(result1)