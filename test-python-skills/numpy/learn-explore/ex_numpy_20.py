#numpy learning
#exercise 20: split(array,section,axis=0)
#hsplit(array,section)
#vsplit(array,section)


import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import numpy as np

#one dim array operations, same dim not required
arr1=np.array([1,2,3,4,5,6,7,8,9],dtype='i')
arr2=np.array([10,9,8,7,6,5,4,3,2,1],dtype='i')
arr3=np.split(arr1,3)
print(arr3)
print()
arr4=np.split(arr2,2)
print(arr4)
print()

#two dim
arr1=np.array([[1,2],[3,4],[5,6],[7,8]],dtype='i')
arr2=np.array([[5,6],[7,8],[9,10],[11,12]],dtype='i')
arr4=np.split(arr1,2,axis=0)
print(arr4)
print()
arr4=np.split(arr2,4)
print(arr4)
print()



