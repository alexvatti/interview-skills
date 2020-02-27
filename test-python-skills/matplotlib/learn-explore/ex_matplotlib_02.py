#matplotlib leaning
#exercise 02, sample data to display in line [two graphs]

import sys
'''sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')'''

#path to find the numpy and pandas modules
sys.path.append( '/usr/lib/python36.zip')
sys.path.append( '/usr/lib/python3.6')
sys.path.append( '/usr/lib/python3.6/lib-dynload')
sys.path.append( '/usr/local/lib/python3.6/dist-packages')
sys.path.append( '/usr/lib/python3/dist-packages')

import pandas as pd
import matplotlib.pyplot as plt

'''data = pd.read_table("http://bit.ly/chiporders")

print(data.head(10)) #head
print(data.tail(10)) #tail
print(data.shape) #diplsay about number of rows,columns
print(data.order_id) # particular columns
print(data.describe()) #mean,std deviation,min,max,25%,50%,75%'''

x1= [1,2,3,4,5]
y1= [2,4,6,8,10]

x2= [1,2,3,4,5]
y2= [3,6,9,12,15]

plt.plot(x1,y1, label="first graph")
plt.plot(x2,y2, label="second graph")
plt.xlabel("x values")
plt.ylabel("y values")
plt.title("x-y graph")
plt.legend()
plt.show()

