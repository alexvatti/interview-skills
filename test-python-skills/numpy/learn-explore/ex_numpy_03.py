#numpy learning
#exercise 03, : zeros(shape,dtype,order)
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
arr=np.zeros(shape=(5),dtype=int) #size 5 elements type int
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
arr=np.zeros(shape=(2,2),dtype=int) #two dim 2,2
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
arr=np.zeros(shape=(3,3),dtype=int) #two dim 3,3
print(type(arr))
print(arr.shape)
print(arr.size)
print(arr.dtype)
print(arr.ndim)
print(arr)
print()
for ele in arr:
    print(ele)



