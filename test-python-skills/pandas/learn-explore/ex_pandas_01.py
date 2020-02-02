#pandas leaning
#exercise 01, reading the data from the url, display

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import pandas as pd
data = pd.read_table("http://bit.ly/chiporders")

print(data.head(10)) #head
print(data.tail(10)) #tail
print(data.shape) #diplsay about number of rows,columns
print(data.order_id) # particular columns
print(data.describe()) #mean,std deviation,min,max,25%,50%,75%

