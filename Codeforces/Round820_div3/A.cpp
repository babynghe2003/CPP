#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a,b,c;
    cin >> a >> b >> c;
    long long resA = a-1;
    long long resB = abs(b-c) + c - 1;
    if (resA<resB) cout << 1;
    else if (resA>resB) cout << 2;
    else cout << 3;
    cout << endl;
   
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }

    // solve();
    
    return 0;
}