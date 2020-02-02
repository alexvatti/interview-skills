#pandas leaning
#behaviour or methods
#exercise 06: delete a rows

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import pandas as pd
col =['city', 'colors_Reported', 'shape_Reported', 'state', 'time']
movies = pd.read_csv("http://bit.ly/uforeports")
print(type(movies))
print(movies.columns)
movies.columns = col
print(movies.columns)
print(movies.dtypes)
movies.drop([0,1],axis=0,inplace=True)
print(movies.head())
