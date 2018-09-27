def arithmetic (a,b,c):
    if c == "+":
        print(a, "+", b, "=", a+b )
    elif c == "-":
        print(a, "-", b, "=", a-b)
elif c == "/":
    print(a, "/", b, "=", a/b)
    elif c == "*":
        print(a, "*", b, "=", a*b)
    else:
        print("Неверная операция ")

x=int(input("Введите 1-ое число "))
y=int(input("Введите 2-ое число: "))
z=input("Введите арифметическую операцию: ")
arithmetic (x,y,z)
