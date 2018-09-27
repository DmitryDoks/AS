from random import random
r=5
arr = [0]*r

for i in range(r):
arr[i]=int(random()*50)
print(arr)

for i in range(r-1):
for j in range(i+1,r):
if arr[i]==arr[j]:
print("Есть одинаковые")
quit()
print("Все уникальны")
