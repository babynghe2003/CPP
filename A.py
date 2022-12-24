import numpy as np
from numpy.linalg import matrix_power
import time

n = int(input())

p = np.array([[1,1],
        [1,0]])
res = matrix_power(p,n-1)

print(res[0][0]%1000000007)


