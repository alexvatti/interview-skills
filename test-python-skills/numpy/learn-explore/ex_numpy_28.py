#numpy learning
#exercise 28: linalg
#invert, power of matrix, linear exq solving,determinants

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
matrix3=np.linalg.det(matrix1)
print()
print(matrix3)
print()
#3x+2y-5z=13
#3x+3y-2z=13
#7x+5y-3z=26
matrix1=np.array([[6,2,-5],[3,3,-2],[7,5,-3]],dtype='i')
matrix2=np.array([13,13,26],dtype='i')
matrix3=np.linalg.det(matrix1)
print()
print(matrix3)



