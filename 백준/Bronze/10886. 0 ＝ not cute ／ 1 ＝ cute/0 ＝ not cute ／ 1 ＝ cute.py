n = input()

list = []

n = int(n)

for i in range(n):
    tmp = int(input())
    list.append(tmp)

yes = 0
no = 0

for i in list:
    if i == 1:
        yes +=1
    else:
        no += 1

if yes > no :
    print('Junhee is cute!')
elif yes <= no :
    print('Junhee is not cute!')