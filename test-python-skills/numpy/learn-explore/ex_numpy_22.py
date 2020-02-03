#numpy learning
#exercise 22: matrix operations
#numpy arrays: dot, + , - , * , /, transpose

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import numpy as np

#two dim
arr1=np.array([[1,2],[3,4],[5,6],[7,8]],dtype='i')
arr2=np.array([[1,2],[3,4],[5,6],[7,8]],dtype='i')
print(arr1+arr2)
print()
print(arr1-arr2)
print()
arr3=np.array([[1,2,3,4],[5,6,7,8]],dtype='i')
arr4=arr1.dot(arr3)
print(arr4)
print()

print(arr1.T)
print()