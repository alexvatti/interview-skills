#matplotlib leaning
#exercise 04, sample data to display in histgram

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

ages = [10,15,23,56,34,35,37,45,78,67,99,12,14,16,30,22,23,24]
bins = [0,10,20,30,40,50,60,70,80,90,100]

plt.hist(ages,bins,histtype="bar",rwidth=10)
plt.xlabel("x values")
plt.ylabel("y values")
plt.title("bar graph")
plt.show()

