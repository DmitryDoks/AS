N = int (input("������⢮ ����⮢ � ᯨ᪥: "))
list = [1] * N
for i in range(N):
	list[i] = int(input("�������:"))
print(list)
listset = set(list)
if len(listset) == len(list):
	print("������ �᫮ ����砥��� ���� ࠧ � ᯨ᪥")
else:
	print("� ᯨ᪥ ���� ��������� ������")