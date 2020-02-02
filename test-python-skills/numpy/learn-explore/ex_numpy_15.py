#numpy learning
#exercise 15, : flatten method , multi dim array copy to one dim array
#ravel(arr,order)
#one dim
#two dim

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import numpy as np

#two dim array operations
arr=np.array([[1,2,3],[4,5,6],[7,8,9]],dtype='i')
arr1=arr.flatten(order="C")
print(arr1)
print()
arr1=arr.flatten(order="F")
print(arr1)
print()

arr2=np.ravel(arr,order="C")
print(arr2)
print()
arr2=np.ravel(arr,order="F")
print(arr2)
print()





