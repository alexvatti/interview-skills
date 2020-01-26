#mutable:
#index,slice,insert,append,extend,sort,reverse,pop,index,count,
#remove : if exit it will remove: otherwise throw error
#clear

l = [ '1', '2', '3', '4', '5',1 ,2 ,3 ,4 ,12.34, 13.45]
print(l)
print(type(l))

print(l.remove(2))
print(l)
print(l.remove(4))
print(l)
print(l.remove('4'))
print(l)

l.append(6)
print(l)
l.insert(0,0)
print(l)
t = ["extend", "other" ]
l.extend(t)
print(l)

print(l[0:5])
print(l[5:])
print(l)
