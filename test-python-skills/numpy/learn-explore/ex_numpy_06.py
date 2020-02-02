#numpy learning
#exercise 06, : eye(M,N,K,dtype) if N is not given N=M
#attribute of array: shape,size,dtype,ndim,itemsize

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import numpy as np

#default dtype is float

help(np.eye)
arr=np.eye(3,dtype=int) 
print(arr)
print(arr.shape)
print(arr.size)
print(arr.dtype)
print(arr.ndim)

arr=np.eye(4,4,dtype=int)
print(arr)
print(arr.shape)
print(arr.size)
print(arr.dtype)
print(arr.ndim)




