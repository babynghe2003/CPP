import math

n = int(input())
for i in range(n):
    a = int(input())
    if a>2:
        print((int(math.factorial(a)*2/3)%998244353))
    else:
        print(2)

