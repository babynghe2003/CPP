#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll A[200001] = {};
ll mod=1000000007;
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a % m)%mod;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}


int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);
    ll N, c , S=1, S2=1;
    cin >> N;
    for (ll i = 1; i<= N; i++){
        cin >> c;
        A[c]++;
        S=(S%mod*c%mod)%mod;
    }

    
    for (int i=1; i<= 200000; i++){
        S2*=A[i]+1;
    }
    cout << binpow(S,S2/2,mod);
    system("pause");
    return 0;
}