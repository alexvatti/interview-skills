#fun
#pass by value
def add(num1,num2):
	'''add two values:
	def: take two var'''
	return num1 + num2

#pass by reference
def change(l):
	print(l);
	print(type(l))
	l[0]=20
	l[1]=30
	print(l);


a=10
b=20
v = add(a,b)
print("sum=",v)
print(add.__doc__)
l = [10,20]
change(l)
print(l)



#bult in functions
#abs,round,len,bool,type,id,bin,oct,hex,
#list,tup,dict,set,sum,max,min,ascii,pow

