s = input()
l = s.split()
s1 = ''
for i in l:
	s1 += i + '*'
s1 = s1[:-1] # 㤠�塞 ��᫥���� "*"	
print(s1)