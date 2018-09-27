def is_prime (y):
    res=True
    a=int(pow(y, 0.5))
    for i in range(2,a):
        if y%i==0:
            res=False
    return(res)

b=int(input('Введите число'))
print(is_prime(b))
