#uestion:
#efine a class which has at least two methods:
#setString: to get a string from console input
#printString: to print the string in upper case.
#Also please include simple test function to test the class methods.

class test(object):
	def __init__ (self):
		self.s = ""
	def getstring(self):
		self.s=input("Enter a string:")
	def printstring(self):
		print("Output string=",self.s.upper())


sampleobj = test()
sampleobj.getstring()
sampleobj.printstring()
