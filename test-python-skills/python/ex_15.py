#file operation
#copy,read,write operation
#close
#remove,delete a file
import os
fr = open("ex_01.py", 'r')
fw = open("ex_100.py", 'a')
for l in fr:
	fw.write(l)
fr.close()
fw.close()
os.remove("ex_100.py")
	
