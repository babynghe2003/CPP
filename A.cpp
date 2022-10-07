#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    long long a,b;
    cin >> n;

    a = floor(sqrt(n));
    b = ceil(sqrt(n));
    if (a*b<n) a++;
    while (a*b>n){
        a--;
        b++;
    }
    if (a*b<n){
        a++;
        b--;
    }
    if (a>b) swap(a,b);

    cout << a << " " << b;


}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    
    return 0;
}
