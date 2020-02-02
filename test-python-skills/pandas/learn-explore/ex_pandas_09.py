#pandas leaning
#behaviour or methods
#exercise 08: filter

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import pandas as pd
col =['city', 'colors_Reported', 'shape_Reported', 'state', 'time']
movies = pd.read_csv("http://bit.ly/uforeports",header=None, names=col)
print(movies.columns)
print(movies.shape)
print(movies.head())
#
#bools = []

#for state in movies.state:
#    if state == "NY":
#        bools.append(True)
#    else:
#        bools.append(False)

#print(len(bools))
#is_long = pd.Series(bools)
#print(is_long.head())
#print(movies[is_long])

#state_ny = (movies.state=="NY")
#print(movies[state_ny])
