#numpy learning
#exercise 07, : random.rand(m,n) rows,colums random values uniform distribution
#exercise 07, : random.randn(m,n) rows,colums random values normal distribution
#attribute of array: shape,size,dtype,ndim,itemsize

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import numpy as np

#uniform distribution
help(np.random.rand)
arr=np.random.rand(3)
print(arr)
print(arr.shape)
print(arr.size)
print(arr.dtype)
print(arr.ndim)

arr=np.random.rand(3,3)
print(arr)
print(arr.shape)
print(arr.size)
print(arr.dtype)
print(arr.ndim)


#standard normal distribution
help(np.random.randn)
arr=np.random.randn(3)
print(arr)
print(arr.shape)
print(arr.size)
print(arr.dtype)
print(arr.ndim)

arr=np.random.randn(3,3)
print(arr)
print(arr.shape)
print(arr.size)
print(arr.dtype)
print(arr.ndim)







