#numpy learning
#exercise 14, : reshaping,
#reshape (array,shape,order)
#arr.reshape(shape,order)
#resize: will change the data of array with repeated array
#resize(arr,shape)
#arr.resize(shape) will affect the original array

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import numpy as np

#reshape
#one dim array operations
arr=np.array([1,2,3,4,5,6,7,8,9],dtype='i')
arr1=np.reshape(arr,(3,3),order="C") # C ROW Wise
print(arr1.shape)
print(arr1)

arr=np.array([1,2,3,4,5,6,7,8,9,10],dtype='i')
arr1=np.reshape(arr,(5,2),order="C") # C ROW Wise
print(arr1.shape)
print(arr1)

arr1=np.reshape(arr,(5,2),order="F") # C ROW Wise
print(arr1.shape)
print(arr1)

#resize
arr=np.array([1,2,3,4,5,6,7,8,9,10],dtype='i')
arr1=np.resize(arr,(4,4))
print(arr1.shape)
print(arr1)
arr.resize(5,5)
print(arr)