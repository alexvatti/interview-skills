#pandas leaning
#exercise 02, reading the data from the url, display
import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import pandas as pd
list_header = ["number","age","gender","profession","salary"]
data = pd.read_table("http://bit.ly/movieusers", sep = '|', header=None, names=list_header, skiprows=0, skipfooter=0)
print(type(data))
print(data.head())
print(data.tail())
print(data.shape)
print(data.describe())
#print(data.age)

