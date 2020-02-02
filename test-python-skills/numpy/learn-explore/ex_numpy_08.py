#numpy learning
#exercise 08, : data type in numpy
#boolean,interger,float,complex,unsigned integer
#bool
#int,intc,intp,int,int16,int32,int64,int_
#unit,uint16,uint32,uint64
#float,float16,float32,float64,float_
#complex,complex64,complex12,complex_



import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import numpy as np

x=np.float32(1)
print(type(x))

a=np.array([1,2,3],dtype='i')
print(type(a))
print(a.dtype)
#FIXME NOT WORKING
a.astype(dtype='f')
np.float32(a)
print(a.dtype)




