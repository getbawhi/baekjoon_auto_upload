a = int(input())

num = 0

while a > 0:
    if a == 0:
        print(num)


    if a >= 5:
        a = a-5
        num += 1

    elif a >= 4:
        a = a-4
        num += 1

    elif a>=3:
        a= a-3
        num += 1

    elif a>=2:
        a= a-2
        num += 1

    elif a>=1:
        a = a-1
        num += 1

print(num)