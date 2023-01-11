a,b = map(int,input().split())

if a == 0 and b ==0 :
    print("0 0")
    exit()

for i in range(a):
    if i == a-1 :
        print(-1)
        break
    if (a-i)+i == a :
        if ((a-i)-i) == b :
            if(i>= a-i):
                print(f"{i} {a-i}")
                break
            elif(i <= a-i):
                print(f"{a-i} {i}")
                break
        elif((a-i)-i) == b * -1:
            if (i >= a - i):
                print(f"{i} {a - i}")
                break
            elif (i <= a - i):
                print(f"{a - i} {i}")
                break

