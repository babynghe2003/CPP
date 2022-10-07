import re


def pow(a,b,n):
    s = 1;
    for i in range(b):
        s = ((s%n)*(a%n))%n;
    return s%n;

a,m,n = map(int,input().split())
b = a
for i in range(m-1):
    a = pow(b%n,a,n);
    
print(a%n)