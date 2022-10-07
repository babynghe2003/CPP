#include <bits/stdc++.h>
using namespace std;
 
int MOD = 1000000007;
 
// Function to calculate (a^b)% m
int power(int a, int b, int m)
{
    a %= m;
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = ((res % m) * (a % m))
                  % m;
 
        a = ((a % m) * (a % m)) % m;
 
        b >>= 1;
    }
 
    return res % m;
}
 
// Function to calculate and return
// the product of divisors
int productOfDivisors(int p[], int n)
{
 
    // Stores the frequencies of
    // prime divisors
    map<int, int> prime;
 
    for (int i = 0; i < n; i++) {
        prime[p[i]]++;
    }
    int product = 1, d = 1;
 
    // Iterate over the prime
    // divisors
    for (auto itr : prime) {
 
        int val
            = power(itr.first,
                    (itr.second) * (itr.second + 1) / 2,
                    MOD);
 
        // Update the product
        product = (power(product, itr.second + 1, MOD)
                   * power(val, d, MOD))
                  % MOD;
 
        // Update the count of divisors
        d = (d * (itr.second + 1)) % (MOD - 1);
    }
 
    return product;
}
 
// Driver Code
int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i=0; i<N; i++) cin >> arr[i];
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout <<productOfDivisors(arr,n);
 
    system("pause");
    return 0;
 }