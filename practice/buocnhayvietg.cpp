#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long MOD = 2004010501;

void solve() {
    long long a,b,n;
    cin >> a >> b >> n;
    long long x = b,y=1;
    
    for (long long i = 0; i < n; i++){
        if (i%2 == 0){
            y = a*x%MOD;
        } else {
            x = y*b%MOD;
        }
    }
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