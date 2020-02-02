#pandas leaning
#exercise 03: converting data frame to series

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import pandas as pd
list_header = ["number","age","gender","profession","salary"]
ufo = pd.read_csv("http://bit.ly/uforeports")
print(type(ufo))
print(type(ufo['City']))
print(ufo.tail())

ufo['location'] = ufo['City'] + " , " + ufo['State']
print(ufo.head())

