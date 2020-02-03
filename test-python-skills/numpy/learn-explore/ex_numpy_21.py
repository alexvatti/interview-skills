#numpy learning
#exercise 21: insert and delete
#insert(array,objects,value,axis=0)
#append(array,value,axis=0)
#


import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import numpy as np

#one dim array operations,
arr1=np.array([1,2,3,4,5,6,7,8,9],dtype='i')
arr2=np.array([10,9,8,7,6,5,4,3,2,1],dtype='i')
arr3=np.insert(arr1,1,200)
arr3=np.delete(arr3,1,axis=0)
print(arr3)
print()
arr4=np.insert(arr2,2,300)
arr4=np.delete(arr4,2)
print(arr4)
print()

#two dim
arr1=np.array([[1,2],[3,4],[5,6],[7,8]],dtype='i')
arr2=np.array([[5,6,7],[8,9,10],[11,12,13],[14,15,16]],dtype='i')
arr4=np.insert(arr1,2,[100,200],axis=0)
arr4=np.delete(arr4,2,axis=0)
print(arr4)
print()
arr5=np.insert(arr2,1,100)
arr5=np.delete(arr5,1)
arr5=np.reshape(arr5,(4,3))
print(arr5)
print()





