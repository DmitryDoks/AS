
l = [1, 2, 3]
def isEmpty() :
	global l
	if len(l) == 0 :
		return 1
	else :
		return 0

		print(isEmpty())

		l = [1, 2, 3]
		def push(a) :
		global l
		l.append(a)

		push(17)
		print(l)

		l = [1, 2, 3, 4, 5, 64, 79, 12, 57]
		def size() :
		global l
		k = 0
		i = 0
		for i in l :
k = k + 1
print(k)
size()
l = [1, 2, 3, 4, 5]
def pop() :
	global l
	l.remove(3)

	pop()
	print(l)