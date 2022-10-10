#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 1010
#define MOD 1000000007


ll multiply_modulo(ll A, ll B, ll M)
{
    if (B == 0)
        return 0;

    ll T = multiply_modulo(A, B / 2, M) % M;

    if (B & 1)
        return ((T + T) % M + A % M) % M;
    else
        return (T + T) % M;
}

void solve() {
	ll comb[1010][1010];
    comb[0][0] = 1;
    for (int i = 1; i < MAXN; i++) {
      comb[i][0] = 1;
      for (int j = 1; j <= i; j++) {
        comb[i][j] = (comb[i-1][j] + comb[i-1][j-1]) % mod;
      }
    }
    
    int K;
	cin >> K;
    int color[K];
    for (int i = 0; i < K; i++)
	 cin >> color[i];
    
    long res = 1;
    int total = 0;
    for (int i = 0; i < K; i++) {
      res = (res * comb[total + color[i] - 1][color[i] - 1]) % mod;
      total += color[i];
    }
    
    cout << res;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // indef();
    
    int t = 1;
    // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
// 1<<n = 2^n