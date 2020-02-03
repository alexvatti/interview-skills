#numpy learning
#exercise 26: linalg
#invert, power of matrix, linear exq solving,determinents

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import numpy as np

#two dim
#3x+y=9
#x+2y=8
matrix1=np.array([[3,1],[1,2]],dtype='i')
matrix2=np.array([9,8],dtype='i')
matrix3=np.linalg.solve(matrix1,matrix2)
print()
print(matrix3)
print(matrix3.shape)


