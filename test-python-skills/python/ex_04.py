#data types: immutable:(read):numbers,strings,tuples
#data types: mutable: (read/write):lists,dict,sets
#int,float,string,list,tuple,dict,sets,bool
#type: to find the data type of assigned data/value: stored

#string methods/functions
#find,replace,split,count,upper,lower,isupper,islower,isalnum,isalpha,isdigit,istitle,capitalize,title
#len,max,min

s = "hello world new"
print(s)
t = "intel"
print(t)

print(s[0]) #slice
print(t[-1]) #slice
print(s[0:5]) #slice

print(s.find("world")) #find
print(s.replace("world", "earth")) #find repalce
l = s.split(" ") #split
print(l)

print(s.count('E')) #count "e" in the string
print(s.upper())
print(s.lower())
print(s.title())


print(len(s)) #in built
print(len(t)) #in built
print(max(s)) #in built
print(min(s)) # in built


