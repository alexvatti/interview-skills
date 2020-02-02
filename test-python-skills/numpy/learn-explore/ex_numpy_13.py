#numpy learning
#exercise 13 : airthmetic operation
#one dim: scaler, element by element process of array of same shape
#broadcast : allow operations of different size/shape
#two dim

#rule 1 : differ in dimes then only===>lesser size/shape add left side padding to match to second array
#rule 2 : right dim shuold be one, to satisfy
#rule 3 : add one, check if it satisfy

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import numpy as np

#two dim array operations
arr1=np.array([[1],[2],[3]],dtype='i')
print(arr1.shape)
arr2=np.array([1,2,3],dtype='i')
print(arr2.shape)
print(arr1+arr2)



