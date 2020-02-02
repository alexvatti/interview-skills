#numpy learning
#exercise 17, : concatenate(arrays,axis=0,out=none)
#condition: same dime
#
#one dim
#two dim

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import numpy as np

#one dim array operations
#arr1=np.array([1,2,3,4,5,6,7,8,9,10],dtype='i')
#arr2=np.array([1,2,3,4,5,6,7,8,9,10],dtype='i')
#arr3=np.zeros(20)
#arr3=np.concatenate((arr1,arr2),axis=0)
#print(arr3)

arr1=np.array([[1,2],[3,4]],dtype='i')
arr2=np.array([[5,6],[7,8]],dtype='i')
arr3=np.concatenate((arr1,arr2))
print(arr3)
print()



