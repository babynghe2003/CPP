n = int(input())
era = [True] * (n+1)
def sieve():
    era[0] = era[1] = False
    for i in range(2,n+1):
        if not era[i]: continue
        for j in range(i+i,n+1,i):
            era[j] = False
    
sieve()
print(f'Primes in [1..{n}]:')
for a in range(1,n+1):
    if era[a]: print(a, end=' ')
print()
for a in range(1,n+1):
    if not era[a]: continue
    for b in range(a+1, n+1):
        if not era[b]: continue
        for c in range(b+1, n+1):
            if not era[c]: continue
            if (a+b+c) % 3 == 0:
                print(f'{a}, {b}, {c} are primes, have sum = {a+b+c}, divisible by 3')

