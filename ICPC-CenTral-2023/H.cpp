#include <bits/stdc++.h>
using namespace std;
#define ll long long
void indef(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
}

ll L[200000];

void solve() {
    int n, k;
    cin >> n >> k;
    ll A[n];
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    for (int i = 0; i < n-k+1; i++){
        ll S = 0;
        for (int j = i; j < i+k; j++){
            S+=A[j];
        }
        L[i] = S;
        cout << S << " ";

        for (int j = 0; j<i-k+1; j++){
            L[i] = max(L[i],max(S - L[j], -S + L[j]));
        }
    }
    cout << endl;
    ll Max = abs(L[0]);
    for (int i = 0; i<n-k+1; i++){
        Max = max(Max,abs(L[i]));
        cout << L[i] << " ";
    }
    cout << Max << endl;

}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    indef();

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

