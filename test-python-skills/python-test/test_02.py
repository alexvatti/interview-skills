#Question:
#Write a program which can compute the factorial of a given numbers.
#The results should be printed in a comma-separated sequence on a single line.
#Suppose the following input is supplied to the program:
#8
#Then, the output should be:
#40320

def fact(num):
	s = 1
	while num >= 1:
		s = s * num
		num = num -1
	return s

print(fact(8))
