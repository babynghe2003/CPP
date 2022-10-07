from dataclasses import dataclass
class Point:
    x: float
    y: float

class Line:
    def __init__(self, a, b, c): 
        self.a = a 
        self.b = b
        self.c = c


def intersection(l1: Line, l2: Line) -> Point:
    if parallel(l1, l2):
        return None
    x = (l2.b * l1.c - l1.b * l2.c) / (l2.a * l1.b - l1.a * l2.b)
    y = (l1.a * l2.c - l2.a * l1.c) / (l2.a * l1.b - l1.a * l2.b)
    return Point(x, y)

def parallel(l1: Line, l2: Line) -> bool:
    return l1.a * l2.b == l2.a * l1.b
 
def fact(n: int) -> int:
    if n == 0:
        return 1
    return n * fact(n - 1)
def combination(n: int, k: int) -> int:
    return fact(n) // (fact(k) * fact(n - k))

Lines = []
n = int(input())
for i in range(n):
    a, b, c = map(int, input().split())
    Lines.append(Line(a, b, c))
res = 0;
for i in Lines:
    for j in Lines:
        for k in Lines:
            if (i != j and i != k and j != k and parallel(i, j)==False and parallel(i, k)==False and parallel(j, k)==False):
                res += 1
print(res%(10**9 + 7))

