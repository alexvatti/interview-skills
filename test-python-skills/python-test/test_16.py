#Question:
#Use a list comprehension to square each odd number in a list. The list is input by a sequence of comma-separated numbers.
#Suppose the following input is supplied to the program:
#1,2,3,4,5,6,7,8,9
#Then, the output should be:
#1,3,5,7,9

input_list = [1,2,3,4,5,6,7,8,9]
odd_list = list(filter(lambda x: x % 2 != 0 ,input_list))
even_list = list(filter(lambda x: x % 2 == 0 ,input_list))
print("even list",even_list)
print("odd list",odd_list)

