import sys
x = 0
y = 1
for i in range(3,1005):
    A.append(A[i-1]+A[i-2])
for line in sys.stdin:
    t = int(line)
    print(A[t])

