#Question:
#Question:
#Define a function which can print a dictionary where the keys are numbers between 1 and 20 (both included) and the values are square of keys.
dict_square = { }

def define_dict():
	for i in range(1,21):
		dict_square[i]=i*i

define_dict()
print(dict_square)
