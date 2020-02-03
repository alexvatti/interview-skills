#numpy learning
#exercise 25: linalg
#invert, power of matrix, linear exq solving,determinents

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import numpy as np
#two dim
matrix1=np.matrix([[1,2],[3,4]],dtype='i')
matrix2=np.linalg.matrix_power(matrix1,2)
print()
print(matrix2)
print()
matrix2=np.linalg.matrix_power(matrix1,-1)
print(matrix2)
print()
print(np.allclose(np.dot(matrix1,matrix2),np.eye(2,2)))
print()

