#numpy learning
#exercise 16, : transpose(array,axis=none)
#one dim : no use, on one dim
#two dim : change rowss to columns
#swapaxes: swapaxes(array,axis1,axis2) ===> only for two dim only
import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import numpy as np

#two dim array operations
arr=np.array([[1,2,3],[4,5,6],[7,8,9]],dtype='i')
print(np.transpose(arr,axes=(1,0)))
print()
print(np.transpose(arr,axes=(0,1))) #same of original
print()

print(np.swapaxes(arr,1,0))
