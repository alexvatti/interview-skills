#numpy learning
#exercise 09, : indexing
#one dim array
#double dim array


import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import numpy as np

arr=np.array([1,2,3,4,5,6,7,8,9,10],dtype='i')
print(arr[0],arr[1],arr[3],arr[4],arr[5])
print()
print(arr[-1],arr[-2],arr[-3],arr[-4])

arr=np.array([[1,2,3],[4,5,6],[7,8,9]],dtype='i')
print(arr[0,0],arr[0,1],arr[0,2])
print(arr[1,0],arr[1,1],arr[1,2])
print(arr[2,0],arr[2,1],arr[2,2])
print()
print(arr[-1,0],arr[-1,-1],arr[-1,-2])




