
an = int(input())
eye = int(input())

list1 = []

if an >= 3 and eye <= 4:
    list1.append('TroyMartian')
if an <= 6 and eye >=2:
    list1.append('VladSaturnian')
if an <=2 and eye <= 3:
    list1.append('GraemeMercurian')

for i in range(len(list1)):
    print(list1[i])