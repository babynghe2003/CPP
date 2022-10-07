#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T, L, R, d; 
    cin >> T;   
    while(T--){
        cin >> L >> R;
        d=0;
        vector<bool> isPrime(R - L + 1, true);  // x là số nguyên tố khi và chỉ khi isPrime[x - l] == true

        for (long long i = 2; i * i <= R; ++i) {
            for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i) {
                isPrime[j - L] = false;
            }
        }

        if (1 >= L) {  // Xét riêng trường hợp số 1
            isPrime[1 - L] = false;     
        }

        for (long long x = L; x <= R; ++x) {
            if (isPrime[x - L]) {
                d++;
            }
        }
        cout << d << endl;
    }
    return 0;
}