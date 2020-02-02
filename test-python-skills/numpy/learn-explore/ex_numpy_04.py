#numpy learning
#exercise 04, : ones(shape,dtype,order)
#attribute of array: shape,size,dtype,ndim,itemsize

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import numpy as np

#default dtype is float
#order c as default
#one dim
arr=np.ones(shape=(5),dtype=int) #one dim size 5 filled with ones
print(type(arr))            
print(arr.shape)  
print(arr.size)           
print(arr.dtype)
print(arr.ndim)
print(arr)
print()
for ele in arr:
    print(ele)

#two dim
arr=np.ones(shape=(2,2),dtype=int)
print(type(arr))
print(arr.shape)
print(arr.size)
print(arr.dtype)
print(arr.ndim)
print(arr)
print()
for ele in arr:
    print(ele)

#two dim
arr=np.ones(shape=(3,3),dtype=int)
print(type(arr))
print(arr.shape)
print(arr.size)
print(arr.dtype)
print(arr.ndim)
print(arr)
print()
for ele in arr:
    print(ele)



