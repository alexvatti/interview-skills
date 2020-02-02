#pandas leaning
#behaviour or methods
#exercise 11: merge

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import pandas as pd
 
df1= pd.DataFrame({ "HPI":[80,90,70,60],"Int_Rate":[2,1,2,3],"IND_GDP":[50,45,45,67]}, index=[2001, 2002,2003,2004])
 
df2=pd.DataFrame({ "HPI":[80,90,70,60],"Int_Rate":[2,1,2,3],"IND_GDP":[50,45,45,67]}, index=[2005, 2006,2007,2008])
 
merged= pd.merge(df1,df2)
 
print(merged)
print(merged.columns)

merged1= pd.merge(df1,df2,on ="HPI")
print(merged1)
print(merged1.columns)
