#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    if (n == 1){
        cout << 3;
        return;
    }
    int c = n/3+3;
    cout << n + c;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}