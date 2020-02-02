#https://www.learndatasci.com/tutorials/python-pandas-tutorial-complete-introduction-for-beginners/

#pandas leaning
#behaviour or methods
#exercise 13

import sys
sys.path.append('/usr/lib/python3.4')
sys.path.append('/usr/lib/python3.4/plat-x86_64-linux-gnu')
sys.path.append('/usr/lib/python3.4/lib-dynload')
sys.path.append('/usr/local/lib/python3.4/dist-packages')
sys.path.append('/usr/lib/python3/dist-packages')

import pandas as pd

data = {
    'apples': [3, 2, 0, 1], 
    'oranges': [0, 3, 7, 2]
}

purchase = pd.DataFrame(data,index=["June","July","August","september"])

print(purchase)
print(purchase.info())
print(purchase.columns)
print(purchase.shape)
print(purchase.describe())
print(purchase.isnull())
purchase=purchase.append(purchase)
print(purchase.shape)
purchase.drop_duplicates(inplace=True)
print(purchase.shape)




