#Question:
#Write a program which accepts a sequence of comma separated 4 digit binary numbers as its input and then check whether they are divisible by 5 or not. The numbers that are divisible by 5 are to be printed in a comma separated sequence.
#Example:
#0100,0011,1010,1001
#Then the output should be:
#1010
#Notes: Assume the data is input by console

result = []
values = input("enter binary data:")
l = values.split(",")
print(l)

for p in l:
	val = int(p,2)
	if val % 5 == 0 :
		print(bin(val))
		result.append(p)


print(result)
