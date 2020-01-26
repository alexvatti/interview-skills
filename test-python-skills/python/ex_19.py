#inheritance

class fruit:
	def __init__(self):
		print("i am in fruit class:parent class")
class lemon(fruit):
	def __init__(self):
		super().__init__()
		print(" i am in lemon fruit:child class")

obj = lemon()

