#numpy learning
#exercise 12, : airthmetic operation
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
arr=np.array([1,2,3,4,5,6,7,8,9,10],dtype='i')
print(arr+2)
print(arr-2)
print(arr*2)
print(arr/2)
print(arr**2)
print(arr.sum())
print(arr.min())
print(arr.max())
print(arr.std())
print(arr.sort())
print()

#two dim array operations
arr=np.array([[1,2,3],[4,5,6],[7,8,9]],dtype='i')
print(arr+2)
print(arr-2)
print(arr*2)
print(arr/2)
print(arr**2)

#two two dim array: add,sub, mul,div,transpose
arr1=np.array([[1,2,3],[4,5,6],[7,8,9]],dtype='i')
arr2=np.array([[1,2,3],[4,5,6],[7,8,9]],dtype='i')
print(arr1+arr2)
print(arr1-arr2)
print(arr1*arr2)
print(arr1.T)
print(arr2.T)




