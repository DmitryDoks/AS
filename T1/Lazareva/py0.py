visota = float (input("���� ���� - ")) 
diametr = float (input("������� ���� - ")) 
ploshad = float (input("���頤�, ������ ����� ������ ����� ������ ��᪨ - ")) 
import math as m 
pk4 = (m.pi * diametr**2) 
ps2 = visota * diametr * m.pi *2 
res = pk4 + ps2 
res = res / ploshad 
res = int(res) + 1 
print( "����� ���ॡ���� :", res)