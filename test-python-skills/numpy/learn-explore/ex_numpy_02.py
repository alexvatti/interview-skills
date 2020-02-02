#numpy learning
#exercise 02, : arange(start,stop,step,dtype)
#attribute of array: shape,size,dtype,ndim,itemsize

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import numpy as np

arr=np.arange(1,10,1,dtype=int) #start 1, end 9, step 1
print(type(arr))            
print(arr.shape)  
print(arr.size)           
print(arr.dtype)
print(arr.ndim)
print(arr)
print()
for ele in arr:
    print(ele)


arr=np.arange(1,10,2,dtype=int) #start 1, end 9, step 2
print(type(arr))
print(arr.shape)
print(arr.size)
print(arr.dtype)
print(arr.ndim)
print(arr)
print()
for ele in arr:
    print(ele)

arr=np.arange(20,dtype="complex") #start 0,end 20, step 1(default) , complex
print(type(arr))
print(arr.shape)
print(arr.size)
print(arr.dtype)
print(arr.ndim)
print(arr)
print()
for ele in arr:
    print(ele)



