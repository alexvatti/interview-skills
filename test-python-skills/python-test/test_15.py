#Question:
#Write a program that computes the value of a+aa+aaa+aaaa with a given digit as the value of a.
#Suppose the following input is supplied to the program:
#9
#Then, the output should be:
#11106

s = input("Enter a string:")
l = [1,11,111,1111]
v = int(s);
sum = 0
for c in l:
	sum = sum + (int(c)*v)

print("sum ",sum)
