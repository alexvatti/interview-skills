#numpy learning
#exercise 11, : advanced indexing
#basic indexing,slicing: arr[index--> interger,slice object in start:stop:step size
#advanced indexing: x[index] -> copy of data --->ndarray,tuple sequence object,tuple non srquence object
#two type: interger indexing -> integer as indexing
#boolean indexing

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import numpy as np

arr=np.array([1,2,3,4,5,6,7,8,9,10],dtype='i')
arr_index=[1,4,6]
index=np.array(arr_index)
print(arr[index]) #method 1
print(arr[arr_index]) #method 2
print(arr[[1,4,6]]) #method 3
print(arr[arr>=5]) #boolen index based on the condition

print()

#FIXME:YET TO GET
arr=np.array([[1,2,3],[4,5,6],[7,8,9]],dtype='i')
print(arr[arr>=5])
#arr_index=[[0,0],[0,1],[0,2],[2,0],[2,1],[2,2]]
#print(arr[arr_index])
#print(arr[0:,0:])
#print(arr[1:,1:])
#print(arr[0:,1:])





