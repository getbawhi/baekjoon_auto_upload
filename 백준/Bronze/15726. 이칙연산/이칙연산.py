a,b,c = map(int,input().split())

result1 = (a/b)*c
result2 = (a*b)/c

if result1 > result2 :
    print(int(result1))
elif result2 >= result1 :
    print(int(result2))