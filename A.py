a, b, n= map(int, input().split())
MOD = 2004010501
x = b*((a*b)**(int(n/2)))
y = (a*b)**(int((n+1)/2))
print(int((x+y)%MOD))
