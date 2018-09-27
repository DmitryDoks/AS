n = [ 1,3,-6,7,-5,6,-7,6,4,-9,7,-8,3 ]
f = 13
i = 0

while i<f:
    if n[i]<0:
        del n[i]
        f = f-1
    else:
        i = i+1
print(n)
ar=n[0]* n[2]* n[5]

print("Произведение чисел равно:",ar)
