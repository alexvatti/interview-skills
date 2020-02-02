#numpy learning
#exercise 05, : linspace(start,stop,num=50,endpoint,retstep,dtype,axis)
#attribute of array: shape,size,dtype,ndim,itemsize

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import numpy as np

#default dtype is float
#one dim
arr=np.linspace(1,100,num=5) # in between 1,100 will create 5 numbers
print(type(arr))            
print(arr.shape)  
print(arr.size)           
print(arr.dtype)
print(arr.ndim)
print(arr)
print()
for ele in arr:
    print(ele)

#one dim,do not include 100
arr=np.linspace(1,100,num=5,retstep=True) 
print(type(arr))
print(arr.shape)
print(arr.size)
print(arr.dtype)
print(arr.ndim)
print(arr)
print()
for ele in arr:
    print(ele)

#one dim,do not include 100
arr=np.linspace(1,100,num=4,retstep=True)
print(type(arr))
print(arr.shape)
print(arr.size)
print(arr.dtype)
print(arr.ndim)
print(arr)
print()
for ele in arr:
    print(ele)






