#project exercise

class vehicle:
	name=" "
	kind = " "
	price = " "
	def __init__(self,name,kind,price):
		self.name=name
		self.kind=kind
		self.price=price
	def print_method(self):
		print("name=",self.name)
		print("kind/type=",self.kind)
		print("price=",self.price)

car1 = vehicle("Ferrari", "red convertible","$70,000.00")
car2 = vehicle("Jeep", "blue van","$15,000.00")
car1.print_method()
car2.print_method()
