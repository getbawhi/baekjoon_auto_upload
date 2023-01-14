ax, ay = map(int,input().split())
bx, by = map(int,input().split())
cx, cy = map(int,input().split())

list1 = [ax, ay]
list2 = [bx, by]
list3 = [cx, cy]

dx1 = ax
dx2 = bx
dx3 = cx

dy1 = ay
dy2 = by
dy3 = cy

result1 = [[dx1, dy2],[dx1, dy3],[dx2, dy1],[dx2, dy3], [dx3, dy1], [dx3, dy2]]

flag = 0

while (True) :
    for i in result1:
        if i != list1 and i!= list2 and i != list3 :
            print(i[0], i[1])
            flag = 1
            break
    if flag ==1 :
        break

