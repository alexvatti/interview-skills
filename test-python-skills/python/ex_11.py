#while statement
#break continue : statement
a = 1
while a<5:
	print(a)
	a+=2
a = 1
while a < 20:
	if(a%2==0):
		print("even:",a)
	else:
		print("odd:",a)
	a+=1
 
a = 2
while True:
	if(a%2==0):
		print("even:",a)
	else:
		break
	a+=1
