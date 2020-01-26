#Question:
#Define a function which can generate a dictionary where the keys are numbers between 1 and 20 (both included) and the values are square of keys. The function should just print the keys only.
dict_square = { }

def define_dict():
	for i in range(1,21):
		dict_square[i]=i*i

define_dict()
print(dict_square.keys())
