#Question:
#Define a function which can generate and print a tuple where the value are square of numbers between 1 and 20 (both included).
list_square = []

def define_list():
	for i in range(1,21):
		list_square.append(i)

define_list()
tuple_square=tuple(list_square)
print(tuple_square)
