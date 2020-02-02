#numpy learning
#exercise 01,  array(list or tuple,dtype,copy,order,subok,ndim)
#attribute of array: shape,size,dtype,ndim,itemsize

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import numpy as np

#list
my_list = [1,2,3,4,5]
arr = np.array(my_list)   
print(type(arr))            
print(arr.shape)  
print(arr.size)           
print(arr.dtype)
print(arr.ndim)
print(arr)
print(arr[0], arr[1], arr[2],arr[3],arr[4])   #index
arr[0] = 5                  #assign
print(arr)                  


#two dim list
matrix = np.array([[1,2,3],[4,5,6],[7,8,9]])  
print(matrix) 
print(matrix.shape)   
print(matrix.size)   
print(matrix.dtype)
print(matrix.ndim)                 
print(matrix[0, 0], matrix[0, 1], matrix[0, 2])   
print(matrix[1, 0], matrix[1, 1], matrix[1, 2]) 
print(matrix[2, 0], matrix[2, 1], matrix[2, 2]) 

#tuple
my_tuple = (1,2,3,4,5)
arr = np.array(my_tuple)   
print(type(arr))            
print(arr.shape)  
print(arr.size)           
print(arr.dtype)
print(arr.ndim)
print(arr)
print(arr[0], arr[1], arr[2],arr[3],arr[4])   
arr[0] = 5                  
print(arr) 


