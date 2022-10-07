#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int A[n];
    int c;
    for (int i = 0;i<n; i++){
        cin >> A[i];
    }
    for (int i = 0; i<n ; i++){
        cin >> c;
        A[i] = c-A[i];
    }
    sort(A,A+n);
    int p = lower_bound(A,A+n,0) - A;
    int ans = 0;

    int i = 0, j = n-1;
    while (i<p){
        if (j>=p && A[i] + A[j] >= 0){
            j--;
            ans++;
        }
        i++;
    }
    ans += (n - p - ans) / 2;
    cout << ans << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }

    return 0;
}