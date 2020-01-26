#Question:
#Write a program that accepts a sentence and calculate the number of upper case letters and lower case letters.
#Suppose the following input is supplied to the program:
#Hello world!
#Then, the output should be:
#UPPER CASE 1
#LOWER CASE 9

s = input("Enter a string:")
upper = 0
lower = 0

for c in s:
	if c.isupper():
		upper = upper + 1
	if c.islower():
		lower = lower + 1

print("UPPER CASE ",upper)
print("LOWER CASE ",lower)
