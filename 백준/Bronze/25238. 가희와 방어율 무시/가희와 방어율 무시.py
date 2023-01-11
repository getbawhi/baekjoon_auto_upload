a,b = map(int,input().split())

val = a - (a*(b/100))

if val >= 100 :
    print(0)
else :
    print(1)

