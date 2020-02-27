#numpy learning
#exercise 01,  array(list or tuple,dtype,copy,order,subok,ndim)
#attribute of array: shape,size,dtype,ndim,itemsize

import sys
'''
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')
'''
#path to find the numpy and pandas modules
sys.path.append( '/usr/lib/python36.zip')
sys.path.append( '/usr/lib/python3.6')
sys.path.append( '/usr/lib/python3.6/lib-dynload')
sys.path.append( '/usr/local/lib/python3.6/dist-packages')
sys.path.append( '/usr/lib/python3/dist-packages')

import numpy as np

#list 
my_list = [ [ 4, 1], [-1, 2]]
matrix_A = np.array(my_list)   
print(matrix_A)
print(np.linalg.det(matrix_A))


