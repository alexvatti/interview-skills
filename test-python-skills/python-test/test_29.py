#can accept two strings as input and print the string with maximum length in console. If two strings have the same length, then the function should print al l strings line by line

def maxlen(s1,s2):
	if(len(s1) > len(s2)):
		print(s1)
	elif (len(s2) > len(s1)):
		print(s2)
	else:
		print(s1)
		print(s2)

s1=input("enter string1:")
s2=input("enter string2:")
maxlen(s1,s2)

	
