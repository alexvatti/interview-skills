#private method
#__fun ==> private
#__name of variable ==>private
class car:
	__s = "supercar"
	__speed = 200

	def __init__(self):
		self.__update()
	def set_name(self,p):
		self.__s=p
	def get_name(self):
		print(self.__s)
	def __update(self):
		print("update sw")

redcar = car()
redcar.set_name("bwm")
redcar.get_name()
redcar._car__update()
		
