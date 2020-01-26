#multi level inheitance

class A:
	pass
class B:
	pass
class C(A,B):
	pass

print(issubclass(C,A),issubclass(C,B))
