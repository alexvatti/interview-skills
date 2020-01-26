#Question:
#Write a program which takes 2 digits, X,Y as input and generates a 2-dimensional array. The element value in the i-th row and j-th column of the array should be i*j.
#Note: i=0,1.., X-1; j=0,1,¡­Y-1.
#Example
#Suppose the following inputs are given to the program:
#3,5
#Then, the output of the program should be:
#[[0, 0, 0, 0, 0], [0, 1, 2, 3, 4], [0, 2, 4, 6, 8]] 
l = []
values = input("Enter rows,columns:")
l = values.split(",")
rows =int(l[0])
cols = int(l[1])
mul_list = [[0 for c in range(cols)] for r in range(rows)]
print(mul_list)
for r in range(rows):
	for c in range(cols):
		mul_list[r][c] = r * c

print(mul_list)
