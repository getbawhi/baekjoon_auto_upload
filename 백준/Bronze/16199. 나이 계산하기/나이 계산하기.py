import datetime as dt

by, bm, bd = map(int, input().split())
ny, nm, nd = map(int, input().split())

birthday = dt.datetime(by, bm, bd)
now = dt.datetime(ny, nm, nd)

if bm < nm :
    result1 = ny - by
elif bm == nm :
    if bd <= nd :
        result1 = ny - by
    elif bd > nd :
        result1 = ny - by - 1
elif bm > nm :
    result1 = ny - by -1

result2 = ny - by + 1
result3 = ny - by

print(result1)
print(result2)
print(result3)
