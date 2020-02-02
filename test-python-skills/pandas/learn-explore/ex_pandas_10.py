#pandas leaning
#behaviour or methods
#exercise 10: create a data frame from dict

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import pandas as pd
 
XYZ_web= {'Day':[1,2,3,4,5,6], "Visitors":[1000, 700,6000,1000,400,350], "Bounce_Rate":[20,20, 23,15,10,34]}
 
df= pd.DataFrame(XYZ_web)
 
print(df)
print(df.shape)
print(df.describe())
print(df.head(2))
print(df.tail(2))
print(df.columns)
print(df["Day"])
print(df["Visitors"])
print(df["Bounce_Rate"])
df.rename(columns={"Visitors":"Users"},inplace=True)
print(df.columns)