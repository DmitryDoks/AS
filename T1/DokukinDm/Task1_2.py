from random import random

def make_list(n, mk, mx):
t = []
for i in range(n):
b = int(random() * (mx - mk + 1)) + mk
t.append(b)
return t

def max_div(t):
b = max(t)
for i in t:
print('%.2f ' % (i/b), end='')
print()
print('max =', b)

print('Введите кол-во элементов, минимум и максимум через пробел')
print('(для завершения оставьте пустую строку)')
while 1:
print()
data = input()
if data == '': break
data = data.split()
mylist = make_list(int(data[0]), int(data[1]), int(data[2]))
print(mylist)
max_div(mylist)
