#numpy learning
#exercise 10, : slicing
#start : end : step
#if skip start: 0
#if skip end: end
#if skip step: 1

#two dim
#row start:end:step,columns start:end:step

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import numpy as np

arr=np.array([1,2,3,4,5,6,7,8,9,10],dtype='i')
print(arr[0:10:2])
print(arr[5:])
print(arr[:10])
print(arr[2:6])
print()

print(arr[-1::-1])
print(arr[-2::-1])

arr=np.array([[1,2,3],[4,5,6],[7,8,9]],dtype='i')

print(arr[0::,0::])
print(arr[1::,1::])
print(arr[0::,1::])





