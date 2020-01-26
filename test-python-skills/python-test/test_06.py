#Question:
#Write a program that calculates and prints the value according to the given formula:
#Q = Square root of [(2 * C * D)/H]
#Following are the fixed values of C and H:
#C is 50. H is 30.
#D is the variable whose values should be input to your program in a comma-separated sequence.
#Example
#Let us assume the following comma separated input sequence is given to the program:
#100,150,180
#The output of the program should be:
#18,22,24
import math

l = []
output_list = []
values = input("Enter the inputs:")
l = values.split(",")
print(l)
i = 0
for d in l:
	output_list[i]=(math.sqrt(( 2 * 50 * float(d)/30)))
	i = i + 1
print(output_list)
