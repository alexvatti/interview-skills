#numpy learning
#exercise 19: vstack,hstack :
# hstack(tuple of arrays) as concatenate function axis=0
#condition: same dime mandatory
#one dim: one axis
#two dim,three,four dim: concate with axis 1

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import numpy as np

#one dim array operations, same dim not required
arr1=np.array([6,7,8,9,10],dtype='i')
arr2=np.array([1,2,3,4,5,-1],dtype='i')
arr3=np.hstack((arr1,arr2))
print(arr3.shape)
print(arr3)
print()

#two dim
arr1=np.array([[1,2],[3,4]],dtype='i')
arr2=np.array([[5,6],[7,8]],dtype='i')
arr4=np.hstack((arr1,arr2))
print(arr4)
print(arr4.shape)
print()



