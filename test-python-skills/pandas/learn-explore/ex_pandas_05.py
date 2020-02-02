#pandas leaning
#converting data frame to series
#behaviour or methods
#exercise 05: delete a columns of mentioned column names using drop menthod

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
movies.drop("colors_Reported",axis=1,inplace=True)
print(movies.columns)
print(movies.head())
movies.drop(['city','state'],axis=1,inplace=True)
print(movies.columns)
print(movies.head())
