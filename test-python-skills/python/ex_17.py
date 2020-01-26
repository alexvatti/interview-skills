#class . constructor

class classname:
	name=""
	branch=""
	year =""
	def __init__(self,name,branch,year):
		self.name=name
		self.branch=branch
		self.year=year
	def print_method(self):
		print("name=",self.name)
		print("branch=",self.branch)
		print("year=",self.year)

obj1 = classname("alex","m.sc","2007")
obj1.print_method()
		
