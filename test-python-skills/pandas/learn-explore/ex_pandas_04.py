#pandas leaning
#converting data frame to series
#exercise 03: behaviour or methods

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import pandas as pd
movies = pd.read_csv("http://bit.ly/uforeports")
print(type(movies))
print(movies.shape)
print(movies.dtypes)
#print(movies.head())
#print(movies.tail())
print(movies.columns)
movies.rename(columns={"Colors Reported":"Colors_Reported"},inplace=True)
print(movies.columns)
movies.columns = movies.columns.str.replace(' ','_')
print(movies.columns)