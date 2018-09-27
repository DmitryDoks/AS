import timeit
import random
import math
n = int(input("Введите количество элементов:"))
start_time = timeit.default_timer()
sec = []
c = []
for i in range(n):
    new = random.randint(1,20)
    sec.append(new)
print("Исходный массив:",sec)
maxV = max(sec)
minV = min(sec)
size = 4
count = math.floor((maxV - minV) / size) + 1
b = []
for i in range(count):
    b.append([])
for i in range(n):
    b[math.floor((sec[i] - minV) / size)].append(sec[i])
for i in range(count):
    b[i] = sorted(b[i])
for i in range(count):
    for j in range(len(b[i])):
        c.append(b[i][j])
print("Отсортированный массив:",b)
elapsed = timeit.default_timer() - start_time
print(elapsed)
