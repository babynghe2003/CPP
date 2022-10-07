#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long MOD = 2004010501;

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


void solve() {
    long long a,b,n;
    cin >> a >> b >> n;
    long long x = b,y=1;
    long long sc,sl;
    sl = n/2;
    if(n%2 == 0){
        sc = n/2;
    }else{
        sc = (n/2)+1;
    }
    sl = (sl%(MOD-1));
    sc = (sc%(MOD-1));
    
    // for (long long i = 0; i < sc; i++){
    //         y = y*((a%MOD*b%MOD)%MOD)%MOD;
    // }
    // for (long long i = 0; i < sl; i++){
    //         x = x*((a%MOD*b%MOD)%MOD)%MOD;
    // }
    
    x = x*power_modulo(((a%MOD*b%MOD)%MOD),sl, MOD);
    y = y*power_modulo(((a%MOD*b%MOD)%MOD),sc, MOD);

    cout << (x+y)%MOD;
   
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

    // solve();
    
    return 0;
}