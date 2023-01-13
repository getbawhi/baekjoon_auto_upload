flag = 0
i = 1


while flag == 0:
    name, age, k = input().split()
    if name == '#' and age == '0' and k == '0':
        flag = 1
        break

    name = name+''
    if int(age) <= 17 and int(k) < 80:
        print(name,'Junior')
    else:
        print(name,'Senior')

