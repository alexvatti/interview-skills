#Define a function that can accept an integer number as input and print the "It is an even number" if the number is even, otherwise print "It is an odd number".

def check_even_odd(num):
	if(num%2==0):
		print("It is an even number")
	else:
		print("It is an odd number")

n=int(input("enter a number to check even or odd:"))

check_even_odd(n)
