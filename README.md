
# USEFUL CPP

## Table of content
  - [BITWISE](#bitwise)
    - [Convert letter to lowercase:](#convert-letter-to-lowercase)
    - [Convert letter to uppercase:](#convert-letter-to-uppercase)
    - [Invert letter's case:](#invert-letters-case)
    - [Letter's position in alphabet:](#letters-position-in-alphabet)
    - [Get letter's position in alphabet (for Uppercase letters only):](#get-letters-position-in-alphabet-for-uppercase-letters-only)
    - [Get letter's position in alphabet (for lowercase letters only):](#get-letters-position-in-alphabet-for-lowercase-letters-only)
    - [Get the maximum integer](#get-the-maximum-integer)
    - [Get the minimum integer](#get-the-minimum-integer)
    - [Get the maximum long](#get-the-maximum-long)
    - [Multiplied by 2](#multiplied-by-2)
    - [Divided by 2](#divided-by-2)
    - [Multiplied by the m-th power of 2](#multiplied-by-the-m-th-power-of-2)
    - [Divided by the m-th power of 2](#divided-by-the-m-th-power-of-2)
    - [Check odd number](#check-odd-number)
    - [Exchange two values](#exchange-two-values)
    - [Get absolute value](#get-absolute-value)
    - [Get the max of two values](#get-the-max-of-two-values)
    - [Get the min of two values](#get-the-min-of-two-values)
    - [Check whether both have the same sign](#check-whether-both-have-the-same-sign)
    - [Calculate 2^n](#calculate-2n)
    - [Whether is factorial of 2](#whether-is-factorial-of-2)
    - [Modulo 2^n against m](#modulo-2n-against-m)
    - [Get the average](#get-the-average)
    - [Get the m-th bit of n (from low to high)](#get-the-m-th-bit-of-n-from-low-to-high)
    - [Set the m-th bit of n to 0 (from low to high)](#set-the-m-th-bit-of-n-to-0-from-low-to-high)
    - [n + 1](#n--1)
    - [n - 1](#n---1)
    - [Get the contrast number](#get-the-contrast-number)
    - [if (x==a) x=b; if (x==b) x=a;](#if-xa-xb-if-xb-xa)
  - [ALGORITHM](#algorithm)
    - [for loop in map](#for-loop-in-map)
    - [sort save index](#sort-save-index)
    - [queude have top max](#queude-have-top-max)
    - [DSU](#dsu)
    - [power_module & multi_module](#power_module--multi_module)
    - [BINPOW](#binpow)

## BITWISE

### Convert letter to lowercase:

- **OR** by space => `(x | ' ')`
- Result is always lowercase even if letter is already lowercase
- eg. `('a' | ' ') => 'a' ; ('A' | ' ') => 'a'`

### Convert letter to uppercase:

- **AND** by underline => `(x & '_')`
- Result is always uppercase even if letter is already uppercase
- eg. `('a' & '_') => 'A' ; ('A' & '_') => 'A'`

### Invert letter's case:

- **XOR** by space => `(x ^ ' ')`
- eg. `('a' ^ ' ') => 'A' ; ('A' ^ ' ') => 'a'`

### Letter's position in alphabet:

- **AND** by `chr(31)`/`binary('11111')`/`(hex('1F') => (x & "\x1F")`
- Result is in 1..26 range, letter case is not important
- eg. `('a' & "\x1F") => 1 ; ('B' & "\x1F") => 2`

### Get letter's position in alphabet (for Uppercase letters only):

- **AND** by ? => `(x & '?') or XOR by @ => (x ^ '@')`
- eg. `('C' & '?') => 3 ; ('Z' ^ '@') => 26`

### Get letter's position in alphabet (for lowercase letters only):

- **XOR** by backtick/`chr(96)/binary('1100000')`/`hex('60')` => `(x ^ '`')`
- eg.` ('d' ^ '`') => 4 ; ('x' ^ '`') => 25`


### Get the maximum integer
```cpp
int maxInt = ~(1 << 31);
int maxInt = (1 << 31) - 1;
int maxInt = (1 << -1) - 1;
```
### Get the minimum integer
```cpp
int minInt = 1 << 31;
int minInt = 1 << -1;
```
### Get the maximum long
```cpp
long maxLong = ((long)1 << 127) - 1;
```
### Multiplied by 2
```cpp
n << 1; // n*2
```
### Divided by 2
```cpp
n >> 1; // n/2
```
### Multiplied by the m-th power of 2
```cpp
n << m; // (3<<5) ==>3 * 2^5 ==> 96
```
### Divided by the m-th power of 2
```cpp
n >> m; // (20>>2) ==>(20/( 2^2) ==> 5
```
### Check odd number
```cpp
(n & 1) == 1;
```
### Exchange two values
```cpp
a ^= b;
b ^= a;
a ^= b;
```
### Get absolute value
```cpp
(n ^ (n >> 31)) - (n >> 31);
```
### Get the max of two values
```cpp
b & ((a-b) >> 31) | a & (~(a-b) >> 31);
```
### Get the min of two values
```cpp
a & ((a-b) >> 31) | b & (~(a-b) >> 31);
```
### Check whether both have the same sign
```cpp
(x ^ y) >= 0;
```
### Calculate 2^n
```cpp
2 << (n-1);
```
### Whether is factorial of 2
```cpp
n > 0 ? (n & (n - 1)) == 0 : false;
```
### Modulo 2^n against m
```cpp
m & (n - 1);
```
### Get the average
```cpp
(x + y) >> 1;
((x ^ y) >> 1) + (x & y);
```
### Get the m-th bit of n (from low to high)
```cpp
(n >> (m-1)) & 1;
```
### Set the m-th bit of n to 0 (from low to high)
```cpp
n & ~(1 << (m-1));
```
### n + 1
```cpp
-~n
```
### n - 1
```cpp
~-n
```
### Get the contrast number
```cpp
~n + 1;
(n ^ -1) + 1; 
```
### if (x==a) x=b; if (x==b) x=a;
```cpp
x = a ^ b ^ x;
```
## ALGORITHM
### for loop in map
```cpp
for (auto const& [key, val] : symbolTable)
{
    std::cout << key        // string (key)
              << ':'  
              << val        // string's value
              << std::endl;
}
```
###  sort save index
```cpp
    sort(A,A+n,[](vla a,vla b){
        return a.value<b.value;
    });
```
### queude have top max
```cpp
priority_queue<int> a, b;
```
### DSU
```cpp
void make_set(int v) {
    parent[v] = v;
    rank[v] = 0; // Gốc của cây có độ cao là 0
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (rank[a] < rank[b]) swap(a, b); // Đặt biến a là gốc của cây có độ cao lớn hơn
        parent[b] = a;
        if (rank[a] == rank[b]) rank[a]++; // Nếu như hai cây có cùng một độ cao, độ cao của cây mới sau khi gộp sẽ tăng 1
    } 
}

int find_set(int v) {
    return v == parent[v] ? v : parent[v] = find_set(parent[v]);
}
```

### power_module & multi_module
```cpp
long long multiply_modulo(long long A, long long B, long long M)
{
    if (B == 0)
        return 0;

    long long T = multiply_modulo(A, B / 2, M) % M;

    if (B & 1)
        return ((T + T) % M + A % M) % M;
    else
        return (T + T) % M;
}

long long power_modulo(long long A, long long B, long long M)  
{
    if (B == 0)
        return 1LL;

    int half = power_modulo(A, B / 2LL, M) % M;
    half = multiply_modulo(half, half, M);

    if (B & 1)
        return multiply_modulo(half, A, M);
    else
        return half;
}
```
### BINPOW
```cpp
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
```



