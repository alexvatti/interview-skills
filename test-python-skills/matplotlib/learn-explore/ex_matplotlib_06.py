#matplotlib leaning
#exercise 05, sample data to display in scatter plot

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

x=[1,2,3,4,5,6,7,8,9,10]
y=[2,4,6,8,10,12,14,16,18,20]

plt.scatter(x,y,label="scatter plot",color='r')
plt.xlabel("x values")
plt.ylabel("y values")
plt.title("bar graph")
plt.show()

