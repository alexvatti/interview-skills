#numpy learning
#exercise 23: matrix operations
#numpy arrays: dot, + , - , * , /, transpose

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import numpy as np

#two dim
matrix1=np.matrix([[1,2],[3,4],[5,6],[7,8]],dtype='i')
matrix2=np.matrix([[1,2],[3,4],[5,6],[7,8]],dtype='i')
print(matrix1+matrix2)
print()
print(matrix1-matrix2)
print()

matrix1=np.matrix([[1,2],[3,4],[5,6],[7,8]],dtype='i')
matrix2=np.matrix([[1,2,3,4],[5,6,7,8]],dtype='i')
print(matrix1*matrix2)
print()
print(matrix1.T)
print()