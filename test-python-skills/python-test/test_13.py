
#Write a program that accepts a sentence and calculate the number of letters and digits.
#Suppose the following input is supplied to the program:
#hello world! 123
#Then, the output should be:
#LETTERS 10
#DIGITS 3

s = input("Enter string:")
print(s)
digit  = 0
alpha = 0
for c in s:
	#print(c)
	if c.isdigit():
		digit = digit + 1
	if c.isalpha():
		alpha = alpha + 1

print("digit",digit)
print("alpha",alpha)

mydict = {"digit":0, "alpha":0}
mydict["digit"] = digit
mydict["alpha"] = alpha
print(mydict)
